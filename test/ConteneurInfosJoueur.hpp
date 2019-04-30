#ifndef  CONTENEURINFOSJOUEUR
#define CONTENEURINFOSJOUEUR

#include <gtkmm/frame.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>

#include "Joueur.hpp"

class ConteneurInfosJoueur : public Gtk::Frame {
	public :
		ConteneurInfosJoueur();
		ConteneurInfosJoueur(Joueur& _j);

	private :
		Joueur j;
		Gtk::VBox vbox;
		Gtk::Label labelArgent;
		Gtk::Label labelNbProprietes;

};

#endif