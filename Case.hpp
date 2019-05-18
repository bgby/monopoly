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

		virtual void majInfos() = 0;

	private:
		int id;
		static int next_id;
		std::vector<Joueur*> listeVisiteurs;
	
};

#endif
