#ifndef CASE
#define CASE

#include "Joueur.hpp"
class Joueur;

class Case{
	public:
		Case();
		void ajouterVisiteur(Joueur *j);
		void retirerVisiteur(Joueur *j);
		virtual void effet(Joueur *j) = 0;

	private:
		int id;
		static int next_id;
		std::vector<Joueur*> listeVisiteurs;
	
};

#endif
