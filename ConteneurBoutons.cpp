#include "ConteneurBoutons.hpp"

ConteneurBoutons::ConteneurBoutons(){
	set_layout(Gtk::BUTTONBOX_SPREAD);
	set_spacing(10);

	boutonLancerDes = Gtk::Button("Lancer les dés");
	boutonAcheter = Gtk::Button("Acheter");
	boutonFinDuTour = Gtk::Button("Fin du tour");

	pack_start(boutonLancerDes);
	pack_start(boutonAcheter);
	pack_start(boutonFinDuTour);
}
