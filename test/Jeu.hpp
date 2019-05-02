#ifndef JEU
#define JEU

#include <vector>

#include <gtkmm/window.h>
#include <gtkmm/box.h>

#include "ConteneurBoutons.hpp"
#include "ConteneurInfosGen.hpp"
#include "Plateau.hpp"
#include "Joueur.hpp"

class Jeu : public Gtk::Window{

	public:
		Jeu();
		Jeu(int nbJoueurs);

	private:
		//Boutons
		ConteneurBoutons conteneurBoutons;

		ConteneurInfosGen conteneurInfosGen;
		Plateau plateau;
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