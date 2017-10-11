void HalloMake()
{
  // Koordinatenbereich X/Y 0..4095
  // die meissten Oszilloskope haben aber einen 4:3 Bildschirm! -> Verzerrungen die herausgerechnet werden müssen
  // X Zeichnen mit einfachen Befehlen: Ursprung ist unten Links
  moveto(3000, 3000);
  lineto(3500, 3500);
  moveto(3000, 3500);
  lineto(3500, 3000);

  // Einfache Supportfunktion um Rechtecke zu zeichnen aus Simple.ino
  draw_rect(0, 0, 4095, 4095);

  // Text/String "Text", X,Y, Groesse
  draw_string("Hallo Make-Magazin!", 100, 150, 6);

  // in objects.c definierte Objekte Zeichnen.
  // Parameter: Objektnummer, X,Y, Größe, Rotation (0== Nach oben zeigend)
  draw_object(3, 2000, 2000, 100, 0);
  draw_object(4, 2000, 2000, 70 + rand() % 70 , 0);
}



void rnd_lines()
{
  // Zufallslinen (Zehn Stück)
  for (int i = 0; i <= 10; i++)
  {
    moveto(rand() % 4000, rand() % 4000);
    lineto(rand() % 4000, rand() % 4000);
  }
}

void rnd_poly()
{
  // Polygon
  moveto(rand() % 4000, rand() % 4000); //Startpunkt
  for (int i = 0; i <= 10; i++) // Zehn Punkte
  {
    lineto(rand() % 4000, rand() % 4000);
  }
}

void rnd_star()
{
  // "Stern"
  for (int i = 0; i <= 40; i++) // 40 Linien
  {
    moveto(rand() % 4000, rand() % 4000); //Startpunkt
    lineto(2048, 2048);
  }
}

int xc[40];
int yc[40];
int idx;

void rnd_star2()
{
  // "Stern"
  xc[idx] = rand() % 4096;
  yc[idx] = rand() % 4096;
  idx = (idx + 1) % 40;
  for (int i = 0; i < 40; i++) // 40 Linien
  {
    moveto(xc[i],yc[i]); //Startpunkt
    lineto(2048, 2048);
  }
}

int wx,wy;
void world()
{
  joystick();
  wx=wx-joyx/4;
  wy=wy-joyy/4;
  draw_object(7, 2000+wx, 2000+wy, 2+joyz/4, 0);
  draw_object(8, 2000+wx, 2000+wy, 2+joyz/4, 0);
  draw_object(9, 2000+wx, 2000+wy, 2+joyz/4, 0);
  draw_object(10, 2000+wx, 2000+wy, 2+joyz/4, 0);
}

