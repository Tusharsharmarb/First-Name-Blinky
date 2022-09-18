void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);     // Initiallized the built-in LED of arduino nano and set it as OUTPUT
}

int unit_delay = 250;       // Assigned 250 value to unit_delay

void dot()      // dot() function will represent the dot in morse code
{
  digitalWrite(LED_BUILTIN, HIGH);    // digitalwrite pin high will glow the LED
  delay(unit_delay);                  // delay for 1 unit or 250 millisecond
  digitalWrite(LED_BUILTIN, LOW);     // digitalwrite pin low will stop the LED
  delay(unit_delay);                  // delay to get in between of every two representation
}
void dash()     // dash() function will represent the dot in morse code
{
  digitalWrite(LED_BUILTIN, HIGH);     // digitalwrite pin high will glow the LED
  delay(unit_delay * 3);                // delay for 3 unit or 750 millisecond
  digitalWrite(LED_BUILTIN, LOW);       // digitalwrite pin low will stop the LED
  delay(unit_delay);                  // delay to get in between of every two representation
}
void gap()    // gap() represent the gap represent that letter has beeen changed
{
  delay(unit_delay * 3);        // // delay for 3 unit or 750 millisecond
}


void loop() {               //this is my loop code which has my main code in which i have called dot(), dash() and gap() function respectively for the representation of the letter in morse code
  // put your main code here, to run repeatedly:


  //T
  dash();
  gap();

  //U
  dot();
  dot();
  dash();
  gap();

  //S
  dot();
  dot();
  dot();
  gap();

  //H
  dot();
  dot();
  dot();
  dot();
  gap();

  //A
  dot();
  dash();
  gap();

  //R
  dot();
  dash();
  dot();
  gap();

}
