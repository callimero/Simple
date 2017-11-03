// Globale Variablen hier definieren
int vx = 4; //Geschwindigkeit
int xpos;
elapsedMillis frametime;

// wird regelmäßig aufgerufen
void video()
{
  xpos = xpos + vx * frametime;
  frametime = 0;
  if (xpos >= 2500 || xpos <= 0)  vx = vx * -1;
  draw_object(11, 800 + xpos, 2000, 20, 0);       // Lauf Makey lauf!
  // draw_string("Hallo Make-Magazin!", 500, 2000, 12);
}

