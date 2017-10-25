// Main display function in game

char inChar = '2';

void demoloop()
{

  if (Serial.available() > 0) {
    // read incoming serial data:
    inChar = Serial.read();
    Serial.print(inChar);
  }

  switch (inChar) {
    case '0':
      break;
    case '1':
      rnd_lines();
      break;
    case '2':
      rnd_poly();
      break;
    case '3':
      rnd_star();
    case '4':
      rnd_star2();
      break;
    case '5':
      world();
      break;
    case '6':
      sparky();
      break;
    case '7':
      lisa();
      break;
    case '8':
      SpinMakey();
      break;
    default:
      HalloMake();
      break;
  }
}

