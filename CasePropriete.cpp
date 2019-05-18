 #include "CasePropriete.hpp"

CasePropriete::CasePropriete(int _prix) : Case::Case(){
	proprietaire = NULL;
	prix = _prix;
	nbMaisons = 0;
	isFestival = false;

	set_label("Case Salle de cours");

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

int CasePropriete::getLoyer(){
	if(proprietaire == NULL)
		return 0;
	else if(isFestival)
		return (prix + nbMaisons*prix/4);
	else
		return (prix + nbMaisons*prix/4)/4;
}

void CasePropriete::effet(Joueur *j, Gtk::Window *fenetre){
	if(proprietaire != NULL && proprietaire != j)
		j->payer(*proprietaire, getLoyer());
}

void CasePropriete::majInfos(){
	lLoyer.set_label("Loyer : " + std::to_string(getLoyer()));
	if(proprietaire != NULL)
		lProp.set_label("Proprietaire : " + proprietaire->getNom());
	else
		lProp.set_label("Proprietaire : Aucun");
}