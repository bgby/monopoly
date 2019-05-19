#include "Jeu.hpp"
#include "Accueil.hpp"

Jeu::Jeu(){
	caseActuelle = plateau.getPCase(0);

	//Option de la fenetre
	set_title("Robopoly");
    set_resizable(false);
	set_icon_from_file("medias/pepper-head.png");
	//resize(1024,768);
    set_position(Gtk::WIN_POS_CENTER);
    set_border_width(10);

    conteneurBoutons = ConteneurBoutons();
    conteneurBoutons.getBoutonLancerDes().signal_clicked().connect([this]() { this->debutTour(); });
    conteneurBoutons.getBoutonFinDuTour().signal_clicked().connect([this]() { this->finTour(); });
    conteneurBoutons.getBoutonAcheter().signal_clicked().connect([this]() { this->achat(); });


    

    //joueurTest = Joueur("Toto");
    //testConteneur = ConteneurInfosJoueur(joueurTest);

    hboxMain = Gtk::HBox(false, 10);
    vboxRight = Gtk::VBox(true, 10);
    vboxLeft = Gtk::VBox(true, 10);

    vboxLeft.pack_start(conteneurBoutons);
    vboxLeft.pack_start(conteneurInfosGen);
    vboxLeft.pack_start(*caseActuelle);

    //vboxRight.pack_start(joueurTest);

    hboxMain.pack_start(vboxLeft);
    hboxMain.pack_start(plateau);
    hboxMain.pack_start(vboxRight);

    add(hboxMain);

    show_all_children();

    idJoueurActuel = 0;
}

Jeu::Jeu(int nbJoueurs, std::string j1, std::string j2) : Jeu::Jeu(){
    std::string names[nbJoueurs] = {j1, j2};
    char colors[4] = {'r', 'g'};
    for(int i = 0; i < nbJoueurs; i++){
        tabJoueurs.push_back(Joueur(names[i], colors[i]));
        vboxRight.pack_start(tabJoueurs[i]);
    }

    conteneurInfosGen.majJoueur(tabJoueurs[0]);
}

Jeu::Jeu(int nbJoueurs, std::string j1, std::string j2, std::string j3) : Jeu::Jeu(){
    std::string names[nbJoueurs] = {j1, j2, j3};
    char colors[nbJoueurs] = {'r', 'g', 'b'};
    for(int i = 0; i < nbJoueurs; i++){
        tabJoueurs.push_back(Joueur(names[i], colors[i]));
        vboxRight.pack_start(tabJoueurs[i]);
    }

    conteneurInfosGen.majJoueur(tabJoueurs[0]);
}

Jeu::Jeu(int nbJoueurs, std::string j1, std::string j2, std::string j3, std::string j4) : Jeu::Jeu(){
    std::string names[nbJoueurs] = {j1, j2, j3, j4};
    char colors[4] = {'r', 'g', 'b', 'y'};
    for(int i = 0; i < nbJoueurs; i++){
        tabJoueurs.push_back(Joueur(names[i], colors[i]));
        vboxRight.pack_start(tabJoueurs[i]);
    }

    conteneurInfosGen.majJoueur(tabJoueurs[0]);
}

void Jeu::debutTour(){
    Joueur& jActuel = tabJoueurs[idJoueurActuel];
    Gtk::MessageDialog popUpInfos(*this, "Information", false);

    //mise a jour affichage Case
    majAffichageCase(jActuel.getCaseActuel());

    if(jActuel.getEtapeTour()>0){
        //std::cout << "Vous avez déjà lancé les dés !" << std::endl;
        popUpInfos.set_title("Action impossible");
        popUpInfos.set_secondary_text("Vous avez déjà lancé les dés !");
        popUpInfos.run();
        return;
    }

    int ancienneCase;
    int valDes = de1.lancer() + de2.lancer();
    afficherPopUpDe(de1.getVal(), de2.getVal());

    //valDes = 4;

    if(jActuel.estEnPrison() && de1.getVal() == de2.getVal())//si le joueur fait un double, il sort immediatement de prison
        jActuel.sortDePrison();

    if(!(jActuel.estEnPrison())){
        ancienneCase = jActuel.getCaseActuel();
        jActuel.deplacer(valDes);
        plateau.changerJoueurCase(ancienneCase, jActuel.getCaseActuel(), &(jActuel));
    }
    
    //mise a jour Case apres lancer des dés
    majAffichageCase(jActuel.getCaseActuel());

	
    //conteneurInfosGen.majInfos(jActuel.getNom(), jActuel.getCaseActuel(), (plateau.getPCase(jActuel.getCaseActuel()))->getPrix(), std::string& _propCaseActuelle);
    
    plateau.declencherEffet(jActuel.getCaseActuel(), &jActuel, this);
    
    //On vérifie que le joueur n'a pas perdu
    if(jActuel.getLoose() == true){
		finTour();
	}

    for(unsigned i = 0; i<tabJoueurs.size(); i++)
        tabJoueurs[i].majAffiche();//METTRE A JOUR VARIABLE JOUEUR

    jActuel.setEtapeTour(1);
}

