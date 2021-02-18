const int pinPwmUp = 5;
const int pinPwmDown = 4;

void setup() {
  Serial.begin(9600);
  pinMode(pinPwmUp,OUTPUT);
  pinMode(pinPwmDown,OUTPUT);

}

void loop() {
  digitalWrite(pinPwmUp, HIGH);
  digitalWrite(pinPwmDown, LOW);

}
