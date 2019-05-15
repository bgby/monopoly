#ifndef CONTENEURBOUTONS
#define CONTENEURBOUTONS

#include <gtkmm/buttonbox.h>
#include <gtkmm/button.h>

class ConteneurBoutons: public Gtk::VButtonBox{
	public:
		ConteneurBoutons();
		//~ConteneurBoutons();
		Gtk::Button& getBoutonLancerDes(){return boutonLancerDes;};
	private:
		Gtk::Button boutonLancerDes;
		Gtk::Button boutonAcheter;
		Gtk::Button boutonVendreAutre;
		Gtk::Button boutonFinDuTour;
};

#endif