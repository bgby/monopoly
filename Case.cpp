#include "Case.hpp"

int Case::next_id = 0;

Case::Case(){
	id = next_id++;
}

void Case::ajouterVisiteur(Joueur *j){
	listeVisiteurs.push_back(j);
}

void Case::retirerVisiteur(Joueur *j){
	for (size_t i = 0; i < listeVisiteurs.size(); ++i)
    	if(listeVisiteurs[i]->getNom() == j->getNom())
    		listeVisiteurs.erase(listeVisiteurs.begin()+i);
}