#include <iostream>

#include "generateur_speudo_aleatoire.h"

using namespace std;

GenerateurSpeudoAleatoire generer_nombre(GenerateurSpeudoAleatoire&);
GenerateurSpeudoAleatoire preparer_generateur(int, int, int, int);

int main() {
	const int PAS_ERREUR = 0;
	//La graine de notre programme
	const int GRAINE_DE_DEPART = 748456;
	//Le modulo qu'utilise le programme
	const int MODULO = 156163;
	//Les deux variables correspondent aux variables de la fonction mathématique utilisée (voir generer_nombre)
	int additionneur;
	int multiplicateur;
	//Booléen pour savoir si l'utilisateur demande l'arrêt du programme
	bool ordreStop = false;
	//On laisse l'utilisateur choisir l'additionneur et le multiplicateur
	cout << "Entrez un nombre" << endl;
	cin >> additionneur;
	cout << "Entrez un autre nombre" << endl;
	cin >> multiplicateur;
	//On créé un générateur de nombre pseudo-aléatoire
	GenerateurSpeudoAleatoire generateur = preparer_generateur(GRAINE_DE_DEPART, MODULO, additionneur, multiplicateur);
	//Tant que l'utilisateur ne donne pas l'ordre de s'arrêter, on génère un nombre
	while (!ordreStop)
	{
		//On récupère le génèrateur après avoir changer ça graine, qui nous donne le nombre pseudo-aléatoire
		generateur = generer_nombre(generateur);
		//On l'affiche, et on demande si l'on doit continuer
		cout << "Voici votre nombre : " << generateur.graine << endl;
		cout << "En generer un autre ? y=oui autre=non" << endl;
		char reponse;
		cin >> reponse;
		//Si on donne l'ordre de continuer, on le fait savoir au programme
		if (reponse != 'y')
		{
			ordreStop = true;
		}
	}
	//On fini le programme en indiquant que tout baigne.
	return PAS_ERREUR;
}