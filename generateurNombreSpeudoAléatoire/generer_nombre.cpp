#include "generateur_speudo_aleatoire.h"
// Je suis partie de l� :
//https://fr.wikipedia.org/wiki/G%C3%A9n%C3%A9rateur_congruentiel_lin%C3%A9aire
//Le calcul effectu� est Xn+1 = a * X + c mod m, o� X0 est la graine. Je tiens � pr�ciser qu'�tant donner que la fonction ne fait qu'une fois l'aup�ration, 
//la variable "graine" ici repr�sente est surtout Xn-1.

/*
	Cette fonction g�n�re un nouveau nombre pseudo-al�atoire en utilisant un g�n�rateur.
	Elle prend en param�tre un g�n�rateur d�fini (voir la fonction preparer_generateur)
	Elle retourne ce m�me g�n�rateur, mais en changeant sa graine.
*/
GenerateurSpeudoAleatoire generer_nombre(GenerateurSpeudoAleatoire &generateur_speudo_aleatoire) {
	const int* pointeur_multiplicateur = &generateur_speudo_aleatoire.multiplicateur;
	const int* pointeur_additionneur = &generateur_speudo_aleatoire.additionneur;
	int modulo = generateur_speudo_aleatoire.modulo;
	
	int* graine = &generateur_speudo_aleatoire.graine;

	*graine = (*pointeur_multiplicateur * *graine + *pointeur_additionneur) % modulo;

	return generateur_speudo_aleatoire;
}