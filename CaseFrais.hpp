#ifndef CASEFRAIS
#define CASEFRAIS

#include "Case.hpp"
#include "Joueur.hpp"

class CaseFrais : public Case{
	public:
		CaseFrais(int _prix);
		int getPrix(){return prix;};

		void effet(Joueur *j, Gtk::Window *fenetre);

	private:
		int prix;
};

#endif
