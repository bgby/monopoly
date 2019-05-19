#ifndef CASECROUS
#define CASECROUS

#include "CasePropriete.hpp"
#include "Joueur.hpp"

class CaseCrous : public CasePropriete{
	public:
		CaseCrous();
		CaseCrous(std::string _nom, int x, int y);
		int getLoyer(){return prix/4;};

		void effet(Joueur *j, Gtk::Window *fenetre);
};

#endif
