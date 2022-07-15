#include "generateur_speudo_aleatoire.hpp"

#include <iostream>
#include <string>

using namespace std;

bool demander_continuation_generation() {
	const string REPONSE_ARRETTER = "n";
	string reponse_utilisateur;

	cout << endl << "Pour arreter, tapez n, sinon autre chose." << endl;
	cin >> reponse_utilisateur;

	return reponse_utilisateur != REPONSE_ARRETTER;
}