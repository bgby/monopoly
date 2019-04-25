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

    /*
    bouton1 = Gtk::Button("Bouton 1");
    bouton2 = Gtk::Button("Bouton 2");
    bouton3 = Gtk::Button("Bouton 3");
    bouton4 = Gtk::Button("Bouton 4");
    bouton5 = Gtk::Button("Bouton 5");
    bouton6 = Gtk::Button("Bouton 6");
    bouton7 = Gtk::Button("Bouton 7");

    vboxInt = Gtk::VBox(true, 2);
    vboxExt = Gtk::VBox(false, 2);
    hboxInt = Gtk::HBox(true, 2);

    vboxInt.pack_start(bouton1);
    vboxInt.pack_start(bouton2);
    vboxInt.pack_start(bouton3);
    vboxInt.pack_start(bouton4);
    vboxInt.pack_start(bouton5);

    hboxInt.pack_start(bouton6);
    hboxInt.pack_start(bouton7);

    vboxExt.pack_start(vboxInt);
    vboxExt.pack_start(hboxInt);

    add(vboxExt);

    show_all();
	*/

    /*
    //Creation d'un bouton et connexion du signal du clic a une methode
	bouton = Gtk::Button("Bonjour");
	bouton.show();
	bouton.set_can_focus(false);
	bouton.signal_clicked().connect([this]() { bouton.set_label("Hello"); });
	add(bouton);
	*/
}