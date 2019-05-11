#ifndef PLATEAU
#define PLATEAU

#include <gtkmm/drawingarea.h>

class Plateau : public Gtk::DrawingArea{
	public:
		Plateau();

	protected:
		bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
	
};

#endif