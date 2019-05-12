#ifndef ACCUEIL
#define ACCUEIL

#include <gtkmm/window.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/button.h>
#include <gtkmm/label.h>

#include "DialogSaisie.hpp"

class Accueil : public Gtk::Window{

	public:
		Accueil();
		void onBoutonJouer();

	private:
		Gtk::VButtonBox vButtonBox;
		Gtk::Label msgBienvenue;
		Gtk::Button boutonJouer;
		Gtk::Button boutonApropos;

		int nbJoueurs;
};

#endif