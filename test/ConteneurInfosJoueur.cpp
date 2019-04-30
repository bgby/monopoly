#include "ConteneurInfosJoueur.hpp"

ConteneurInfosJoueur::ConteneurInfosJoueur(){
	j = Joueur();
	vbox = Gtk::VBox();
}

ConteneurInfosJoueur::ConteneurInfosJoueur(Joueur& _j){
	j = _j;
	set_label(j.getNom());

	vbox = Gtk::VBox();

	//vbox.pack_start()

	//add_label(vbox);
	//add_label("Test3");//UN SEUL WIDGET DANS UNE FRAME

	show_all();
}