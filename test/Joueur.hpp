#ifndef JOUEUR
#define JOUEUR

#include <string>

class Joueur{
	public:
		Joueur();
		Joueur(std::string _nom);

		void setNbProprietes(const int& newNb){nbProprietes = newNb;}
		int getNbProprietes() const {return nbProprietes;}

		void setArgent(const int& newArgent){argent = newArgent;}
		int getArgent() const {return argent;}

		std::string getNom() const {return nom;}



	private:
		//int id;
		//static int next_id = 1;
		std::string nom;
		int argent;
		int nbProprietes;

};

#endif