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
delay(30);
  // Text/String "Text", X,Y, Groesse
  draw_string("Hallo Make-Magazin!", 100, 150, 6);

  // in objects.c definierte Objekte Zeichnen.
  // Parameter: Objektnummer, X,Y, Größe, Rotation (0== aufrecht/Blender +Y)
  draw_object(11, 2000, 2000, 40, 0);
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
int sx[40];
int sy[40];
int idx;

void rnd_star2()
{
  // "Stern"
  xc[idx] = rand() % 4096;
  yc[idx] = rand() % 4096;
  idx = (idx + 1) % 40;
  for (int i = 0; i < 40; i++) // 40 Linien
  {
    moveto(xc[i], yc[i]); //Startpunkt
    lineto(2048, 2048);
  }
}

int wx, wy;
void world()
{
  joystick();
  wx = wx - joyx / 4;
  wy = wy - joyy / 4;
  draw_object(7, 2000 + wx, 2000 + wy, 2 + joyz / 4, 0);
  draw_object(8, 2000 + wx, 2000 + wy, 2 + joyz / 4, 0);
  draw_object(9, 2000 + wx, 2000 + wy, 2 + joyz / 4, 0);
  draw_object(10, 2000 + wx, 2000 + wy, 2 + joyz / 4, 0);
}


// Funktion um Vorzeichen zu finden
int sgn(int val) {
  if (val < 0) return -1;
  if (val == 0) return 0;
  return 1;
}


int xc0, yc0, sx0, sy0, xc1, yc1, sx1, sy1, tidx;
void sparky()
{
  const int fak = 150, off = 80; //Zufalls Bereich (fak+off) und Offset (Minimum)

  if (xc0 == 0 && yc0 == 0) // Ja mach ich noch besser ;-)
  {
    xc0 = rand() % 4096;
    yc0 = rand() % 4096;
    xc1 = rand() % 4096;
    yc1 = rand() % 4096;
    sx0 = rand() % fak + off;
    sy0 = rand() % fak + off;
    sx1 = rand() % fak + off;
    sy1 = rand() % fak + off;
  }

  // Zufälliges abprallen, nix Physik hier :-)
  xc0 = xc0 + sx0;
  if (xc0 > 4095) sx0 = -(rand() % fak + off);
  if (xc0 <= 0)   sx0 =  (rand() % fak + off);

  yc0 = yc0 + sy0;
  if (yc0 > 4095) sy0 = -(rand() % fak + off);
  if (yc0 <= 0)   sy0 =  (rand() % fak + off);

  xc1 = xc1 + sx1;
  if (xc1 > 4095) sx1 = -(rand() % fak + off);
  if (xc1 <= 0)   sx1 =  (rand() % fak + off);

  yc1 = yc1 + sy1;
  if (yc1 > 4095) sy1 = -(rand() % fak + off);
  if (yc1 <= 0)   sy1 =  (rand() % fak + off);

  moveto(xc0, yc0); //Startpunkt
  lineto(xc1, yc1);

  xc[idx] = xc0; // vorherigen Linien merken
  yc[idx] = yc0;
  xc[idx + 20] = xc1;
  yc[idx + 20] = yc1;
  idx = (idx + 1) % 20; //globaler Index (20 Linien a 2 XY Koordinaten)

  for (int i = 0; i < 20; i++)
  {
    tidx = (idx + i ) % 20;
    moveto(xc[tidx], yc[tidx]);
    lineto(xc[tidx + 20], yc[tidx + 20]);
  }
}


// einfache Lissajous-Figuren
void lisa()
{
  const float pi = 3.14159265359;
  float xf = 0.0;
  float yf = 0.0;
  float rad;
  int xx, yy;

  for (int w = 0; w <= 360; w = w + 1)
  {
    rad = w * pi / 180.0;

    // aktuelle Funktion. Faktoren 1.0 und 1.0 ergibt einen Kreis
    xf = sin(rad * 3.0);
    yf = cos(rad * 7.0);

    // anpassen an Kordinaten/Aspekt (hier 4:3) und Integerumrechnung
    xx = int(xf * 768.0) + 2048;
    yy = int(yf * 1024.0) + 2048;
    if (w == 0)
      moveto(xx, yy);
    else
      lineto(xx, yy);
  }
}



