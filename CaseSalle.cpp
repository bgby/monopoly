 #include "CaseSalle.hpp"

CaseSalle::CaseSalle(int _prix) : CasePropriete::CasePropriete(){
	proprietaire = NULL;
	prix = _prix;
	nbMaisons = 0;
	isFestival = false;
	nom = "Case Salle de cours";

	set_label(nom);

	vbox = Gtk::VBox();

	lPrix = Gtk::Label("Prix : " + std::to_string(prix));
	lLoyer = Gtk::Label("Loyer : " + std::to_string(getLoyer()));
	lProp = Gtk::Label("Proprietaire : Aucun");

	vbox.pack_start(lPrix);
	vbox.pack_start(lLoyer);
	vbox.pack_start(lProp);

	add(vbox);

	show_all();
}

CaseSalle::CaseSalle(int _prix, std::string _nom, int x, int y) : CaseSalle::CaseSalle(_prix){
	nom = _nom;
	coords[0] = x;
	coords[1] = y;
}

int CaseSalle::getLoyer(){
	if(proprietaire == NULL)
		return 0;
	else if(isFestival)
		return (prix + nbMaisons*prix/4);
	else
		return (prix + nbMaisons*prix/4)/4;
}

void CaseSalle::effet(Joueur *j, Gtk::Window *fenetre){
	if(proprietaire != NULL && proprietaire != j)
		if(j->estSolvable(getLoyer()))
			j->payer(*proprietaire, getLoyer());
		else{
			j->perdu();
			retirerVisiteur(j);
		}
}