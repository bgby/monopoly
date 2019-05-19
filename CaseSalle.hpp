#ifndef  CASESALLE
#define CASESALLE
#include "CasePropriete.hpp"
#include "Joueur.hpp"

class CaseSalle : public CasePropriete {
	public:
		CaseSalle(int _prix);
		CaseSalle(int _prix, std::string _nom, int x, int y);
		int getPrix(){return prix;};
		int getLoyer();
		void setProprietaire(Joueur *j){proprietaire = j;};
		Joueur* getProprietaire(){return proprietaire;};

		void effet(Joueur *j, Gtk::Window* fenetre);
		void majInfos();

	private:
		int nbMaisons;
		bool isFestival;
};

#endif
