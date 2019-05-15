#include "CaseFrais.hpp"

CaseFrais::CaseFrais(int _prix) : Case::Case(){
	prix = _prix;
}

void CaseFrais::effet(Joueur *j){
	if(proprietaire != NULL){
			j->perdreArgent(prix);
	}
}
