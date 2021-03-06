#ifndef CASEFRAIS
#define CASEFRAIS

#include "Case.hpp"
#include "Joueur.hpp"

class CaseFrais : public Case{
	public:
		CaseFrais(int _prix);
		CaseFrais(int _prix, int x, int y);
		int getPrix(){return prix;};

		void effet(Joueur *j, Gtk::Window *fenetre);
		void majInfos(){};

	private:
		int prix;

		Gtk::Label lPrix;
};

#endif
