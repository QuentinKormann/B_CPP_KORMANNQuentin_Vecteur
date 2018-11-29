//**************************************************************************************************************************************
//Fichier										: CVect2D.h
//
//Classe										: cVect2D
//Descritption									: Gestion de la position X et Y
//
//Attribut										: float m_fltX		: Position X
//												  float m_fltY		: Position Y
//**************************************************************************************************************************************

#ifndef CVect2D_H
#define CVect2D_H

#pragma once

//Classe permettant de faire des racine carée et de multiplier des chiffre par une puissance
#include <math.h>

class cVect2D
{
	private:

		float m_fltX;
		float m_fltY;

	public:

		//Recupère la valeur de X ou Y
		float getVectX()const;
		float getVectY()const;

		//Change la valeur X ou Y
		void setVectX(float fltX);
		void setVectY(float fltY);

		//Addition et soustraction
		void addiVect(float fltX, float fltY);
		void sousVect(float fltX, float fltY);

		//Multiplication
		void multiVect(float fltX, float fltY);

		//Produit scalaire de deux vecteurs
		float prodscaVect(float fltX, float fltY);

		//Norme
		float normeVect(float fltX, float fltY);

		//Constructeur
		cVect2D();
		cVect2D(float fltX, float fltY = 0.0);

		//Destructeur
		~cVect2D();
};

#endif // !CVect2D_H