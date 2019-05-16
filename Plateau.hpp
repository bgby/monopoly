#ifndef PLATEAU
#define PLATEAU

#include "De.hpp"
#include "CaseChance.hpp"
#include "CasePropriete.hpp"
#include "CaseAngle.hpp"
#include "CaseFrais.hpp"
#include "CaseCrous.hpp"

class Case;

#include <gtkmm/drawingarea.h>
#include <gdkmm/pixbuf.h>
#include <gdkmm/general.h>

class Plateau : public Gtk::DrawingArea{
	public:
		Plateau();
		~Plateau();
		void changerJoueurCase(int idAncienneCase, int idNouvelleCase, Joueur *j);
		void declencherEffet(int idCase, Joueur *j, Gtk::Window* fenetre);

	protected:
		bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
		std::vector<Case*> casesPlateau;
};

#endif
