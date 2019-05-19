#include "CasePropriete.hpp"

CasePropriete::CasePropriete() : Case::Case(){}

void CasePropriete::majInfos(){
	lLoyer.set_label("Loyer : " + std::to_string(getLoyer()));
	if(proprietaire != NULL)
		lProp.set_label("Proprietaire : " + proprietaire->getNom());
	else
		lProp.set_label("Proprietaire : Aucun");
}