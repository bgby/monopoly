#include "Jeu.hpp"

Jeu::Jeu(){
	
	//Option de la fenetre
	set_title("Robopoly");
    set_resizable(false);
	set_icon_from_file("medias/pepper-head.png");
	//resize(1024,768);
    set_position(Gtk::WIN_POS_CENTER);
    set_border_width(10);

    conteneurBoutons = ConteneurBoutons();
    conteneurBoutons.getBoutonLancerDes().signal_clicked().connect([this]() { this->debutTour(); });


    conteneurInfosGen = ConteneurInfosGen();

    //joueurTest = Joueur("Toto");
    //testConteneur = ConteneurInfosJoueur(joueurTest);

    hboxMain = Gtk::HBox(false, 10);
    vboxRight = Gtk::VBox(true, 10);
    vboxLeft = Gtk::VBox(true, 10);

    vboxLeft.pack_start(conteneurBoutons);
    vboxLeft.pack_start(conteneurInfosGen);

    //vboxRight.pack_start(joueurTest);

    hboxMain.pack_start(vboxLeft);
    hboxMain.pack_start(plateau);
    hboxMain.pack_start(vboxRight);

    add(hboxMain);

    show_all();

    idJoueurActuel = 0;
}

void Jeu::debutTour(){
    Joueur& jActuel = tabJoueurs[idJoueurActuel];
    int ancienneCase;
    int valDes = de1.lancer() + de2.lancer();
    afficherPopUpDe(de1.getVal(), de2.getVal());

    if(jActuel.estEnPrison() && de1.getVal() == de2.getVal())//si le joueur fait un double, il sort immediatement de prison
        jActuel.sortDePrison();

    if(!(jActuel.estEnPrison())){
        ancienneCase = jActuel.getCaseActuel();
        jActuel.deplacer(valDes);
        plateau.changerJoueurCase(ancienneCase, jActuel.getCaseActuel(), &(jActuel));
    }
    
	jActuel.majAffiche();//METTRE A JOUR VARIABLE JOUEUR
    plateau.declencherEffet(jActuel.getCaseActuel(), &jActuel, this);
}


void Jeu::finTour(){
    idJoueurActuel++;
}
	
void Jeu::afficherPopUpDe(int val1, int val2){
	std::string s1;
    std::string s2;
	s1 = "medias/" + std::to_string(val1) + ".png";
    s2 = "medias/" + std::to_string(val2) + ".png";
	PopUpDe des("Lancer dés", this, s1, s2);
	des.run();
}
		
Jeu::Jeu(int nbJoueurs) : Jeu::Jeu(){
    for(int i = 0; i < nbJoueurs; i++){
        tabJoueurs.push_back(Joueur());
        vboxRight.pack_start(tabJoueurs[i]);
    }
}
