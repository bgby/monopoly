#ifndef JEU
#define JEU

#include <vector>

#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/messagedialog.h>

#include <string>
#include "PopUpDe.hpp"

#include "ConteneurBoutons.hpp"
#include "ConteneurInfosGen.hpp"
#include "Plateau.hpp"
#include "Joueur.hpp"
#include "De.hpp"


class Jeu : public Gtk::Window{

	public:
		Jeu();
		Jeu(int nbJoueurs, std::string j1, std::string j2);
		Jeu(int nbJoueurs, std::string j1, std::string j2, std::string j3);
		Jeu(int nbJoueurs, std::string j1, std::string j2, std::string j3, std::string j4);
		void debutTour();
		void achat();
		void finTour();
		void afficherPopUpDe(int val1, int val2);
		void majAffichageCase(int idCase);
		bool finJeu();
		

	private:
		//Boutons
		ConteneurBoutons conteneurBoutons;

		ConteneurInfosGen conteneurInfosGen;
		Plateau plateau;
		//ConteneurInfosJoueur testConteneur;
		//Voir pour les conteneurs de joueurs

		//Joueur joueurTest;
		std::vector<Joueur> tabJoueurs;

		int idJoueurActuel;

		Case* caseActuelle;
		
		//2 Dés
		De de1;
		De de2;

		//Conteneurs
		Gtk::VBox vboxRight;
		Gtk::VBox vboxLeft;//contient conteneurBoutons_conteneurInfosGen
		Gtk::HBox hboxMain;//contient vboxLeft|Plateau|vboxRight
	
};

#endif
