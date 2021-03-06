#ifndef CONTENEURBOUTONS
#define CONTENEURBOUTONS

#include <gtkmm/buttonbox.h>
#include <gtkmm/button.h>

class ConteneurBoutons: public Gtk::VButtonBox{
	public:
		ConteneurBoutons();
		//~ConteneurBoutons();
		Gtk::Button& getBoutonLancerDes(){return boutonLancerDes;};
		Gtk::Button& getBoutonFinDuTour(){return boutonFinDuTour;};
		Gtk::Button& getBoutonAcheter(){return boutonAcheter;};
	private:
		Gtk::Button boutonLancerDes;
		Gtk::Button boutonAcheter;
		Gtk::Button boutonFinDuTour;
};

#endif
