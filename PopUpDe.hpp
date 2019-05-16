#ifndef POPUPDE
#define POPUPDE

#include <string>

#include <gtkmm/box.h>
#include <gtkmm/image.h>
#include <gtkmm/button.h>
#include <gtkmm/dialog.h>
//#include <gtkmm/entry.h>
//#include <gtkmm/label.h>
#include <gtkmm/stock.h>
#include <gtkmm/window.h>

class PopUpDe : public Gtk::Dialog {
    public :
        PopUpDe(std::string titre, Gtk::Window* parent, std::string nom1, std::string nom2);
        
    private :
        Gtk::Box* boiteV;
        Gtk::Image* imgDes1;
        Gtk::Image* imgDes2;
        std::string nomImage1;
        std::string nomImage2;
};

#endif
