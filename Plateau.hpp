#ifndef PLATEAU
#define PLATEAU

#include "De.hpp"
class Case;

#include <gtkmm/drawingarea.h>
#include <gdkmm/pixbuf.h>
#include <gdkmm/general.h>

class Plateau : public Gtk::DrawingArea{
	public:
		Plateau();
		De getDe1() const {return de1;}
		De getDe2() const {return de2;}

	protected:
		bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
		De de1;
		De de2;
		std::vector<Case*> casesPlateau;

	/*private:
		std::std::vector<Case> listeCases;
	*/
};

#endif
