#pragma once

using GenerateurSpeudoAleatoire = struct GenerateurSpeudoAleatoire;
struct GenerateurSpeudoAleatoire {
	int graine;
	int modulo; //aka m
	int multiplicateur; //aka a
	int additionneur; //aka c
};