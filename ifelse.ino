const int pushButton = 4;
const int led = 5;
int tombol = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  tombol = digitalRead(pushButton);
  if(tombol == 1){
    digitalWrite(led, HIGH);
    } else {
      digitalWrite(led, LOW);
      }

}
