#ifndef CASEANGLE
#define CASEANGLE

#include "Case.hpp"
#include <gtkmm/messagedialog.h>

class CaseAngle : public Case{
	public:
		CaseAngle(char c);
		CaseAngle(char c, int x, int y);
		char getTypeCase(){return typeCase;};
		void effet(Joueur *j, Gtk::Window *fenetre);
		void majInfos(){};
	private:
		char typeCase;

};

#endif
