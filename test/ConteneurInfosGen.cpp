#include "ConteneurInfosGen.hpp"

ConteneurInfosGen::ConteneurInfosGen(){
	text1 = Gtk::Label("Test zone 1");
	text2 = Gtk::Label("Test zone 2");
	text3 = Gtk::Label("Test zone 3");

	pack_start(text1);
	pack_start(text2);
	pack_start(text3);
	
}