#include "CaseChance.hpp"

CaseChance::CaseChance() : Case::Case(){
	srand(time(NULL));
}

void CaseChance::effet(Joueur *j, Gtk::Window* fenetre){
	int alea = rand()%3;
	//création de la fenetre pop up
	Gtk::MessageDialog dialogue(*fenetre, "Event", false);
	switch(alea){
		case 0:
			//Perdre de l'argent
			j->perdreArgent(60);
			dialogue.set_title("Information");
			dialogue.set_secondary_text("Vous êtes trop bourrés, vous offrez votre tournée générale\n Vous perdez 60", false);
			dialogue.run();
			break;

		case 1:
			//Gagner de l'argent//Vous recevez enfin vos APL
			j->gagnerArgent(150);
			dialogue.set_title("Information");
			dialogue.set_secondary_text("Vous recevez enfin vos APL\n Vous gagnez 150", false);
			dialogue.run();
			break;

		case 2:
			//Aller sur la case depart
			//Vous fuyez le débat d'Hugo Simon, vous retournez vous coucher avec Firas sur la case Départ
			//j->teleporter(0);
			break;

	}
}
