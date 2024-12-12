/*
 * Esta es una practica de encender alternativamente dos LEDS 
 * Autor: Mauro Fernandez
 * Data: 12/12/2024
*/

// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(13, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(12, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}
