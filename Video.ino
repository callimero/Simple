// wird regelmäßig aufgerufen



void video()
{
  demoloop();
  //HalloMake();  // eine Demofunktion

  /*
    // Zufallslinen (Zehn Stück)
    for (int i = 0; i <= 10; i++)
    {
      moveto(rand() % 4096, rand() % 4096);
      lineto(rand() % 4096, rand() % 4096);
    //    moveto(random(4096),random(4096));
    //    lineto(random(4096),random(4096));
    }
  */

  /*
    // Zufallszahlen (Zehn Stück)
    char buf[12];
    for (int i = 0; i <= 10; i++)
    {
      draw_string(itoa(rand() % 100, buf, 10), rand() % 3800, rand() % 3800, rand() % 25 + 4);
    }
  */

  /*
    // Raster
    for (int i = 0; i <= 4096; i=i+512)
    {
    moveto(0,i);
    lineto(4095,i);
    moveto(i,0);
    lineto(i,4095);
    }
  */
  //draw_string("Hallo Make-Magazin!", 500, 2000, 12);
}

