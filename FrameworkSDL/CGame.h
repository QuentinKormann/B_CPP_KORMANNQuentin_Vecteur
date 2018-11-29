//**************************************************************************************************************************************
//Fichier										: CGame.h
//
//Classe										: cGame
//Descritption									: Gere le jeu
//
//Attribut										: int nScreen_Height		: Entier donnant la hauteur de la fen�tre
//												  int nScreen_Width			: Entier donnant la longueur de la fen�tre
//												  bool m_binQuit			: Boolean indiquant si la fen�tre est ouverte ou ferm�e
//												  Uint32 sprite				: Entier indiquant un chiffre entre 1 et 9 pour l'animation des sprite
//												  Uint32 ticks				: Entier contenant le nombre de ticks du jeu
//												  cGameObject Personnage	: Classe gerant le sprite du personnage principale
//												  SDL_Event event			: Indique les evenement de la SDL
//												  SDL_Window *window		: Pointeur sur la fen�tre de jeu
//												  SDL_Renderer *renderer	: Pointeur indiquant dans quelle fen�tre l'affichage ce ferra
//
//Note											: Message d'erreur a r�soudre
//**************************************************************************************************************************************

#ifndef CGame_H
#define CGame_H

#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include "CGameObject.h"

class cGame 
{
private:
	int nScreen_Height;
	int nScreen_Width;
	bool m_binQuit;
	Uint32 sprite;
	Uint32 ticks;
	cGameObject Personnage;
	SDL_Event event;
	SDL_Window *window;
	SDL_Renderer *renderer;
	
public:
	//Constructeur
	cGame();

	//Destructeur
	~cGame();

	//Jeu
	void Play();
};

#endif // !CGame_H