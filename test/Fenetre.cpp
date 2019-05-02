#include "Fenetre.hpp"

Fenetre::Fenetre(){
	set_title("Robopoly");
	set_icon_from_file("mrMonopoly.png");
	//resize(1024,768);
    set_position(Gtk::WIN_POS_CENTER);
    set_border_width(10);

    conteneurBoutons = ConteneurBoutons();
    conteneurInfosGen = ConteneurInfosGen();

    joueurTest = Joueur("Toto");
    //testConteneur = ConteneurInfosJoueur(joueurTest);

    hboxMain = Gtk::HBox(false, 10);
    vboxRight = Gtk::VBox(true, 10);
    vboxLeft = Gtk::VBox(true, 10);

    vboxLeft.pack_start(conteneurBoutons);
    vboxLeft.pack_start(conteneurInfosGen);

    vboxRight.pack_start(joueurTest);

    hboxMain.pack_start(vboxLeft);
    hboxMain.pack_start(conteneurPlateau);
    hboxMain.pack_start(vboxRight);

    add(hboxMain);

    show_all();
}