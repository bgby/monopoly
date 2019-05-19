#include "CaseCrous.hpp"

CaseCrous::CaseCrous() : Case::Case(){
	prix = 200;
	proprietaire = NULL;
	nom = "Case Crous";

	set_label(nom);

	vbox = Gtk::VBox();

	lPrix = Gtk::Label("Prix : " + std::to_string(prix));
	lLoyer = Gtk::Label("Loyer : " + std::to_string(getLoyer()));
	lProp = Gtk::Label("Proprietaire : Aucun");

	vbox.pack_start(lPrix);
	vbox.pack_start(lLoyer);
	vbox.pack_start(lProp);

	add(vbox);

	show_all();
}

CaseCrous::CaseCrous(std::string _nom, int x, int y) : CaseCrous::CaseCrous(){
	nom = _nom;
	coords[0] = x;
	coords[1] = y;
}

void CaseCrous::effet(Joueur *j, Gtk::Window* fenetre){
	Gtk::MessageDialog dialogue(*fenetre, "Event", false);
	if(proprietaire != NULL)
		if(proprietaire->getNom() != j->getNom()){
			j->payer(*proprietaire, prix/4);
		}
}

void CaseCrous::majInfos(){
	lLoyer.set_label("Prix : " + std::to_string(getLoyer()));
	if(proprietaire != NULL)
		lProp.set_label("Proprietaire : " + proprietaire->getNom());
	else
		lProp.set_label("Proprietaire : Aucun");
}