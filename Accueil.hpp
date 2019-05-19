#ifndef ACCUEIL
#define ACCUEIL

#include <vector>
#include <gtkmm/window.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/table.h>
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>

#include "Jeu.hpp"

#include "DialogSaisie.hpp"

class Accueil : public Gtk::Window{

	public:
		Accueil();
		int get_nbJoueurs() {return nbJoueurs;};
		void get_Noms();
		void on_clicked(int val);
		void jeuClose();

	private:
		Jeu* jeu;
		
		Gtk::Table tableau; //tableau pour organiser la fenetre
		
		Gtk::Label msgBienvenue; //message affiché
		
		//Bouton pour le choix du nombre de joueur
		Gtk::RadioButton nbJoueur2; 
		Gtk::RadioButton nbJoueur3;
		Gtk::RadioButton nbJoueur4;
		
		//Zone d'édition de texte pour taper le nom des Joueurs
		Gtk::Entry nomJoueur1;
		Gtk::Entry nomJoueur2;
		Gtk::Entry nomJoueur3;
		Gtk::Entry nomJoueur4;
		
		//nom des joeurs
		std::string joueur1;
		std::string joueur2;
		std::string joueur3;
		std::string joueur4;
		
		Gtk::Button boutonJouer; //Bouton pour lancer le jeu
	
		Gtk::Image* imgFond; //Image de Fond
		
		std::vector<std::string*> tabNom;

		int nbJoueurs;
};

#endif
