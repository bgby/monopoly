#include "CaseChance.hpp"

CaseChance::CaseChance() : Case::Case(){
	srand(time(NULL));
}

void CaseChance::effet(Joueur *j){
	int alea = rand()%3;

	switch(alea){
		case 0:
			//Perdre de l'argent//Vous êtes trop bourrés, vous offrez votre tournée générale
			//METTRE UN MESSAGE POP UP
			j->perdreArgent(60);
			break;

		case 1:
			//Gagner de l'argent//Vous recevez enfin vos APL
			j->gagnerArgent(150);
			break;

		case 2:
			//Aller sur la case depart
			//Vous fuyez le débat d'Hugo Simon, vous retournez vous coucher avec Firas sur la case Départ
			//j->teleporter(0);
			break;

	}
}
