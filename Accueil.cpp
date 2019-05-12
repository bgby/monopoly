#include "Accueil.hpp"

Accueil::Accueil(){
	vButtonBox = Gtk::VButtonBox();
	msgBienvenue = Gtk::Label("Bienvenue dans le Robopoly !");
	boutonJouer = Gtk::Button("Jouer");
	boutonApropos = Gtk::Button("A propos");
	nbJoueurs = 0;

	set_position(Gtk::WIN_POS_CENTER);

	vButtonBox.pack_start(msgBienvenue);
	vButtonBox.pack_start(boutonJouer);
	vButtonBox.pack_start(boutonApropos);

	add(vButtonBox);

	show_all();

	//Signaux
	boutonJouer.signal_clicked().connect(sigc::mem_fun(*this, &Accueil::onBoutonJouer));
}

void Accueil::onBoutonJouer(){
	DialogSaisie dialogSaisie = DialogSaisie("Veuillez saisir le nombre de joueurs", *this);

}