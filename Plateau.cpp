#include "Plateau.hpp"

#define RADIUS 10

Plateau::Plateau(){
	set_size_request(800,800);
	//Création des 40 cases
	
	//premiere rangée du bas 
	casesPlateau.push_back(new CaseAngle('d', 719, 726)); //case départ
	casesProp.push_back(new CaseSalle(15, "65-66 RC05", 635, 726));//65-66 RC05
		casesPlateau.push_back(casesProp.back());
	casesPlateau.push_back(new CaseFrais(70, 570, 726)); //Frais de scolarite
	casesProp.push_back(new CaseSalle(20, "65-66 RC07", 503, 726)); //65-66 RC07
		casesPlateau.push_back(casesProp.back());
	casesPlateau.push_back(new CaseChance(439, 726)); //Case chance 1
	casesProp.push_back(new CaseCrous("Crous Cuvier", 371, 726)); //Crous Cuvier
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseSalle(45, "56-66 105", 305, 726)); //56-66 105
		casesPlateau.push_back(casesProp.back());
	casesPlateau.push_back(new CaseFrais(110, 241, 726)); //Loyer
	casesProp.push_back(new CaseSalle(55, "56-66 109", 174, 726)); //56-66 109
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseSalle(65, "56-66 112", 108, 726)); //56-66 112
		casesPlateau.push_back(casesProp.back());
	
	//Rangée gauche
	casesPlateau.push_back(new CaseAngle('p', 30, 726)); //Prison
	casesProp.push_back(new CaseSalle(85, "55-56 101", 30, 636)); //55-56 101
		casesPlateau.push_back(casesProp.back());
	casesPlateau.push_back(new CaseChance(30, 569)); //Case chance 2
	casesProp.push_back(new CaseSalle(95, "55-56 102", 30, 503)); //55-56 102
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseSalle(110, "55-56 103", 30, 438)); //55-56 103
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseCrous("Crous Censier", 30, 371)); //Crous Censier
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseSalle(140, "Esclangon 201", 30, 305)); //Esclangon 201
		casesPlateau.push_back(casesProp.back());
	casesPlateau.push_back(new CaseFrais(110, 30, 238)); //Loyer
	casesProp.push_back(new CaseSalle(150, "Esclangon 202", 30, 173)); //Esclangon 202
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseSalle(180, "Esclangon 203", 30, 108)); //Esclangon 203
		casesPlateau.push_back(casesProp.back());
	
	//Rangée haute
	casesPlateau.push_back(new CaseAngle('s', 30, 30)); //Evenement BDE
	casesProp.push_back(new CaseSalle(210, "56-66 207", 109, 30)); //56-66 207
		casesPlateau.push_back(casesProp.back());
	casesPlateau.push_back(new CaseChance(173, 30)); //Case chance 3
	casesProp.push_back(new CaseSalle(230, "56-66 211", 240, 30)); //56-66 211
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseSalle(250, "56-66 213", 306, 30)); //56-66 213
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseCrous("Atrium Café", 372, 30)); //Crous Atrium Cafe
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseSalle(280, "Esclangon 304", 438, 30)); //Esclangon 304
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseSalle(300, "Esclangon 306", 504, 30)); //Esclangon 306
		casesPlateau.push_back(casesProp.back());
	casesPlateau.push_back(new CaseFrais(110, 568, 30)); //Loyer
	casesProp.push_back(new CaseSalle(310, "Esclangon 321", 635, 30)); //Esclangon 321
		casesPlateau.push_back(casesProp.back());
	
	//Rangée droite
	casesPlateau.push_back(new CaseAngle('a', 726, 30)); //Ascenseur
	casesProp.push_back(new CaseSalle(340, "Esclangon 319", 726, 108)); //Esclangon 319
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseSalle(360, "Esclangon 327", 726, 172)); //Esclangon 327
		casesPlateau.push_back(casesProp.back());
	casesPlateau.push_back(new CaseChance(726, 239)); //Case chance 4
	casesProp.push_back(new CaseSalle(370, "Esclangon 328", 726, 305)); //Esclangon 328
		casesPlateau.push_back(casesProp.back());
	casesProp.push_back(new CaseCrous("Crous du Chatelet", 726, 371)); //Crous Chatelet
		casesPlateau.push_back(casesProp.back());
	casesPlateau.push_back(new CaseFrais(110, 726, 439)); //Loyer
	casesProp.push_back(new CaseSalle(410, "46-56 103", 726, 503)); //46-56 103
		casesPlateau.push_back(casesProp.back());
	casesPlateau.push_back(new CaseChance(726, 570)); //Case chance 5
	casesProp.push_back(new CaseSalle(450, "Esclangon 324", 726, 636)); //Esclangon 324
		casesPlateau.push_back(casesProp.back());


}

