// Blinking LED with Code
// This code turns an LED ON and OFF every 1 second using Arduino

void setup()
{
  // Set digital pin 7 as OUTPUT
  // This pin will send voltage to the LED
  pinMode(7, OUTPUT);
}

void loop()
{
  // Send HIGH signal (5V) to pin 7
  // This turns the LED ON
  digitalWrite(7, HIGH);

  // Wait for 1000 milliseconds (1 second)
  delay(1000);

  // Send LOW signal (0V) to pin 7
  // This turns the LED OFF
  digitalWrite(7, LOW);

  // Wait for 1000 milliseconds (1 second)
  delay(1000);

  // After this, the loop starts again automatically
}
