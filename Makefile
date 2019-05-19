all: main

Accueil.o: Accueil.cpp Accueil.hpp
	g++ -o Accueil.o -c Accueil.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Plateau.o: Plateau.cpp Plateau.hpp
	g++ -o Plateau.o -c Plateau.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Case.o: Case.cpp Case.hpp
	g++ -o Case.o -c Case.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

CasePropriete.o: CasePropriete.cpp CasePropriete.hpp
	g++ -o CasePropriete.o -c CasePropriete.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

CaseChance.o: CaseChance.cpp CaseChance.hpp
	g++ -o CaseChance.o -c CaseChance.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

CaseCrous.o: CaseCrous.cpp CaseCrous.hpp
	g++ -o CaseCrous.o -c CaseCrous.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

CaseSalle.o: CaseSalle.cpp CaseSalle.hpp
	g++ -o CaseSalle.o -c CaseSalle.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

CaseAngle.o: CaseAngle.cpp CaseAngle.hpp
	g++ -o CaseAngle.o -c CaseAngle.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`
	
CaseFrais.o: CaseFrais.cpp CaseFrais.hpp
	g++ -o CaseFrais.o -c CaseFrais.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurInfosGen.o: ConteneurInfosGen.cpp ConteneurInfosGen.hpp
	g++ -o ConteneurInfosGen.o -c ConteneurInfosGen.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurBoutons.o: ConteneurBoutons.cpp ConteneurBoutons.hpp
	g++ -o ConteneurBoutons.o -c ConteneurBoutons.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

PopUpDe.o: PopUpDe.cpp PopUpDe.hpp
	g++ -o PopUpDe.o -c PopUpDe.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Joueur.o: Joueur.cpp Joueur.hpp
	g++ -o Joueur.o -c Joueur.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Jeu.o: Jeu.cpp Jeu.hpp
	g++ -o Jeu.o -c Jeu.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main.o: main.cpp
	g++ -o main.o -c main.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main: main.o Jeu.o ConteneurBoutons.o ConteneurInfosGen.o Accueil.o Plateau.o Joueur.o Case.o CasePropriete.o CaseSalle.o CaseAngle.o CaseCrous.o CaseChance.o CaseFrais.o PopUpDe.o
	g++ -o monopoly main.o Jeu.o ConteneurBoutons.o ConteneurInfosGen.o Plateau.o Joueur.o Accueil.o Case.o CasePropriete.o CaseSalle.o CaseAngle.o CaseCrous.o CaseChance.o CaseFrais.o PopUpDe.o `pkg-config gtkmm-3.0 --cflags --libs`

clean:
	rm -rf *.o monopoly
