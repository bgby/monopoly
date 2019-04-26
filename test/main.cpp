#include <gtkmm/main.h>

#include "Accueil.hpp"
#include "Fenetre.hpp"

int main(int argc, char* argv[]) {
    Gtk::Main app(argc, argv);

    Accueil accueil = Accueil();
    //Gtk::Main::run(accueil);

    Fenetre fenetre = Fenetre();
    Gtk::Main::run(fenetre);

    return 0;
}
