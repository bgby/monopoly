all: main

Accueil.o: Accueil.cpp
	g++ -o Accueil.o -c Accueil.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

DialogSaisie.o: DialogSaisie.cpp
	g++ -o DialogSaisie.o -c DialogSaisie.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurInfosJoueur.o: ConteneurInfosJoueur.cpp
	g++ -o ConteneurInfosJoueur.o -c ConteneurInfosJoueur.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurPlateau.o: ConteneurPlateau.cpp
	g++ -o ConteneurPlateau.o -c ConteneurPlateau.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurInfosGen.o: ConteneurInfosGen.cpp
	g++ -o ConteneurInfosGen.o -c ConteneurInfosGen.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurBoutons.o: ConteneurBoutons.cpp
	g++ -o ConteneurBoutons.o -c ConteneurBoutons.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Joueur.o: Joueur.cpp
	g++ -o Joueur.o -c Joueur.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Fenetre.o: Fenetre.cpp
	g++ -o Fenetre.o -c Fenetre.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main.o: main.cpp
	g++ -o main.o -c main.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main: main.o Fenetre.o ConteneurBoutons.o ConteneurInfosGen.o DialogSaisie.o Accueil.o ConteneurPlateau.o ConteneurInfosJoueur.o Joueur.o
	g++ -o monopoly main.o Fenetre.o ConteneurInfosJoueur.o ConteneurBoutons.o ConteneurInfosGen.o ConteneurPlateau.o DialogSaisie.o Joueur.o Accueil.o `pkg-config gtkmm-3.0 --cflags --libs`

clean:
	rm -rf *.o monopoly