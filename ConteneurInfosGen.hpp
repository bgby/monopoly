#ifndef CONTENEURINFOSGEN
#define CONTENEURINFOSGEN

#include "Joueur.hpp"

#include <gtkmm/frame.h>
#include <gtkmm/label.h>
#include <string>

class ConteneurInfosGen: public Gtk::Frame{
	public:
		ConteneurInfosGen();
		ConteneurInfosGen(Joueur& j);
		void majJoueur(Joueur& j);

	private:
		Gtk::Label lNom;
};

#endif