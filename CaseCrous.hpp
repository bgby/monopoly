#ifndef CASECROUS
#define CASECROUS

#include "Case.hpp"
#include "Joueur.hpp"

class CaseCrous : public Case{
	public:
		CaseCrous();
		int getLoyer(){return prix/4;};
		int getPrix(){return prix;};

	private:
		int prix;
		Joueur *proprietaire;
};

#endif