void Jeu::achat(){
    Joueur& jActuel = tabJoueurs[idJoueurActuel];
    Gtk::MessageDialog popUpInfos(*this, "Information", false);

    if(jActuel.getEtapeTour() != 1){
        popUpInfos.set_title("Action impossible");
        popUpInfos.set_secondary_text("Vous n'avez pas encore lancé les dés ou vous avez déjà cliqué sur Acheter !");
        popUpInfos.run();
        return;
    }
    /*
    if((std::typeid(plateau.getPCase(jActuel.getCaseActuel())) != std::typeid(&CasePropriete(0))) && (std::typeid(plateau.getPCase(jActuel.getCaseActuel())) != std::typeid(&CaseCrous())))
    {
        std::cout << "Cette case n'est pas achetable" << std::endl;
    }
    */
    CasePropriete* caseAchat =(CasePropriete*)plateau.getPCase(jActuel.getCaseActuel());//PAS PROPRE, A REVOIR
    if(jActuel.estSolvable(caseAchat->getPrix()) && caseAchat->getProprietaire() == NULL){//On verifie qu'il est solvable et qu'il n'y a pas deja de proprietaire
        jActuel.ajoutPropriete(caseAchat);
        caseAchat->setProprietaire(&jActuel);
        jActuel.perdreArgent(caseAchat->getPrix());
    }
    else if(!jActuel.estSolvable(caseAchat->getPrix())){ //si le joueur n'est pas sovable et qu'il veux acheter il a perdu
		popUpInfos.set_title("Action impossible");
        popUpInfos.set_secondary_text("Vous n'avez pas assez d'argent");
        popUpInfos.run();
	}
    else{
        popUpInfos.set_title("Action impossible");
        popUpInfos.set_secondary_text("La case a déjà un propriétaire !");
        popUpInfos.run();
    }
    jActuel.majAffiche();
    majAffichageCase(jActuel.getCaseActuel());
    
    finTour();
}

void Jeu::finTour(){
    Gtk::MessageDialog popUpInfos(*this, "Information", false);

    if(tabJoueurs[idJoueurActuel].getEtapeTour() == 0){
        popUpInfos.set_title("Action impossible");
        popUpInfos.set_secondary_text("Vous n'avez pas encore lancé les dés !");
        popUpInfos.run();
        return;
    }

    tabJoueurs[idJoueurActuel].setEtapeTour(0);//On remet le compteur à 0 en fin de tour
	
	/*
	//On cherche un joueur qui n'a pas perdu
    ++idJoueurActuel;
    idJoueurActuel = idJoueurActuel % tabJoueurs.size();
    while(tabJoueurs[idJoueurActuel].getLoose() == true){
		++idJoueurActuel;
		idJoueurActuel = idJoueurActuel % tabJoueurs.size();
	}
	idJoueurActuel = idJoueurActuel % tabJoueurs.size();
	
	//si c'est le dernier c'est la fin du jeu
	if(finJeu()){
		popUpInfos.set_title("Victoire !!");
        popUpInfos.set_secondary_text("Le joeur : " + tabJoueurs[idJoueurActuel].getNom() + " à gagné !");
        popUpInfos.run();
        return;
	}
	*/
	++idJoueurActuel;
	idJoueurActuel = idJoueurActuel % tabJoueurs.size();
	
    majAffichageCase(tabJoueurs[idJoueurActuel].getCaseActuel());
    conteneurInfosGen.majJoueur(tabJoueurs[idJoueurActuel]);

}
	
bool Jeu::finJeu(){
	int nbPerdu = 0;
	for(unsigned int i = 0; i < tabJoueurs.size(); i++){
		if(tabJoueurs[i].getLoose() == true){
			++nbPerdu;
		}
	}
	if(tabJoueurs.size() - nbPerdu == 1){
		return true;
	}
	else{
		return false;
	}
}

void Jeu::afficherPopUpDe(int val1, int val2){
	std::string s1;
    std::string s2;
	s1 = "medias/" + std::to_string(val1) + ".png";
    s2 = "medias/" + std::to_string(val2) + ".png";
	PopUpDe des("Lancer dés", this, s1, s2);
	des.run();
}
		
void Jeu::majAffichageCase(int idCase){
    vboxLeft.remove(*caseActuelle);
    caseActuelle = plateau.getPCase(idCase);
    caseActuelle->majInfos();
    vboxLeft.pack_start(*caseActuelle);
    show_all();
}
