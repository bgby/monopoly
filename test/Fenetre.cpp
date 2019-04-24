#include "Fenetre.hpp"

Fenetre::Fenetre(){
	set_title("Bonjour");
	set_icon_from_file("mrMonopoly.png");
	resize(1024,768);
    set_position(Gtk::WIN_POS_CENTER);
    set_border_width(10);

	bouton = Gtk::Button("Bonjour");
	bouton.show();
	bouton.set_can_focus(false);
	bouton.signal_clicked().connect([this]() { bouton.set_label("Hello"); });
	add(bouton);
}