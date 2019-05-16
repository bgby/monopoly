#include "PopUpDe.hpp"

PopUpDe::PopUpDe(std::string titre, Gtk::Window* parent, std::string nom1, std::string nom2) : Gtk::Dialog(titre, *parent), boiteV(get_vbox()), nomImage1(nom1), nomImage2(nom2) {
	
	//boiteV->set_orientation(Gtk::ORIENTATION_HORIZONTAL);

    imgDes1 = Gtk::manage(new Gtk::Image(nomImage1));
    imgDes2 = Gtk::manage(new Gtk::Image(nomImage2));
    add_button(Gtk::Stock::OK, Gtk::RESPONSE_OK);
    
    boiteV->pack_start(*imgDes1);
    boiteV->pack_start(*imgDes2);

    show_all();

}
