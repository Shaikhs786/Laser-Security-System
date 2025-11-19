// Laser Security System Using Arduino Nano
// Simple code with LDR + Laser + Buzzer

int laserPin = 8;     // Laser diode signal pin
int ldrPin   = 9;     // LDR module OUT pin
int buzzer   = 11;    // Buzzer pin

void setup() {
  pinMode(laserPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(laserPin, HIGH);   // Turn ON Laser always
}

void loop() {
  int ldrState = digitalRead(ldrPin);

  if (ldrState == HIGH) {
    // Beam broken → LDR senses darkness → Alarm ON
    digitalWrite(buzzer, HIGH);
  } 
  else {
    // Laser correctly hitting LDR → No alarm
    digitalWrite(buzzer, LOW);
  }

  delay(10);
}
