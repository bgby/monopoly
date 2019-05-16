#ifndef CONTENEURINFOSGEN
#define CONTENEURINFOSGEN

#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <string>

class ConteneurInfosGen: public Gtk::VBox{
	public:
		ConteneurInfosGen();

	private:
		Gtk::Label titre;
		Gtk::Label joueurCourant;
		Gtk::Label caseActuelle;
		Gtk::Label prixCaseActuelle;
		Gtk::Label propCaseActuelle;
};

#endif