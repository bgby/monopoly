all: main

Accueil.o: Accueil.cpp
	g++ -o Accueil.o -c Accueil.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

DialogSaisie.o: DialogSaisie.cpp
	g++ -o DialogSaisie.o -c DialogSaisie.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurInfosGen.o: ConteneurInfosGen.cpp
	g++ -o ConteneurInfosGen.o -c ConteneurInfosGen.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurBoutons.o: ConteneurBoutons.cpp
	g++ -o ConteneurBoutons.o -c ConteneurBoutons.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Fenetre.o: Fenetre.cpp
	g++ -o Fenetre.o -c Fenetre.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main.o: main.cpp
	g++ -o main.o -c main.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main: main.o Fenetre.o ConteneurBoutons.o ConteneurInfosGen.o DialogSaisie.o Accueil.o
	g++ -o monopoly main.o Fenetre.o ConteneurBoutons.o ConteneurInfosGen.o DialogSaisie.o Accueil.o `pkg-config gtkmm-3.0 --cflags --libs`

clean:
	rm -rf *.o main