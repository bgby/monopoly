#include "Plateau.hpp"

Plateau::Plateau(){
	set_size_request(441,442);
}

bool Plateau::on_draw(const Cairo::RefPtr<Cairo::Context>& cr)
{
  Glib::RefPtr<Gdk::Pixbuf> image = Gdk::Pixbuf::create_from_file("monopolyPlateau2.gif");
  // Draw the image at 110, 90, except for the outermost 10 pixels.
  Gdk::Cairo::set_source_pixbuf(cr, image);
  cr->rectangle(0, 0, image->get_width(), image->get_height());
  cr->fill();

  //Gtk::Allocation allocation = get_allocation();
  const int width = get_width();
  const int height = get_height();

  // coordinates for the center of the window
  int xc, yc;
  xc = width / 2;
  yc = height / 2;

  cr->set_line_width(10.0);

  // draw red lines out from the center of the window
  cr->set_source_rgb(0.8, 0.0, 0.0);
  cr->move_to(0, 0);
  cr->line_to(xc, yc);
  cr->line_to(0, height);
  cr->move_to(xc, yc);
  cr->line_to(width, yc);
  cr->stroke();

  return true;
}