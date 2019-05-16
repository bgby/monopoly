#include "PopUpDe.hpp"

PopUpDe::PopUpDe(std::string titre, Gtk::Window* parent, std::string nom) : Gtk::Dialog(titre, *parent), boiteV(get_vbox()), nomImage(nom) {
	
    img = Gtk::manage(new Gtk::Image(nomImage));
    add_button(Gtk::Stock::OK, Gtk::RESPONSE_OK);
    
    boiteV->pack_start(*img);

    show_all();

}
