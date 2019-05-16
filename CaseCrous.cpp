#include "CaseCrous.hpp"

CaseCrous::CaseCrous() : Case::Case(){
	prix = 200;
	proprietaire = NULL;
}

void CaseCrous::effet(Joueur *j, Gtk::Window* fenetre){
	Gtk::MessageDialog dialogue(*fenetre, "Event", false);
	if(proprietaire != NULL)
		if(proprietaire->getNom() != j->getNom()){
			j->payer(*proprietaire, prix/4);
		}
}
