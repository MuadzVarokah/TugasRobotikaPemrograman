const int adc = A0;
const int led = 6;
int teganganADC, nilaiADC;

void setup() {
  Serial.begin(9600);
  pinMode(adc, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  teganganADC = analogRead(adc);
  nilaiADC = map(teganganADC,0,4095,0,500);
  if(teganganADC == 273){
    digitalWrite(led, HIGH);
    Serial.print("-------------------");
    Serial.print("Tegangan ADC : ");
    Serial.println(teganganADC);
    Serial.print("Nilai ADC    : ");
    Serial.println(nilaiADC);
    Serial.print("-------------------");
    Serial.println(" ");
  }else{
    digitalWrite(led, LOW);
    Serial.print("Tegangan ADC : ");
    Serial.println(teganganADC);
    Serial.print("Nilai ADC    : ");
    Serial.println(nilaiADC);
    Serial.println(" ");
  }
  //Jadi,nilai ADC yang terbaca ketika tegangan 2.73 Volt adalah 2271
}
