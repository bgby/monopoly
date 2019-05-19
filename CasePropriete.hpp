#ifndef  CASEPROPRIETE
#define CASEPROPRIETE

#include "Case.hpp"
#include "Joueur.hpp"

class CasePropriete : public Case {
	public:
		CasePropriete(int _prix);
		CasePropriete(int _prix, std::string _nom, int x, int y);
		int getPrix(){return prix;};
		int getLoyer();
		void setProprietaire(Joueur *j){proprietaire = j;};
		Joueur* getProprietaire(){return proprietaire;};

		void effet(Joueur *j, Gtk::Window* fenetre);
		void majInfos();

	private:
		Joueur *proprietaire;
		int prix;
		//int loyer;
		int nbMaisons;
		bool isFestival;

		//proprietes graphiques
		Gtk::VBox vbox;
		Gtk::Label lPrix;
		Gtk::Label lLoyer;
		Gtk::Label lProp;
	
};

#endif
