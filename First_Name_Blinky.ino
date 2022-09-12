void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

int unit_delay = 250;

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(unit_delay);
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit_delay);
}
void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(unit_delay * 3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit_delay);
}
void gap()
{
  delay(unit_delay * 3);
}


void loop() {
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

  exit(0);

}
