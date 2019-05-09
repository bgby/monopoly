#ifndef PLATEAU
#define PLATEAU

#include <gtkmm/drawingarea.h>
#include <iostream>
//#include <cairomm>

class Plateau : public Gtk::DrawingArea{
	public:
		Plateau();
		//~Plateau();
/*
	protected:
		//Override default signal handler:
		virtual bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);

	private:
		Glib::RefPtr<Gdk::Pixbuf> image;
*/
};

#endif