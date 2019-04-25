all: main

ConteneurInfosGen.o: ConteneurInfosGen.cpp
	g++ -o ConteneurInfosGen.o -c ConteneurInfosGen.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

ConteneurBoutons.o: ConteneurBoutons.cpp
	g++ -o ConteneurBoutons.o -c ConteneurBoutons.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

Fenetre.o: Fenetre.cpp
	g++ -o Fenetre.o -c Fenetre.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main.o: main.cpp
	g++ -o main.o -c main.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main: main.o Fenetre.o ConteneurBoutons.o ConteneurInfosGen.o
	g++ -o main main.o Fenetre.o ConteneurBoutons.o ConteneurInfosGen.o `pkg-config gtkmm-3.0 --cflags --libs`

clean:
	rm -rf *.o main