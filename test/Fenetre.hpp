#ifndef FENETRE
#define FENETRE

#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/stock.h>

class Fenetre : public Gtk::Window{
	public:
		Fenetre();

	private:
		Gtk::Button bouton;
	
};

#endif