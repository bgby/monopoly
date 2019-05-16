#include "ConteneurInfosGen.hpp"

ConteneurInfosGen::ConteneurInfosGen(){
	titre = Gtk::Label("Informations générales : ");
	joueurCourant = Gtk::Label("Joueur courant : ");
	caseActuelle = Gtk::Label("Case actuelle : ");
	prixCaseActuelle = Gtk::Label("Prix : ");
	propCaseActuelle = Gtk::Label("Propriétaire : ");
	pack_start(titre);
	pack_start(joueurCourant);
	pack_start(caseActuelle);
	pack_start(prixCaseActuelle);
	pack_start(propCaseActuelle);	
}