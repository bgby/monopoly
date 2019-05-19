#include "CaseFrais.hpp"

CaseFrais::CaseFrais(int _prix) : Case::Case(){
	prix = _prix;
	nom = "Case Frais";

	set_label(nom);
	lPrix = Gtk::Label("Frais : " + std::to_string(prix));

	add(lPrix);

	show_all();
}

CaseFrais::CaseFrais(int _prix, int x, int y) : CaseFrais::CaseFrais(_prix){
	coords[0] = x;
	coords[1] = y;
}

void CaseFrais::effet(Joueur *j, Gtk::Window *fenetre){
	Gtk::MessageDialog dialogue(*fenetre, "Frais à payer", false);
	if(j != NULL){
			j->perdreArgent(prix);
			dialogue.set_title("Information");
			dialogue.set_secondary_text("Vous payez " + std::to_string(prix), false);
			dialogue.run();
	}
}