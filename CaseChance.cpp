#include "CaseChance.hpp"

CaseChance::CaseChance() : Case::Case(){
	srand(time(NULL));
	nom = "Case Chance";
	set_label(nom);
}

CaseChance::CaseChance(int x, int y) : CaseChance::CaseChance(){
	coords[0] = x;
	coords[1] = y;
}

void CaseChance::effet(Joueur *j, Gtk::Window* fenetre){
	int alea = rand()%3;
	//création de la fenetre pop up
	Gtk::MessageDialog dialogue(*fenetre, "Case Chance", false);
	switch(alea){
		case 0:
			
			//Perdre de l'argent
			if(!(j->estSolvable(60))){ //si le joueur n'est pas sovable il a perdu
				j->perdu();
				retirerVisiteur(j);
			}
			else{
			
				j->perdreArgent(60);
				dialogue.set_title("Information");
				dialogue.set_secondary_text("Vous n'avez plus les idées claires, vous offrez votre tournée générale\n Vous perdez 60", false);
				dialogue.run();
			}
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
			dialogue.set_title("Information");
			dialogue.set_secondary_text("Vous fuyez le débat d'Hugo Simon\n Vous retournez vous coucher avec Firas sur la case Départ", false);
			dialogue.run();
			j->teleporter(0);
			this->retirerVisiteur(j);
			//(this-id)->ajouterVisiteur(j);//PAS SUR
			break;

	}
}
