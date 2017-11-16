// Hallo World der Vektordisplays
void HalloMake()
{
  // Koordinatenbereich X/Y 0..4095
  // die meissten Oszilloskope haben aber einen 4:3 Bildschirm! -> Verzerrungen die herausgerechnet werden müssen

  // Einfache Supportfunktion um Rechtecke zu zeichnen aus Simple.ino
  draw_rect(0, 0, 4095, 4095);

  // Text/String "Text", X,Y, Groesse
  draw_string("Hallo Make-Magazin!", 100, 150, 6);

  // in objects.c definierte Objekte Zeichnen.
  // Parameter: Objektnummer, X,Y, Größe, Rotation (0== aufrecht/Blender +Y, linksrum :-))
  draw_object(11, 2000, 2000, 40, 0); // Das ist Makey...
}

