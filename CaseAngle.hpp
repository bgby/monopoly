#ifndef CASEANGLE
#define CASEANGLE

#include "Case.hpp"
#include <gtkmm/messagedialog.h>

class CaseAngle : public Case{
	public:
		CaseAngle(char c);
		char getTypeCase(){return typeCase;};
		void effet(Joueur *j, Gtk::Window *fenetre);

	private:
		char typeCase;

};

#endif
