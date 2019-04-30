#ifndef CONTENEURINFOSGEN
#define CONTENEURINFOSGEN

#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <string>

class ConteneurInfosGen: public Gtk::VBox{
	public:
		ConteneurInfosGen();

	private:
		Gtk::Label label;
};

#endif