#include <iostream>

#include "generateur_speudo_aleatoire.h";

/*
	Cette fonction prend en paramètre une graine, un modulo m, un multiplicateur a et un additionneur c
	Elle retourne un generateur speudo aléatoire
	Le but de cette fonction est de définir un générateur speudo aléatoire, une sorte de constructeur en somme.
	Cette fonction doit avoir tout ces paramètres différent de null pour fonctionner.
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