int led[3] = {4,5,6};
int i; 

void setup() {
  Serial.begin(9600);
  for(i=0; i<=2; i++){
    pinMode(led[i], OUTPUT);
  }

}

void loop() {
  for(i=0; i<=2; i++){
    digitalWrite(led[i], HIGH);
    delay(1000);
    digitalWrite(led[i], LOW);
    delay(1000);
  }

}
