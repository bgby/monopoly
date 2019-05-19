#ifndef PLATEAU
#define PLATEAU

#include "De.hpp"
#include "CaseChance.hpp"
#include "CasePropriete.hpp"
#include "CaseAngle.hpp"
#include "CaseFrais.hpp"
#include "CaseCrous.hpp"
#include "Joueur.hpp"

class Case;
class Joueur;

#include <gtkmm/drawingarea.h>
#include <gdkmm/pixbuf.h>
#include <gdkmm/general.h>

class Plateau : public Gtk::DrawingArea{
	public:
		Plateau();
		~Plateau();
		void changerJoueurCase(int idAncienneCase, int idNouvelleCase, Joueur *j);

		Case* getPCase(int idCase){return casesPlateau[idCase];}
		void declencherEffet(int idCase, Joueur *j, Gtk::Window* fenetre);

		//DESSIN
		void dessinerPion(const Cairo::RefPtr<Cairo::Context>& cr, Case* c, Joueur* j);
		void refreshPlateau();


	protected:
		bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
		std::vector<Case*> casesPlateau;
};

#endif
