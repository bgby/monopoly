#ifndef  CASEPROPRIETE
#define CASEPROPRIETE

#include "Case.hpp"
#include "Joueur.hpp"

class CasePropriete : public Case {
	public:
		CasePropriete(int _prix);
		int getLoyer();

	private:
		Joueur *proprietaire;
		int prix;
		//int loyer;
		int nbMaisons;
		bool isFestival;
	
};

#endif
