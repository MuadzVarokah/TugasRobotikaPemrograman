const int pinLedGnj = 5;
const int pinLedGnp = 6;
int i;

void setup() {
  Serial.begin(9600);
  pinMode(pinLedGnj, OUTPUT);
  pinMode(pinLedGnp, OUTPUT);

}

void loop() {
  for(i=1; i<=2; i++){
    if(i==1){
      digitalWrite(pinLedGnj, HIGH);
      digitalWrite(pinLedGnp, LOW);
      delay(1000);
      } else {
        digitalWrite(pinLedGnp, HIGH);
        digitalWrite(pinLedGnj, LOW);
        delay(1000);
        }
  }

}
