//**************************************************************************************************************************************
//Fichier										: CGame.cpp
//
//Classe										: cGame
//**************************************************************************************************************************************

#include "CGame.h"

cGame::cGame()
{
	//Initialise la SDL
	SDL_Init(SDL_INIT_VIDEO);

	//Initialise la SDL_Image 
	IMG_Init(IMG_INIT_PNG);

	m_binQuit = false;
	nScreen_Height = 800;
	nScreen_Width = 800;

	//Crée une fenêtre
	window = SDL_CreateWindow("SDL2 Displaying Image", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, nScreen_Height, nScreen_Width, 0);
	renderer = SDL_CreateRenderer(window, 1, 0);

	Personnage = cGameObject("SPRITE2.PNG", window, renderer);

	ticks = SDL_GetTicks();
}

cGame::~cGame()
{
	Personnage.Destroy();
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	IMG_Quit();
	SDL_Quit();
}

//**************************************************************************************************************************************
//Descritption									: Lance et gère le jeu
//
//Entrée										:
//
//Sortie										:
//**************************************************************************************************************************************

void cGame::Play()
{
	while (!m_binQuit)
	{
		SDL_PollEvent(&event);
		sprite = (ticks / 100) %9;

		if (SDL_GetTicks() - ticks > 50) 
		{
			ticks = SDL_GetTicks();

			switch (event.type)
			{
				case SDL_QUIT:
					m_binQuit = true;
					break;
			}

			//Si une touche est enfoncée
			if (event.type == SDL_KEYDOWN)
			{
				switch (event.key.keysym.sym)
				{
					case SDLK_LEFT:
						Personnage.DisplayPLeftRight(sprite, 1, window, renderer);
						break;

					case SDLK_RIGHT:
						Personnage.DisplayPLeftRight(sprite, 2, window, renderer);
						break;

					case SDLK_UP:
						Personnage.DisplayPUpDown(sprite, 1, window, renderer);
						break;

					case SDLK_DOWN:
						Personnage.DisplayPUpDown(sprite, 2, window, renderer);
						break;
				}
			}

			else 
			{
				Personnage.DisplayPIdle(window, renderer);
			}
		}
	}
}