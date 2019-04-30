#ifndef FENETRE
#define FENETRE

#include <gtkmm/window.h>
#include <gtkmm/box.h>

#include "ConteneurBoutons.hpp"
#include "ConteneurInfosGen.hpp"
#include "ConteneurPlateau.hpp"
#include "ConteneurInfosJoueur.hpp"

class Fenetre : public Gtk::Window{
	public:
		Fenetre();

	private:
		//Boutons
		ConteneurBoutons conteneurBoutons;
		ConteneurInfosGen conteneurInfosGen;
		ConteneurPlateau conteneurPlateau;
		ConteneurInfosJoueur testConteneur;
		//Voir pour les conteneurs de joueurs

		Joueur joueurTest;

		//Conteneurs
		Gtk::VBox vboxRight;
		Gtk::VBox vboxLeft;//contient conteneurBoutons_conteneurInfosGen
		Gtk::HBox hboxMain;//contient vboxLeft|Plateau|vboxRight
	
};

#endif