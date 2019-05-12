#ifndef DIALOGSAISIE
#define DIALOGSAISIE

#include <string>
#include <gtkmm/dialog.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/button.h>
#include <gtkmm/stock.h>
#include <gtkmm/window.h>

class DialogSaisie : public Gtk::Dialog{

	public :
		DialogSaisie(std::string msg, Gtk::Window& parent);

	private :
		Gtk::VBox vbox;
		Gtk::Label texte;
		Gtk::Entry champSaisie;
		Gtk::Button boutonValider;
};

#endif