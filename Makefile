all: main

Accueil.o: Accueil.cpp
	g++ -o Accueil.o -c Accueil.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

DialogSaisie.o: DialogSaisie.cpp
	g++ -o DialogSaisie.o -c DialogSaisie.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Plateau.o: Plateau.cpp
	g++ -o Plateau.o -c Plateau.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Case.o: Case.cpp
	g++ -o Case.o -c Case.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

CasePropriete.o: CasePropriete.cpp
	g++ -o CasePropriete.o -c CasePropriete.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

CaseChance.o: CaseChance.cpp
	g++ -o CaseChance.o -c CaseChance.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

CaseCrous.o: CaseCrous.cpp
	g++ -o CaseCrous.o -c CaseCrous.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

CaseAngle.o: CaseAngle.cpp
	g++ -o CaseAngle.o -c CaseAngle.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurInfosGen.o: ConteneurInfosGen.cpp
	g++ -o ConteneurInfosGen.o -c ConteneurInfosGen.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurBoutons.o: ConteneurBoutons.cpp
	g++ -o ConteneurBoutons.o -c ConteneurBoutons.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Joueur.o: Joueur.cpp
	g++ -o Joueur.o -c Joueur.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Jeu.o: Jeu.cpp
	g++ -o Jeu.o -c Jeu.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main.o: main.cpp
	g++ -o main.o -c main.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main: main.o Jeu.o ConteneurBoutons.o ConteneurInfosGen.o DialogSaisie.o Accueil.o Plateau.o Joueur.o Case.o CasePropriete.o CaseAngle.o CaseCrous.o CaseChance.o
	g++ -o monopoly main.o Jeu.o ConteneurBoutons.o ConteneurInfosGen.o Plateau.o DialogSaisie.o Joueur.o Accueil.o Case.o CasePropriete.o CaseAngle.o CaseCrous.o CaseChance.o `pkg-config gtkmm-3.0 --cflags --libs`

clean:
	rm -rf *.o monopoly
