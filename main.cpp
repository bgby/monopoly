#include <gtkmm/main.h>

//#include "Accueil.hpp"
#include "Jeu.hpp"

int main(int argc, char* argv[]) {
    Gtk::Main app(argc, argv);

    //Accueil accueil = Accueil();
    //Gtk::Main::run(accueil);

    Jeu jeu(4);
    Gtk::Main::run(jeu);

    return 0;
}
