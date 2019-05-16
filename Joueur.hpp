#ifndef JOUEUR
#define JOUEUR

#include <string>
#include <vector>

#include "Case.hpp"

#include <list>

#include <gtkmm/frame.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>

class Case;

class Joueur : public Gtk::Frame{
	public:
		//Constructeur
		Joueur();
		Joueur(std::string _nom);
		
		//Proprietes
		void setNbProprietes(int newNb){nbProprietes = newNb;}
		int getNbProprietes() const {return nbProprietes;}
		void ajoutPropriete(Case* casePropr);
		void suprPropriete(Case* casePropr);
		
		//Déplacement
		void deplacer(int val);
		void teleporter(int id);
		int getCaseActuel(){return caseActuel;}
		
		//ARGENT
		void setArgent(int newArgent){argent = newArgent;}
		int getArgent() const {return argent;}
		void gagnerArgent(int montant);
		void perdreArgent(int montant);//VERIFIER QUE LE JOUEUR EST SOLVABLE
		void payer(Joueur& proprietaire, int argent); //retirer l'argent au joueur this et ajouter cette argent au propriétaire
		bool estSolvable(int montant){return montant <= argent;};//verifie qu'un joueur a les moyens de payer
		
		void setNom(std::string newNom){nom = newNom;}
		std::string getNom() const {return nom;}
		
		//Prison
		bool estEnPrison(){return nbToursPrison > 0;}
		void partEnPrison(){nbToursPrison = 2;}
		void sortDePrison(){nbToursPrison = 0;}
		void decrementerTourPrison(){if(estEnPrison())
										nbToursPrison--;}
										
		//affichage
		void majAffiche();
		



	private:
		//int id;
		//static int next_id = 1;
		
		std::string nom;
		int argent;
		int nbProprietes;
		int caseActuel;
		std::list<Case*> listCaseJ;
		int nbToursPrison; //Nombre de tour qui lui reste en prison (0 de base, passe a 3 sur la case prison)
		

		//Proprietes graphiques
		Gtk::VBox vbox;
		Gtk::Label labelArgent;
		Gtk::Label labelcaseActuel;
		Gtk::Label labelNbProprietes;

};

#endif
