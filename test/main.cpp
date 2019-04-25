#include <gtkmm/main.h>

#include "Accueil.hpp"
#include "Fenetre.hpp"

int main(int argc, char* argv[]) {
    Gtk::Main app(argc, argv);
    Accueil accueil;
    Gtk::Main::run(accueil);
    Fenetre fenetre;
    Gtk::Main::run(fenetre);
    return 0;
}
