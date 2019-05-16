#include "CaseFrais.hpp"

CaseFrais::CaseFrais(int _prix) : Case::Case(){
	prix = _prix;
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
