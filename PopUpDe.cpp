#include "PopUpDe.hpp"

PopUpDe::PopUpDe(std::string titre, Gtk::Window* parent, std::string message) : Gtk::Dialog(titre, *parent), boiteV(get_vbox()), etiquette(message) { //Récupération de la boîte verticale avec get_vbox().
    boiteV->pack_start(etiquette);
    img = Gtk::manage(new Gtk::Image("medias/1.png"));
    boiteV->pack_start(*img);

    show_all();

}
