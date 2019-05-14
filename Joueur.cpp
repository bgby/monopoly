#include "Joueur.hpp"

Joueur::Joueur(){
	nom = "NON DEFINI";
	argent = 1500;
	nbProprietes = 0;
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

//Si le joueur veux lancer les dé
int Joueur::lancerDe(De newDe){
	newDe.lancer();
	int val = newDe.getVal();
	return val;
}


void Joueur::jouerTour(Plateau plateauMonopoly){

	//Si c'est un double le joueur pourra rejouer donc on fait un boucle while
	int val1 = 0;
	int val2 = 0;
	while(val1 == val2){
		//On lance d'abord les dés
		val1 = lancerDe(plateauMonopoly.getDe1());
		val2 = lancerDe(plateauMonopoly.getDe1());
		
		//On met a jour la case actuelle
		caseActuel = (caseActuel + val1 + val2)%40;
		
	}
	
	
}
