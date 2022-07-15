#include "generateur_speudo_aleatoire.hpp"

#include <iostream>

using namespace std;
using namespace EN_GenerateurPseudoAleatoire;

int saisir_variable_generateur();
bool demander_continuation_generation();

int main() {
	const int PAS_ERREUR = 0;

	int graine = saisir_variable_generateur();
	int modulo = saisir_variable_generateur();
	int additionneur = saisir_variable_generateur();
	int multiplicateur = saisir_variable_generateur();

	EN_GenerateurPseudoAleatoire::GenerateurPseudoAleatoire* generateur = new EN_GenerateurPseudoAleatoire::GenerateurPseudoAleatoire(graine, modulo, multiplicateur, additionneur);
	//Le premier nombre étant la graine saisie par l'utilisateur, on doit générer un nombre avant le tout premier affichage.
	generateur->genererNombreAleatoire();

	cout << "Voici le premier nombre genere : " << generateur->avoirNombreAleatoire() << endl;
	
	while (demander_continuation_generation())
	{
		generateur->genererNombreAleatoire();
		cout << "Voici le nouveau nombre genere : " << generateur->avoirNombreAleatoire() << endl << endl;
	}

	return PAS_ERREUR;
}