Plateau::~Plateau(){/*
	unsigned lenCasesPlateau = casesPlateau.size();
	for(unsigned i = 0; i < lenCasesPlateau; i++){
		std::cout << *(casesPlateau.end()) << std::endl;

		delete *(casesPlateau.end());
		//	casesPlateau.erase(casesPlateau.end());
	}*/
}

bool Plateau::on_draw(const Cairo::RefPtr<Cairo::Context>& cr)
{
  Glib::RefPtr<Gdk::Pixbuf> image = Gdk::Pixbuf::create_from_file("medias/robopolysansfondprix800.png");
  // Draw the image at 110, 90, except for the outermost 10 pixels.
  Gdk::Cairo::set_source_pixbuf(cr, image);
  cr->rectangle(0, 0, image->get_width(), image->get_height());
  cr->fill();

  Gtk::Allocation allocation = get_allocation();
  const int width = allocation.get_width();
  const int height = allocation.get_height();

  // coordinates for the center of the window
  int xc, yc;
  xc = width / 2;
  yc = height / 2;

  
  cr->set_line_width(2.0);

  cr->set_source_rgb(0.0, 0.8, 0.0);
  cr->move_to(638, 769);
  cr->line_to(687, 769);
  cr->move_to(xc,yc);
  //cr->arc(TEST);
  cr->fill();

  //Tracage des visiteurs
  for(unsigned c = 0; c < casesPlateau.size(); c++){
  	for(unsigned v = 0; v < casesPlateau[c]->getLenListeVisiteurs(); v++){
  		dessinerPion(cr, casesPlateau[c], casesPlateau[c]->getVisiteur(v));
  	}  	
  }

  for(unsigned c = 0; c < casesProp.size(); c++){
  	if(casesProp[c]->getProprietaire() != NULL){
  		cr->set_line_width(4.0);
  		dessinerProp(cr, casesProp[c], casesProp[c]->getProprietaire());
  		cr->stroke();
  	}
  }
  cr->stroke();
  
  
  return true;
}

void Plateau::changerJoueurCase(int idAncienneCase, int idNouvelleCase, Joueur *j){
	casesPlateau[idAncienneCase]->retirerVisiteur(j);
	casesPlateau[idNouvelleCase]->ajouterVisiteur(j);
}

void Plateau::declencherEffet(int idCase, Joueur *j, Gtk::Window* fenetre){
	casesPlateau[idCase]->effet(j, fenetre);
}

void Plateau::dessinerPion(const Cairo::RefPtr<Cairo::Context>& cr, Case* c, Joueur* j){
	char couleur = j->getColor();
	switch(couleur){
		case 'r':
			cr->set_source_rgb(1., 0., 0.);
			cr->arc(c->getX()+11.,c->getY()+11., RADIUS, 0., 2.*M_PI);
			break;

		case 'g':
			cr->set_source_rgb(0., 1., 0.);
			cr->arc(c->getX()+44.,c->getY()+11., RADIUS, 0., 2.*M_PI);
			break;

		case 'b':
			cr->set_source_rgb(0., 0., 1.);
			cr->arc(c->getX()+11.,c->getY()+44., RADIUS, 0., 2.*M_PI);
			break;

		case 'y':
			cr->set_source_rgb(1., 1., 0.);
			cr->arc(c->getX()+44.,c->getY()+44., RADIUS, 0., 2.*M_PI);
			break;
	}
	cr->fill();
}

void Plateau::dessinerProp(const Cairo::RefPtr<Cairo::Context>& cr, Case* c, Joueur* j){
	char couleur = j->getColor();
	switch(couleur){
		case 'r':
			cr->set_source_rgb(1., 0., 0.);
			break;

		case 'g':
			cr->set_source_rgb(0., 1., 0.);
			break;

		case 'b':
			cr->set_source_rgb(0., 0., 1.);
			break;

		case 'y':
			cr->set_source_rgb(1., 1., 0.);
			break;
	}
	cr->rectangle(c->getX()+11, c->getY()+11, 33, 33);
}

void Plateau::refreshPlateau(){
    Glib::RefPtr<Gdk::Window> plat = get_window();
    if (plat){
        Gdk::Rectangle r(0, 0, get_allocation().get_width(),
                get_allocation().get_height());
        plat->invalidate_rect(r, false);
    }
}