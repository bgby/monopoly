#include "CaseChance.hpp"

CaseChance::CaseChance() : Case::Case(){
	srand(time(NULL));
}

void CaseChance::tirerCarte(){
	int alea = rand()%3;

	switch(alea){
		case 0:
			//Perdre de l'argent
			break;

		case 1:
			//Gagner de l'argent
			break;

		case 2:
			//Aller sur la case depart
			break;

	}
}

void CaseChance::effet(Joueur *j){
	int alea = rand()%3;

	switch(alea){
		case 0:
			//Perdre de l'argent
			//METTRE UN MESSAGE POP UP
			break;

		case 1:
			//Gagner de l'argent
			break;

		case 2:
			//Aller sur la case depart
			break;

	}
}
