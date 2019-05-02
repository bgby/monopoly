#ifndef JOUEUR
#define JOUEUR

#include <string>

#include <gtkmm/frame.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>

class Joueur : public Gtk::Frame{
	public:
		Joueur();
		Joueur(std::string _nom);

		void setNbProprietes(int newNb){nbProprietes = newNb;}
		int getNbProprietes() const {return nbProprietes;}

		void setArgent(int newArgent){argent = newArgent;}
		int getArgent() const {return argent;}

		void setNom(std::string newNom){nom = newNom;}
		std::string getNom() const {return nom;}



	private:
		//int id;
		//static int next_id = 1;
		std::string nom;
		int argent;
		int nbProprietes;

		//Proprietes graphiques
		Gtk::VBox vbox;
		Gtk::Label labelArgent;
		Gtk::Label labelNbProprietes;

};

#endif