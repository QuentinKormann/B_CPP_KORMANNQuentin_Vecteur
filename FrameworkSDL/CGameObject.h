//**************************************************************************************************************************************
//Fichier										: CGameObject.h
//
//Classe										: cGameObject
//Descritption									: Gere les différent objet du jeu
//
//Attribut										: SDL_Rect srcrect		: Donnée sur le découpage du sprite
//												  SDL_Rect dstrect		: Position et taille ou le sprite sera placé
//												  SDL_Surface *image	: Pointeur de l'image qui sera utilisée
//												  SDL_Texture *texture	: Pointeur de la zone d'application de l'image
//												  cVect2D Pos			: Classe gerant la position du sprite 
//												  int nDirection		: Entier indiquant la ligne correspondant a la direction du sprite
//												  int nVelocite			: Entier indiquant la velocite du deplacement du sprite
//												  int nHeight			: Entier indiquant la hauteur de l'écran
//												  int nWidth			: Entier indiquant la longueur de l'écran
//
//Note											: Bloquer la sortie du sprite de l'écran pourrait être implémentée
//**************************************************************************************************************************************

#ifndef CGameObject_H
#define CGameObject_H

#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include "CVect2D.h"

class cGameObject
{
private:
	SDL_Rect srcrect;
	SDL_Rect dstrect;
	SDL_Surface *image;
	SDL_Texture *texture;
	cVect2D Pos;
	int nDirection;
	int nVelocite;
	int nHeight;
	int nWidth;

public:
	//Constructeur
	cGameObject();
	cGameObject(const char* Nom, SDL_Window *window, SDL_Renderer *renderer);

	//Destructeur
	~cGameObject();

	//Affiche le personnage immobile
	void DisplayPIdle(SDL_Window *window, SDL_Renderer *renderer);

	//Affiche le personnage lorsqu'il se deplace vers la droite ou vers la gauche
	void DisplayPLeftRight(int sprite, int orientation, SDL_Window *window, SDL_Renderer *renderer);

	//Affiche le personnage lorsqu'il se deplace vers le haut ou vers le bas
	void DisplayPUpDown(int sprite, int orientation, SDL_Window *window, SDL_Renderer *renderer);

	//Detruit et libere l'espace crée par la SDL dans cette classe
	void Destroy();
};

#endif // !CGameObject_H