#ifndef CASEPROPRIETE
#define CASEPROPRIETE

#include "Case.hpp"

//class Case;

class CasePropriete : public Case{
	public:
		CasePropriete();
		virtual int getLoyer()=0;
		int getPrix(){return prix;};
		void setProprietaire(Joueur *j){proprietaire = j;};
		Joueur* getProprietaire(){return proprietaire;};

		virtual void effet(Joueur *j, Gtk::Window *fenetre)=0;
		void majInfos();

	protected:
		int prix;
		Joueur *proprietaire;

		//proprietes graphiques
		Gtk::VBox vbox;
		Gtk::Label lPrix;
		Gtk::Label lLoyer;
		Gtk::Label lProp;

};

#endif