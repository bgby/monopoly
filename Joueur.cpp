#include "Joueur.hpp"

Joueur::Joueur(){
	nom = "NON DEFINI";
	argent = 1500;
	nbProprietes = 0;

	//Proprietes graphiques
	set_label(nom);//On nomme la frame avec le nom du Joueur
	vbox = Gtk::VBox();

	labelArgent = Gtk::Label("Argent : " + std::to_string(argent));
	labelNbProprietes = Gtk::Label("Nombre de propriétés : " + std::to_string(nbProprietes));

	vbox.pack_start(labelArgent);
	vbox.pack_start(labelNbProprietes);

	add(vbox);

	show_all();
}

Joueur::Joueur(std::string _nom) : Joueur::Joueur(){
	nom = _nom;
	set_label(nom);
}