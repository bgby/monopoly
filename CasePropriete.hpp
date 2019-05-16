#ifndef  CASEPROPRIETE
#define CASEPROPRIETE

#include "Case.hpp"
#include "Joueur.hpp"

class CasePropriete : public Case {
	public:
		CasePropriete(int _prix);
		int getPrix(){return prix;};
		int getLoyer();
		void setProprietaire(Joueur *j){proprietaire = j;};
		Joueur* getProprietaire(){return proprietaire;};
		void effet(Joueur *j);

	private:
		Joueur *proprietaire;
		int prix;
		//int loyer;
		int nbMaisons;
		bool isFestival;
	
};

#endif
