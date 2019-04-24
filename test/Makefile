all: main

Fenetre.o: Fenetre.cpp
	g++ -o Fenetre.o -c Fenetre.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main.o: main.cpp
	g++ -o main.o -c main.cpp -W -Wall `pkg-config gtkmm-3.0 --cflags --libs`

main: main.o Fenetre.o
	g++ -o main main.o Fenetre.o `pkg-config gtkmm-3.0 --cflags --libs`

clean:
	rm -rf *.o main