#include "Accueil.hpp"
#include <iostream>

Accueil::Accueil() : nbJoueur2("2 joueur"), nbJoueur3("3 joueur"), nbJoueur4("4 joueur"), boutonJouer("Jouer"){
	set_title("ROBOPOLY"); 
	resize(405,405);
	
	//création d'un tableau
	tableau = Gtk::Table(4,4);
	
	//hButtonBox.set_layout(Gtk::BUTTONBOX_CENTER, 10);
	
	//message d'accueil
	msgBienvenue = Gtk::Label("Bienvenue dans le Robopoly ! Sélectionez le nombre de Joueurs et leur nom");
	
	//image de fond
	imgFond = Gtk::manage(new Gtk::Image("medias/fondAccueil1.png"));
	
	//buttons radio
	nbJoueur3.join_group(nbJoueur2);
	nbJoueur4.join_group(nbJoueur2);
	
	nbJoueur2.signal_clicked().connect(sigc::bind<int>(sigc::mem_fun(*this, &Accueil::on_clicked), 2));
	nbJoueur3.signal_clicked().connect(sigc::bind<int>(sigc::mem_fun(*this, &Accueil::on_clicked), 3));
	nbJoueur4.signal_clicked().connect(sigc::bind<int>(sigc::mem_fun(*this, &Accueil::on_clicked), 4));
	
	//affiche le jeu
	boutonJouer.signal_clicked().connect(sigc::mem_fun(*this, &Accueil::get_Noms));
	jeu = 0;
	show_all_children();
	
	//taille max de saisie
	nomJoueur1.set_max_length(20);
	nomJoueur2.set_max_length(20);
	nomJoueur3.set_max_length(20);
	nomJoueur4.set_max_length(20);
	
	nomJoueur1.set_text("J1");
	nomJoueur2.set_text("J2");
	nomJoueur3.set_text("J3");
	nomJoueur4.set_text("J4");
	
	//ajout de tout les widget dans le tableau
	tableau.attach(msgBienvenue, 0, 4, 0, 1, Gtk::SHRINK, Gtk::SHRINK, 60, 30);
	tableau.attach(nbJoueur2, 0, 2, 1, 2, Gtk::SHRINK, Gtk::SHRINK, 60, 30);
	tableau.attach(nbJoueur3, 1, 3, 1, 2, Gtk::SHRINK, Gtk::SHRINK, 30, 20);
	tableau.attach(nbJoueur4, 2, 4, 1, 2, Gtk::SHRINK, Gtk::SHRINK, 60, 20);
	
	tableau.attach(nomJoueur1, 0, 1, 2, 3, Gtk::SHRINK, Gtk::SHRINK, 10, 20);
	tableau.attach(nomJoueur2, 1, 2, 2, 3, Gtk::SHRINK, Gtk::SHRINK, 10, 20);
	tableau.attach(nomJoueur3, 2, 3, 2, 3, Gtk::SHRINK, Gtk::SHRINK, 10, 20);
	tableau.attach(nomJoueur4, 3, 4, 2, 3, Gtk::SHRINK, Gtk::SHRINK, 10, 20);
	
	tableau.attach(boutonJouer, 3, 4, 3, 4, Gtk::SHRINK, Gtk::SHRINK, 20, 20);
	
	tableau.attach(*imgFond, 0, 4, 0, 4); 
	
	
	nbJoueurs = 2;

	set_position(Gtk::WIN_POS_CENTER);
	
	//ajout du tableau à la fenêtre
	add(tableau);

	show_all();

}

//récupère le nombre de joueur voulant jouer
void Accueil::on_clicked(int val){
	nbJoueurs = val;
}

//récupération du nom des joueurs
void Accueil::get_Noms(){
	
		if(jeu != 0) //Si on a deja créer la fenetre jeu
			return;
		switch(nbJoueurs){
			case 2:
				joueur1 = nomJoueur1.get_text();
				joueur2 = nomJoueur2.get_text();
				jeu = new Jeu(nbJoueurs, joueur1, joueur2);
				break;
			case 3:
				joueur1 = nomJoueur1.get_text();
				joueur2 = nomJoueur2.get_text();
				joueur3 = nomJoueur3.get_text();
				jeu = new Jeu(nbJoueurs, joueur1, joueur2, joueur3);
				break;
			case 4:
				joueur1 = nomJoueur1.get_text();
				joueur2 = nomJoueur2.get_text();
				joueur3 = nomJoueur3.get_text();
				joueur4 = nomJoueur4.get_text();
				jeu = new Jeu(nbJoueurs, joueur1, joueur2, joueur3, joueur4);
				break;
		}
		
		jeu->signal_hide().connect(sigc::mem_fun(*this, &Accueil::jeuClose)); //si on ferme la fenetre jeu on met le pointeur à 0
		jeu->show();
			
}

void Accueil::jeuClose(){
	jeu = 0;
}
