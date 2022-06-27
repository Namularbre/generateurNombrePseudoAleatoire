#include "generateur_speudo_aleatoire.h"
// Je suis partie de là :
//https://fr.wikipedia.org/wiki/G%C3%A9n%C3%A9rateur_congruentiel_lin%C3%A9aire
//Le calcul effectué est Xn+1 = a * X + c mod m, où X0 est la graine. Je tiens à préciser qu'étant donner que la fonction ne fait qu'une fois l'aupération, 
//la variable "graine" ici représente est surtout Xn-1.

/*
	Cette fonction génère un nouveau nombre pseudo-aléatoire en utilisant un générateur.
	Elle prend en paramètre un générateur défini (voir la fonction preparer_generateur)
	Elle retourne ce même générateur, mais en changeant sa graine.
*/
GenerateurSpeudoAleatoire generer_nombre(GenerateurSpeudoAleatoire &generateur_speudo_aleatoire) {
	const int* pointeur_multiplicateur = &generateur_speudo_aleatoire.multiplicateur;
	const int* pointeur_additionneur = &generateur_speudo_aleatoire.additionneur;
	int modulo = generateur_speudo_aleatoire.modulo;
	
	int* graine = &generateur_speudo_aleatoire.graine;

	*graine = (*pointeur_multiplicateur * *graine + *pointeur_additionneur) % modulo;

	return generateur_speudo_aleatoire;
}