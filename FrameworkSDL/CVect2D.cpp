//**************************************************************************************************************************************
//Fichier										: CVect2D.cpp
//
//Classe										: cVect2D
//**************************************************************************************************************************************

#include "cVect2D.h"

cVect2D::cVect2D()
{
	m_fltX = 1.0f;
	m_fltY = 1.0f;
}

cVect2D::cVect2D(float fltX, float fltY)
{
	m_fltX = fltX;
	m_fltY = fltY;
}

cVect2D::~cVect2D()
{

}


//**************************************************************************************************************************************
//Descritption									: Renvoie la valeur de X
//
//Entr�e										: 
//
//Sortie										: Valeur de X
//**************************************************************************************************************************************

float cVect2D::getVectX() const
{
	return m_fltX;
}


//**************************************************************************************************************************************
//Descritption									: Rencoie la valeur de Y
//
//Entr�e										: 
//
//Sortie										: Valeur de Y
//**************************************************************************************************************************************

float cVect2D::getVectY() const
{
	return m_fltY;
}


//**************************************************************************************************************************************
//Descritption									: Modifie la valeur de X
//
//Entr�e										: Valeur a donn�e a X
//
//Sortie										: Valeur de X modifi�
//**************************************************************************************************************************************

void cVect2D::setVectX(float fltX)
{
	m_fltX = fltX;
}


//**************************************************************************************************************************************
//Descritption									: Modifie la valeur de Y
//
//Entr�e										: Valeur a donn�e a Y
//
//Sortie										: Valeur de Y modifi�
//**************************************************************************************************************************************

void cVect2D::setVectY(float fltY)
{
	m_fltY = fltY;
}


//**************************************************************************************************************************************
//Descritption									: Addition la valeur d'entr�e avec la valeur actuelle pour X et Y
//
//Entr�e										: Valeur a additionner pour X et Y
//
//Sortie										: Valeur de X et Y modifi�
//**************************************************************************************************************************************

void cVect2D::addiVect(float fltX, float fltY)
{
	m_fltX = m_fltX + fltX;
	m_fltY = m_fltY + fltY;
}


//**************************************************************************************************************************************
//Descritption									: Soustrais la valeur d'entr�e avec la valeur actuelle pour X et Y
//
//Entr�e										: Valeur a soustraire pour X et Y
//
//Sortie										: Valeur de X et Y modifi�
//**************************************************************************************************************************************

void cVect2D::sousVect(float fltX, float fltY)
{
	m_fltX = m_fltX - fltX;
	m_fltY = m_fltY - fltY;
}


//**************************************************************************************************************************************
//Descritption									: Multiplie la valeur d'entr�e avec la valeur actuelle pour X et Y
//
//Entr�e										: Valeur a multiplier pour X et Y
//
//Sortie										: Valeur de X et Y modifi�
//**************************************************************************************************************************************

void cVect2D::multiVect(float fltX, float fltY)
{
	m_fltX = m_fltX * fltX;
	m_fltY = m_fltY * fltY;
}


//**************************************************************************************************************************************
//Descritption									: Renvoie le produit scalaire de ce vecteur et de celui en entr�e
//
//Entr�e										: Valeur X Y du second vecteur
//
//Sortie										: Produit scalaire des 2 vecteurs
//**************************************************************************************************************************************

float cVect2D::prodscaVect(float fltX, float fltY)
{
	return (m_fltX * fltY) + (m_fltY * fltX);
}


//**************************************************************************************************************************************
//Descritption									: Renvoie la norme de ce vecteur et de celui en entr�e
//
//Entr�e										: Valeur X Y du second vecteur
//
//Sortie										: Norme des 2 vecteurs
//**************************************************************************************************************************************

float cVect2D::normeVect(float fltX, float fltY)
{
	return sqrt((pow(fltX - m_fltX, 2)) + (pow(fltY - m_fltY, 2)));
}