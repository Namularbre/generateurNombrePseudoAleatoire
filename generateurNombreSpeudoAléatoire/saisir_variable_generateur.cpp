#include <iostream>
#include <string>

using namespace std;

int saisir_variable_generateur() {
	bool saisie_ok = false;
	int nombre;
	string saisie;

	while (!saisie_ok)
	{
		cout << "Saisissez un nombre" << endl;
		cin >> saisie;

		try {
			nombre = stoi(saisie);
			saisie_ok = true;
		}
		catch (exception e) {
			cout << "Vous avez fait une erreur de saisi. Il faut saisir un nombre entier." << e.what() << endl;
			saisie_ok = false;
		}
	}

	return nombre;
}