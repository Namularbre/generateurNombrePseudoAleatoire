#include <iostream>

#include "generateur_speudo_aleatoire.h";

/*
	Cette fonction prend en param�tre une graine, un modulo m, un multiplicateur a et un additionneur c
	Elle retourne un generateur speudo al�atoire
	Le but de cette fonction est de d�finir un g�n�rateur speudo al�atoire, une sorte de constructeur en somme.
	Cette fonction doit avoir tout ces param�tres diff�rent de null pour fonctionner.
*/
GenerateurSpeudoAleatoire preparer_generateur(int GRAINE, int m, int a, int c) {
	GenerateurSpeudoAleatoire* nouveau_generateur;
	nouveau_generateur = (GenerateurSpeudoAleatoire*)malloc(sizeof(GenerateurSpeudoAleatoire));

	nouveau_generateur->graine = GRAINE;
	nouveau_generateur->additionneur = c;
	nouveau_generateur->multiplicateur = a;
	nouveau_generateur->modulo = m;

	return *nouveau_generateur;
}