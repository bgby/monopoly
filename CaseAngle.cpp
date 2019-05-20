#include "CaseAngle.hpp"


CaseAngle::CaseAngle(char c) : Case::Case(){// 4 types possibles {'d' -> Depart, 'p' -> Prison, 's' -> Soiree BDE, 'a' -> Ascenseur}
	typeCase = c;
	switch(c){
		case 'd':
			nom = "Case Départ";
			set_label(nom);
			break;

		case 'p':
			nom = "Case Prison";
			set_label(nom);
			break;

		case 's':
			nom = "Case BDE";
			set_label(nom);
			break;

		case 'a':
			nom = "Case Ascenseur";
			set_label(nom);
			break;
	}
}

CaseAngle::CaseAngle(char c, int x, int y) : CaseAngle::CaseAngle(c){
	coords[0] = x;
	coords[1] = y;
}

void CaseAngle::effet(Joueur *j, Gtk::Window *fenetre){
	//création de la popup
	Gtk::MessageDialog dialogue(*fenetre, "Event", false);
	switch(typeCase){
		case 'd':
			j->gagnerArgent(300);
			//affichage de la popup
			dialogue.set_title("Information");
			dialogue.set_secondary_text("Vous passez par la case départ \n vous recevez 300", false);
			dialogue.run();
			
			break;

		case 'p':
			if(!(j->estEnPrison())){
				j->partEnPrison();
				dialogue.set_title("Information");
				dialogue.set_secondary_text("Vous êtes enfermé dans les caves de Polytech \n vous devez attendre 3 tours ou faire un double", false);
				dialogue.run();
			}
			else{
				j->decrementerTourPrison();
			}
			break;

		case 's':
			j->gagnerArgent(200);
			dialogue.set_title("Information");
			dialogue.set_secondary_text("Le BDE organise un évènement dans une de vos salle \n Vous gagnez 200", false);
			dialogue.run();
			break;

		case 'a':
			if(!(j->estEnPrison())){
				j->partEnPrison();
				j->decrementerTourPrison();
				dialogue.set_title("Information");
				dialogue.set_secondary_text("Vous prenez l'ascenseur de Polytech \n Sa lenteur vous fait perdre 1 tour !", false);
				dialogue.run();
			}
			else{
				j->decrementerTourPrison();
			}
			break;
	}
}