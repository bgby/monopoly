#include "Jeu.hpp"

Jeu::Jeu(){
	
	//Option de la fenetre
	set_title("Robopoly");
    set_resizable(false);
	set_icon_from_file("medias/mrMonopoly.png");
	//resize(1024,768);
    set_position(Gtk::WIN_POS_CENTER);
    set_border_width(10);

    conteneurBoutons = ConteneurBoutons();
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
}

int Jeu::lancerDe(){
		de1.lancer();
		int val = de1.getVal();
		de2.lancer();
		val += de2.getVal();
		return val;
}
		
		
Jeu::Jeu(int nbJoueurs) : Jeu::Jeu(){
    for(int i = 0; i < nbJoueurs; i++){
        tabJoueurs.push_back(Joueur());
        vboxRight.pack_start(tabJoueurs[i]);
    }
}
