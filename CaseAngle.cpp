#include "CaseAngle.hpp"


CaseAngle::CaseAngle(char c) : Case::Case(){// 4 types possibles {'d' -> Depart, 'p' -> Prison, 's' -> Soiree BDE, 'a' -> Ascenseur}
	typeCase = c;
}

void CaseAngle::effet(Joueur *j, Gtk::Window *fenetre){
	//création de la popup
	Gtk::MessageDialog dialogue(*fenetre, "Event", false);
	switch(typeCase){
		case 'd':
			j->gagnerArgent(300);
			//affichage de la popup
			dialogue.set_title("Information");
			dialogue.set_secondary_text("Vous passez par la case départ \n vous recever 300k", false);
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
			dialogue.set_title("Information");
			dialogue.set_secondary_text("Le BDE organise un évènement dans une de vos salle \n le oyer de la case de votre choix triple", false);
			dialogue.run();
			break;

		case 'a':
			dialogue.set_title("Information");
			dialogue.set_secondary_text("Vous prenez l'ascenseur de Polytech \n Vous pouvez vous deplacez sur n'importe quelle case", false);
			dialogue.run();
			break;
	}
}
