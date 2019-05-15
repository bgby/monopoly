#include "CaseAngle.hpp"

CaseAngle::CaseAngle(char& c) : Case::Case(){// 4 types possibles {'d' -> Depart, 'p' -> Prison, 's' -> Soiree BDE, 'a' -> Ascenseur}
	typeCase = c;
}

void CaseAngle::effet(Joueur *j){
	switch(typeCase){
		case 'd':
			j->gagnerArgent(300);
			break;

		case 'p':
			if(!(j->estEnPrison()))
				j->partEnPrison();
	}
}