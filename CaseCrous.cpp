#include "CaseCrous.hpp"

CaseCrous::CaseCrous() : Case::Case(){
	prix = 1000;
	proprietaire = NULL;
}

void CaseCrous::effet(Joueur *j){
	if(proprietaire != NULL)
		if(proprietaire->getNom() != j->getNom()){
			//FAIRE LES MODIFS SUR JOUEURS AVANT
		}
}