#include <iostream>
#include <stdlib.h>

#include "cVect2D.h"



int main()
{
	//Variable
	float fltX;
	float fltY;
	float result;

	//Demande de la valeur de base de X
	std::cout << "Entre la valeur X: ";
	std::cin >> fltX;

	//Demande de la valeur de base de Y
	std::cout << "Entre la valeur Y: ";
	std::cin >> fltY;

	//Declaration de 3 vecteur
	cVect2D monVect1;
	cVect2D monVect2(fltX);
	cVect2D monVect3(fltX, fltY);

	//Affichage de valeurs de base des vecteurs
	std::cout << std::endl << "Get une valeur" << std::endl;
	std::cout << "La valeur X du Vecteur1 est: " << monVect1.getVectX() << std::endl << "Et Y est: " << monVect1.getVectY() << std::endl << std::endl;
	std::cout << "La valeur X du Vecteur2 est: " << monVect2.getVectX() << std::endl << "Et Y est: " << monVect2.getVectY() << std::endl << std::endl;
	std::cout << "La valeur X du Vecteur3 est: " << monVect3.getVectX() << std::endl << "Et Y est: " << monVect3.getVectY() << std::endl << std::endl;

	//Set une valeur
	std::cout << std::endl << "Set une valeur" << std::endl;
	std::cout << "Entre la valeur X de Vecteur1: ";
	std::cin >> fltX;
	std::cout << "Entre la valeur Y de Vecteur1: ";
	std::cin >> fltY;

	monVect1.setVectX(fltX);
	monVect1.setVectY(fltY);

	std::cout << "La valeur X du Vecteur1 est: " << monVect1.getVectX() << std::endl << "Et Y est: " << monVect1.getVectY() << std::endl << std::endl;

	//Addition
	std::cout << std::endl << "Addition" << std::endl;
	std::cout << "Entre la valeur X a additionner avec Vecteur2: ";
	std::cin >> fltX;
	std::cout << "Entre la valeur Y a additionner avec Vecteur2: ";
	std::cin >> fltY;

	monVect2.addiVect(fltX, fltY);

	std::cout << "La valeur X du Vecteur2 est: " << monVect2.getVectX() << std::endl << "Et Y est: " << monVect2.getVectY() << std::endl << std::endl;

	//Soustration
	std::cout << std::endl << "Soustraction" << std::endl;
	std::cout << "Entre la valeur X a soustraire avec Vecteur3: ";
	std::cin >> fltX;
	std::cout << "Entre la valeur Y a soustraire avec Vecteur3: ";
	std::cin >> fltY;

	monVect3.sousVect(fltX, fltY);

	std::cout << "La valeur X du Vecteur3 est: " << monVect3.getVectX() << std::endl << "Et Y est: " << monVect3.getVectY() << std::endl << std::endl;

	//Multiplication
	std::cout << std::endl << "Multiplication" << std::endl;
	std::cout << "Entre la valeur X a multiplier avec Vecteur1: ";
	std::cin >> fltX;
	std::cout << "Entre la valeur Y a multiplier avec Vecteur1: ";
	std::cin >> fltY;

	monVect1.multiVect(fltX, fltY);

	std::cout << "La valeur X du Vecteur1 est: " << monVect1.getVectX() << std::endl << "Et Y est: " << monVect1.getVectY() << std::endl << std::endl;

	//Produit scalaire de deux vecteurs
	std::cout << std::endl << "Produit scalaire de deux vecteurs" << std::endl;
	
	std::cout << "Le produit scallaire du Vecteur1 et du Vecteur2 est: " << monVect1.prodscaVect(monVect2.getVectX(), monVect2.getVectY()) << std::endl << std::endl;

	//Norme
	std::cout << std::endl << "Norme" << std::endl;

	std::cout << "La norme du Vecteur2 et du Vecteur3 est: " << monVect2.normeVect(monVect3.getVectX(), monVect3.getVectY()) << std::endl << std::endl;

	//Pause
	system("pause");
}