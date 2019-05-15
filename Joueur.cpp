#include "Joueur.hpp"

Joueur::Joueur(){
	nom = "NON DEFINI";
	argent = 2000;
	nbProprietes = 0;
	nbToursPrison = 0;
	caseActuel = 1;

	//Proprietes graphiques
	set_label(nom);//On nomme la frame avec le nom du Joueur
	vbox = Gtk::VBox();

	//On créer des label
	labelArgent = Gtk::Label("Argent : " + std::to_string(argent));
	labelNbProprietes = Gtk::Label("Nombre de propriétés : " + std::to_string(nbProprietes));
	labelcaseActuel = Gtk::Label("Case actuelle : " + std::to_string(caseActuel));

	vbox.pack_start(labelArgent);
	vbox.pack_start(labelNbProprietes);
	vbox.pack_start(labelcaseActuel);

	add(vbox);

	show_all();
}

Joueur::Joueur(std::string _nom) : Joueur::Joueur(){
	nom = _nom;
	set_label(nom);
}


void Joueur::gagnerArgent(int montant){
	setArgent(getArgent() + montant);
}

void Joueur::perdreArgent(int montant){
	setArgent(getArgent() - montant);
}

void Joueur::payer(Joueur& proprietaire, int montant){
	perdreArgent(montant);
	proprietaire.gagnerArgent(montant);
}
