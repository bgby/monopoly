#ifndef JOUEUR
#define JOUEUR

#include <string>
#include <vector>

//#include "Case.hpp"
//#include "CasePropriete.hpp"

#include <list>

#include <gtkmm/frame.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>

//class Case;
class CasePropriete;

class Joueur : public Gtk::Frame{
	public:
		//Constructeur
		Joueur();
		Joueur(std::string _nom, char _color);
		
		//Proprietes
		int getNbProprietes() const {return listCaseJ.size();}
		void ajoutPropriete(CasePropriete* casePropr);
		void suprPropriete(CasePropriete* casePropr);
		
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

		//Etape du tour
		void setEtapeTour(int step){etapeTour = step;}
		int getEtapeTour(){return etapeTour;}
		
		//Prison
		bool estEnPrison(){return nbToursPrison > 0;}
		void partEnPrison(){nbToursPrison = 2;}
		void sortDePrison(){nbToursPrison = 0;}
		void decrementerTourPrison(){if(estEnPrison())
										nbToursPrison--;}
										
		//affichage
		void majAffiche();

		//Couleur
		char getColor(){return color;};
		
		//fin du jeu
		void perdu();
		bool getLoose() const {return loose;}

	private:
		//int id;
		//static int next_id = 1;
		
		std::string nom;
		char color;//{r,g,b,y}
		int argent;
		int etapeTour;//decrit l'etape où il en est dans son tour de jeu, 0 : n'a pas lancé les dés, 1 : n'a pas encore décidé d'acheter, 2 : a déjà acheté
		int caseActuel;
		std::list<CasePropriete*> listCaseJ;
		int nbToursPrison; //Nombre de tour qui lui reste en prison (0 de base, passe a 3 sur la case prison)
		

		//Proprietes graphiques
		Gtk::VBox vbox;
		Gtk::Label labelArgent;
		Gtk::Label labelcaseActuel;
		Gtk::Label labelNbProprietes;
		
		bool loose;

};

#endif
