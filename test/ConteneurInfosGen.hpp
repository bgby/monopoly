#ifndef CONTENEURINFOSGEN
#define CONTENEURINFOSGEN

#include <gtkmm/box.h>
#include <gtkmm/label.h>

class ConteneurInfosGen: public Gtk::VBox{
	public:
		ConteneurInfosGen();
		//~ConteneurBoutons();
	private:
		Gtk::Label text1;
		Gtk::Label text2;
		Gtk::Label text3;
};

#endif