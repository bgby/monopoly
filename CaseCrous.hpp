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
		void majInfos();

	private:
		int prix;
		Joueur *proprietaire;

		//proprietes graphiques
		Gtk::VBox vbox;
		Gtk::Label lPrix;
		Gtk::Label lLoyer;
		Gtk::Label lProp;
};

#endif
