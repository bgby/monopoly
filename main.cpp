#include <gtkmm/main.h>

#include "Accueil.hpp"

int main(int argc, char* argv[]) {
    //Gtk::Main app(argc, argv);
    //Jeu jeu(4);
    //Accueil acc;
    //Gtk::Main::run(jeu);
    
	auto app = Gtk::Application::create(argc, argv, "monopoly.jeu");

    auto acc = new Accueil();
    app->run(*acc);
	
	 
    return 0;
}
