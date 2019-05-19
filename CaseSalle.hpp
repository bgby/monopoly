#ifndef  CASESALLE
#define CASESALLE
#include "CasePropriete.hpp"

class CaseSalle : public CasePropriete {
	public:
		CaseSalle(int _prix);
		CaseSalle(int _prix, std::string _nom, int x, int y);
		int getLoyer();

		void effet(Joueur *j, Gtk::Window* fenetre);

	private:
		int nbMaisons;
		bool isFestival;
};

#endif
