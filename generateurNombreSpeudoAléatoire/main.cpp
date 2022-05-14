#include <iostream>

#include "generateur_speudo_aleatoire.h"

using namespace std;

GenerateurSpeudoAleatoire generer_nombre(GenerateurSpeudoAleatoire&);
GenerateurSpeudoAleatoire preparer_generateur(int, int, int, int);

int main() {
	const int GRAINE_DE_DEPART = 748456;
	const int MODULO = 156163;
	int additionneur, multiplicateur;
	bool ordreStop = false;

	cout << "Entrez un nombre" << endl;
	cin >> additionneur;
	cout << "Entrez un autre nombre" << endl;
	cin >> multiplicateur;

	GenerateurSpeudoAleatoire generateur = preparer_generateur(GRAINE_DE_DEPART, MODULO, additionneur, multiplicateur);

	while (!ordreStop)
	{
		generateur = generer_nombre(generateur);
		cout << "Voici votre nombre : " << generateur.graine << endl;
		cout << "En generer un autre ? y=oui autre=non" << endl;
		char reponse;
		cin >> reponse;

		if (reponse != 'y')
		{
			ordreStop = true;
		}
	}
	return 0;
}