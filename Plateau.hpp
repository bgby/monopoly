#ifndef PLATEAU
#define PLATEAU

#include <gtkmm/drawingarea.h>
#include <gdkmm/pixbuf.h>
#include <gdkmm/general.h>

class Plateau : public Gtk::DrawingArea{
	public:
		Plateau();

	protected:
		bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;

	/*private:
		std::std::vector<Case> listeCases;
	*/
};

#endif