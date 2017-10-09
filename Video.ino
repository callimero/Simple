// Main display function in game
void video()
{
  // Koordinatenbereich X/Y 0..4095
  // die meissten Oszilloskope haben aber einen 4:3 Bildschirm! -> Verzerrungen die herausgerechnet werden müssen
  // X Zeichnen mit einfachen Befehlen: Ursprung ist unten Links
  moveto(3000,3000);
  lineto(3500,3500);
  moveto(3000,3500);
  lineto(3500,3000);
  
  // Einfache Supportfunktion um Rechtecke zu zeichnen
  draw_rect(0,0,4095,4095);

  // Text/String "Text", X,Y, Groesse
  draw_string("Hallo Make-Magazin!", 100, 150, 6);

  // in objects.c definierte Objekte Zeichnen.
  // Parameter: Objektnummer, X,Y, Größe, Rotation (0== Nach oben zeigend)
  draw_object(3, 2000, 2000, 100, 0);
  draw_object(4, 2000, 2000, 70 + rand() %70 ,0); 
}

