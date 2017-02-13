/*23. rész - Az érintőgomb
 * 
 * Készítette: Kotán Tamás Balázs - Magyar Arduino Labor
 * Győr, 2017.02.10.
 */
 
int TouchSensor = 5;
int led = 6;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(TouchSensor, INPUT);
}

void loop() {
  if (digitalRead(TouchSensor) == HIGH)
  {
    digitalWrite(led, HIGH);
    Serial.println("Led ON");
  }
  else
  {
    digitalWrite(led, LOW);
    Serial.println("Led OFF");
  }
  delay(50);
}
