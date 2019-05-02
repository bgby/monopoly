#ifndef FENETRE
#define FENETRE

#include <vector>

#include <gtkmm/window.h>
#include <gtkmm/box.h>

#include "ConteneurBoutons.hpp"
#include "ConteneurInfosGen.hpp"
#include "ConteneurPlateau.hpp"
#include "Joueur.hpp"

class Fenetre : public Gtk::Window{

	public:
		Fenetre();
		Fenetre(int nbJoueurs);

	private:
		//Boutons
		ConteneurBoutons conteneurBoutons;

		ConteneurInfosGen conteneurInfosGen;
		ConteneurPlateau conteneurPlateau;
		//ConteneurInfosJoueur testConteneur;
		//Voir pour les conteneurs de joueurs

		//Joueur joueurTest;
		std::vector<Joueur> tabJoueurs;

		//Conteneurs
		Gtk::VBox vboxRight;
		Gtk::VBox vboxLeft;//contient conteneurBoutons_conteneurInfosGen
		Gtk::HBox hboxMain;//contient vboxLeft|Plateau|vboxRight
	
};

#endif