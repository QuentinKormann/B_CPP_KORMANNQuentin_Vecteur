//**************************************************************************************************************************************
//Fichier										: CGameObject.cpp
//
//Classe										: cGameObject
//**************************************************************************************************************************************

#include "CGameObject.h"


cGameObject::cGameObject()
{
}

cGameObject::cGameObject(const char* Nom, SDL_Window *window, SDL_Renderer *renderer)
{
	//Récupère la taille de la fenêtre
	SDL_GetWindowSize(window, &nHeight, &nWidth);

	nDirection = 128;
	nVelocite = 5;
	image = IMG_Load(Nom);
	texture = SDL_CreateTextureFromSurface(renderer, image);
	Pos = cVect2D((nHeight / 2) - 32, (nWidth / 2) - 32);
}

cGameObject::~cGameObject()
{

}


//**************************************************************************************************************************************
//Descritption									: Affiche le personnage lorsqu'il est immobile
//
//Entrée										: Fenêtre de jeu
//
//Sortie										: Personnage immobile dans la derniere direction ou il s'est déplacé
//**************************************************************************************************************************************

void cGameObject::DisplayPIdle(SDL_Window *window, SDL_Renderer *renderer)
{
	srcrect	= { 0, nDirection, 64, 64 };
	dstrect = { (int)Pos.getVectX(), (int)Pos.getVectY(), 64, 64 };
	SDL_RenderCopy(renderer, texture, &srcrect, &dstrect);
	SDL_RenderPresent(renderer);
	SDL_RenderClear(renderer);
}


//**************************************************************************************************************************************
//Descritption									: Affiche le personnage lorsqu'il ce déplace vers la droite ou vers la gauche
//
//Entrée										: Sprite du personnage et la fenêtre de jeu
//
//Sortie										: Personnage se déplacant vers la droite ou vers la gauche
//**************************************************************************************************************************************

void cGameObject::DisplayPLeftRight(int sprite, int orientation, SDL_Window * window, SDL_Renderer * renderer)
{
	if (orientation == 1) 
	{
		nDirection = 64;
		Pos.sousVect(nVelocite, 0);
	}

	else if (orientation == 2)
	{
		nDirection = 192;
		Pos.addiVect(nVelocite, 0);
	}


	srcrect = { sprite * 64, nDirection, 64, 64 };
	dstrect = { (int)Pos.getVectX(), (int)Pos.getVectY(), 64, 64 };

	SDL_RenderCopy(renderer, texture, &srcrect, &dstrect);
	SDL_RenderPresent(renderer);
	SDL_RenderClear(renderer);
}


//**************************************************************************************************************************************
//Descritption									: Affiche le personnage lorsqu'il ce déplace vers le haut ou vers le bas
//
//Entrée										: Fenetre de jeu
//
//Sortie										: Personnage se déplace vers le haut ou vers le bas
//**************************************************************************************************************************************

void cGameObject::DisplayPUpDown(int sprite, int orientation, SDL_Window * window, SDL_Renderer * renderer)
{
	if (orientation == 1)
	{
		nDirection = 0;
		Pos.sousVect(0, nVelocite);
	}

	else if (orientation == 2)
	{
		nDirection = 128;
		Pos.addiVect(0, nVelocite);
	}

	srcrect = { sprite * 64, nDirection, 64, 64 };
	dstrect = { (int)Pos.getVectX(), (int)Pos.getVectY(), 64, 64 };

	SDL_RenderCopy(renderer, texture, &srcrect, &dstrect);
	SDL_RenderPresent(renderer);
	SDL_RenderClear(renderer);
}


//**************************************************************************************************************************************
//Descritption									: Detruit les instance de la SDL de cette classe
//
//Entrée										: 
//
//Sortie										: Instance de la SDL de cette classe détruite
//**************************************************************************************************************************************

void cGameObject::Destroy()
{
	SDL_DestroyTexture(texture);
	SDL_FreeSurface(image);
}