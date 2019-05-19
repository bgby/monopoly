#ifndef CASE
#define CASE

#include "Joueur.hpp"
#include <gtkmm/messagedialog.h>
#include <gtkmm/frame.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>

class Joueur;

class Case : public Gtk::Frame{
	public:
		Case();
		virtual ~Case(){}
		void ajouterVisiteur(Joueur *j);
		void retirerVisiteur(Joueur *j);
		virtual void effet(Joueur *j, Gtk::Window* fenetre) = 0;
		int getId() const {return id;}

		unsigned getLenListeVisiteurs(){return listeVisiteurs.size();};
		Joueur* getVisiteur(int i){return listeVisiteurs[i];};

		virtual void majInfos() = 0;

		int getX(){return coords[0];};
		int getY(){return coords[1];};

		std::string getNom(){return nom;};

	protected:
		int id;
		static int next_id;
		std::vector<Joueur*> listeVisiteurs;
		std::string nom;
		int coords[2];
	
};

#endif
