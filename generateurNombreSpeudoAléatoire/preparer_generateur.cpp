#include <iostream>

#include "generateur_speudo_aleatoire.h";

/*
	Cette fonction prend en param�tre une graine, un modulo m, un multiplicateur a et un additionneur c
	Elle retourne un generateur pseudo-al�atoire
	Le but de cette fonction est de d�finir un g�n�rateur pseudo-al�atoire, une sorte de constructeur en somme.
	Cette fonction doit avoir tout ces param�tres diff�rent de null pour fonctionner.
*/
GenerateurSpeudoAleatoire preparer_generateur(int graine, int m, int a, int c) {
	GenerateurSpeudoAleatoire* nouveau_generateur;
	//On alloue la m�moire pour un nouveau g�n�rateur de nombre.
	nouveau_generateur = (GenerateurSpeudoAleatoire*)malloc(sizeof(GenerateurSpeudoAleatoire));
	//On d�finie les attributs de la structures avec les entr�es.
	nouveau_generateur->graine = graine;
	nouveau_generateur->additionneur = c;
	nouveau_generateur->multiplicateur = a;
	nouveau_generateur->modulo = m;
	//On retourne le nouveau g�n�rateur
	return *nouveau_generateur;
}