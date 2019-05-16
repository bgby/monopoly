#ifndef CASECROUS
#define CASECROUS

#include "Case.hpp"
#include "Joueur.hpp"

class CaseCrous : public Case{
	public:
		CaseCrous();
		int getLoyer(){return prix/4;};
		int getPrix(){return prix;};
		void setProprietaire(Joueur *j){proprietaire = j;};
		Joueur* getProprietaire(){return proprietaire;};

		void effet(Joueur *j, Gtk::Window *fenetre);

	private:
		int prix;
		Joueur *proprietaire;
};

#endif
