#include <iostream>

#include "generateur_speudo_aleatoire.h";

/*
	Cette fonction prend en paramètre une graine, un modulo m, un multiplicateur a et un additionneur c
	Elle retourne un generateur pseudo-aléatoire
	Le but de cette fonction est de définir un générateur pseudo-aléatoire, une sorte de constructeur en somme.
	Cette fonction doit avoir tout ces paramètres différent de null pour fonctionner.
*/
GenerateurSpeudoAleatoire preparer_generateur(int graine, int m, int a, int c) {
	GenerateurSpeudoAleatoire* nouveau_generateur;
	//On alloue la mémoire pour un nouveau générateur de nombre.
	nouveau_generateur = (GenerateurSpeudoAleatoire*)malloc(sizeof(GenerateurSpeudoAleatoire));
	//On définie les attributs de la structures avec les entrées.
	nouveau_generateur->graine = graine;
	nouveau_generateur->additionneur = c;
	nouveau_generateur->multiplicateur = a;
	nouveau_generateur->modulo = m;
	//On retourne le nouveau générateur
	return *nouveau_generateur;
}