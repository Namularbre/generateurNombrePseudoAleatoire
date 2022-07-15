#include "generateur_speudo_aleatoire.hpp"

namespace EN_GenerateurPseudoAleatoire {
	GenerateurPseudoAleatoire::GenerateurPseudoAleatoire(const int graine, const int modulo, int multiplicateur, int additionneur) {
		this->nombreAleatiore = graine;
		this->modulo = modulo;
		this->multiplicateur = multiplicateur;
		this->additionneur = additionneur;
	}

	void GenerateurPseudoAleatoire::genererNombreAleatoire() {
		this->nombreAleatiore = (this->multiplicateur * this->nombreAleatiore + this->additionneur) % this->modulo;
	}

	int GenerateurPseudoAleatoire::avoirNombreAleatoire() {
		return this->nombreAleatiore;
	}
}