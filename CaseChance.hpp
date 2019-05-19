#ifndef CASECHANCE
#define CASECHANCE

#include <cstdlib>
#include <ctime>
#include "Case.hpp"
#include "Joueur.hpp"

class CaseChance : public Case{
	public:
		CaseChance();
		CaseChance(int x, int y);
		void effet(Joueur *j, Gtk::Window *fenetre);
		void majInfos(){};
};

#endif
