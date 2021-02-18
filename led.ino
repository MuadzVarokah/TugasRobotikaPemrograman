const int pinDigital = 13;

void setup() {
  Serial.begin(9600);
  pinMode(pinDigital, OUTPUT);
}

void loop() {
  digitalWrite(pinDigital, HIGH);
}
