#include "DialogSaisie.hpp"

DialogSaisie::DialogSaisie(std::string msg, Gtk::Window& parent) : Gtk::Dialog(msg, parent){
	vbox = Gtk::VBox(true, 10);
	texte = Gtk::Label(msg);
	champSaisie = Gtk::Entry();
	boutonValider = Gtk::Button(Gtk::Stock::OK);

	vbox.pack_start(texte);
	vbox.pack_start(champSaisie);
	vbox.pack_start(boutonValider);

	//add(vbox);

	show_all();

	//Signaux
}