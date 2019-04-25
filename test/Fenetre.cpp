#include "Fenetre.hpp"

Fenetre::Fenetre(){
	set_title("Robopoly");
	set_icon_from_file("mrMonopoly.png");
	resize(1024,768);
    set_position(Gtk::WIN_POS_CENTER);
    set_border_width(10);

    conteneurBoutons = ConteneurBoutons();
    conteneurInfosGen = ConteneurInfosGen();

    hboxMain = Gtk::HBox(true, 10);
    vboxRight = Gtk::VBox(true, 10);
    vboxLeft = Gtk::VBox(true, 10);

    vboxLeft.pack_start(conteneurBoutons);
    vboxLeft.pack_start(conteneurInfosGen);

    //METTRE ICI VBOX RIGHT

    hboxMain.pack_start(vboxLeft);
    //METTRE ICI LE PLATEAU
    hboxMain.pack_start(vboxRight);

    add(hboxMain);

    show_all();
}