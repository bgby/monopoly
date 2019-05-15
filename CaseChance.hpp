#ifndef CASECHANCE
#define CASECHANCE

#include <cstdlib>
#include <ctime>
#include "Case.hpp"
#include "Joueur.hpp"

class CaseChance : public Case{
	public:
		CaseChance();
		~CaseChance(){}
		void tirerCarte();
		void effet(Joueur *j);
};

#endif
