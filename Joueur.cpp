#include "Joueur.hpp"

Joueur::Joueur(){
	nom = "NON DEFINI";
	argent = 2000;
	nbProprietes = 0;
	nbToursPrison = 0;
	caseActuel = 0; //case départ (de 0 jusqu'a 39)

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

void Joueur::majAffiche(){

	labelArgent.set_label("Argent : " + std::to_string(argent));
	labelNbProprietes.set_label("Nombre de propriétés : " + std::to_string(nbProprietes));
	labelcaseActuel.set_label("Case actuelle : " + std::to_string(caseActuel));
}

//Fonction qui déplace le joueur du nombre de cases passé en paramètre
//Inclu le fait de passer par la case départ
void Joueur::deplacer(int val){
	if(caseActuel + val > 39){ //Si on passe la ligne de départ
		gagnerArgent(300);
		//Coder un affichage 
	}
	caseActuel = (caseActuel + val) %40;
}

//Fonction qui téléporte le joueur à la case passé en argument
//Inclu le fait de passer par la case départ
void Joueur::teleporter(int id){
	if(id > 30 && id < 39){ //si il se téléporte sans passer la case départ
		caseActuel = id;
	}
	else{
		caseActuel = id;
		gagnerArgent(300);
	}
}

void Joueur::ajoutPropriete(Case* casePropr){
	listCaseJ.push_back(casePropr);
}

void Joueur::suprPropriete(Case* casePropr){
	for(std::list<Case*>::const_iterator it = listCaseJ.begin(); it != listCaseJ.end(); ++it){
		if( (*it)->getId() == casePropr->getId()){
			listCaseJ.erase(it);
		}
	}
}

void Joueur::gagnerArgent(int montant){
	argent += montant;
}

void Joueur::perdreArgent(int montant){
	argent -= montant;
}

void Joueur::payer(Joueur& proprietaire, int montant){
	perdreArgent(montant);
	proprietaire.gagnerArgent(montant);
}
