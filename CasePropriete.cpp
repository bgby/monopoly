 #include "CasePropriete.hpp"

CasePropriete::CasePropriete(int _prix) : Case::Case(){
	proprietaire = NULL;
	prix = _prix;
	nbMaisons = 0;
	isFestival = false;
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
