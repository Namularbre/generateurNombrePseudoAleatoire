#pragma once

namespace EN_GenerateurPseudoAleatoire {
	class GenerateurPseudoAleatoire {
	private:
		int nombreAleatiore;
		int modulo;
		int multiplicateur;
		int additionneur;

	public:
		GenerateurPseudoAleatoire(const int graine, const int modulo, int multiplicateur, int additionneur);

		void genererNombreAleatoire();

		int avoirNombreAleatoire();
	};
}

using GenerateurPseudoAleatoire = class GenerateurPseudoAleatoire;