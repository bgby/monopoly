#ifndef ACCUEIL
#define ACCUEIL

#include <gtkmm/window.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/button.h>
#include <gtkmm/label.h>

class Accueil : public Gtk::Window{

	public:
		Accueil();

	private:
		Gtk::VButtonBox vButtonBox;
		Gtk::Label msgBienvenue;
		Gtk::Button boutonJouer;
		Gtk::Button boutonApropos;
};

#endif