#include "Accueil.hpp"

Accueil::Accueil(){
	vButtonBox = Gtk::VButtonBox();
	msgBienvenue = Gtk::Label("Bienvenue dans le Robopoly !");
	boutonJouer = Gtk::Button("Jouer");
	boutonApropos = Gtk::Button("A propos");

	vButtonBox.pack_start(msgBienvenue);
	vButtonBox.pack_start(boutonJouer);
	vButtonBox.pack_start(boutonApropos);

	add(vButtonBox);

	show_all();
}