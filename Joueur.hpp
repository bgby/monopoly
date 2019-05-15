#ifndef JOUEUR
#define JOUEUR

#include <string>
#include <vector>

#include "Case.hpp"
#include "Plateau.hpp"
#include "De.hpp"

#include <gtkmm/frame.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>


class Joueur : public Gtk::Frame{
	public:
		Joueur();
		Joueur(std::string _nom);
		
		//Getters and Setters
		void setNbProprietes(int newNb){nbProprietes = newNb;}
		int getNbProprietes() const {return nbProprietes;}

		void setArgent(int newArgent){argent = newArgent;}
		int getArgent() const {return argent;}

		void setNom(std::string newNom){nom = newNom;}
		std::string getNom() const {return nom;}
		
		//Fonctions
		int lancerDe(De newDe);
		void jouerTour(Plateau plateauMonopoly);
		
		void payer(Joueur& proprietaire, int argent); //retirer l'argent au joueur this et ajouter cette argent au propriétaire 
		



	private:
		//int id;
		//static int next_id = 1;
		
		std::string nom;
		int argent;
		int nbProprietes;
		int caseActuel;
		

		//Proprietes graphiques
		Gtk::VBox vbox;
		Gtk::Label labelArgent;
		Gtk::Label labelcaseActuel;
		Gtk::Label labelNbProprietes;

};

#endif
