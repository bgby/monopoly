#ifndef CASE
#define CASE

#include "Joueur.hpp"

class Case {
	public:
		Case();
		void ajouterVisiteur(const Joueur& j);
		void retirerVisiteur(const Joueur& j);

	private:
		int id;
		static int next_id;
		std::vector<Joueur*> listeVisiteurs;
	
};

#endif