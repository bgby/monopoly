#ifndef  CASEPROPRIETE
#define CASEPROPRIETE

#include "Case.hpp"
#include "Joueur.hpp"

class CasePropriete : public Case {
	public:
		CasePropriete(int _prix);
		int getLoyer();
		void effet(Joueur *j, Gtk::Window* fenetre);

	private:
		Joueur *proprietaire;
		int prix;
		//int loyer;
		int nbMaisons;
		bool isFestival;
	
};

#endif
