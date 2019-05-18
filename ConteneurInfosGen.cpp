#include "ConteneurInfosGen.hpp"

ConteneurInfosGen::ConteneurInfosGen(){
	set_label("Joueur Courant");
	lNom = Gtk::Label("NON DEFINI");
	
	add(lNom);

	show_all();
}

ConteneurInfosGen::ConteneurInfosGen(Joueur& j) : ConteneurInfosGen::ConteneurInfosGen(){
	lNom.set_label(j.getNom());
}

void ConteneurInfosGen::majJoueur(Joueur& j){
	lNom.set_label(j.getNom());
}