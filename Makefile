all: main

Accueil.o: Accueil.cpp
	g++ -o Accueil.o -c Accueil.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

DialogSaisie.o: DialogSaisie.cpp
	g++ -o DialogSaisie.o -c DialogSaisie.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Plateau.o: Plateau.cpp
	g++ -o Plateau.o -c Plateau.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

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

main: main.o Jeu.o ConteneurBoutons.o ConteneurInfosGen.o DialogSaisie.o Accueil.o Plateau.o Joueur.o
	g++ -o monopoly main.o Jeu.o ConteneurBoutons.o ConteneurInfosGen.o Plateau.o DialogSaisie.o Joueur.o Accueil.o `pkg-config gtkmm-3.0 --cflags --libs`

clean:
	rm -rf *.o monopoly