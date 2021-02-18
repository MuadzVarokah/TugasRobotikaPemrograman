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
      ganjil(pinLedGnj, pinLedGnp, 1000);
      } else {
      genap(pinLedGnp, pinLedGnj, 1000);
      }
  }
}

void ganjil(int pinLedGnj, int pinLedGnp, int cooldown){
  digitalWrite(pinLedGnj, HIGH);
  digitalWrite(pinLedGnp, LOW);
  delay(cooldown);
}

void genap(int pinLedGnp, int pinLedGnj, int cooldown){
  digitalWrite(pinLedGnp, HIGH);
  digitalWrite(pinLedGnj, LOW);
  delay(cooldown);
}
