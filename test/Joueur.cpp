#include "Joueur.hpp"

Joueur::Joueur(){
	nom = "NON DEFINI";
	argent = 1500;
	nbProprietes = 0;
}

Joueur::Joueur(std::string _nom){
	nom = _nom;
	argent = 1500;
	nbProprietes = 0;
}