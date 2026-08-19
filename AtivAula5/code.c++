const int pinoPIR = 7;
const int pinoLED = 6;

void setup() {
  pinMode(pinoPIR, INPUT);
  pinMode(pinoLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int estadoPIR = digitalRead(pinoPIR);

  if (estadoPIR == HIGH) {
    digitalWrite(pinoLED, HIGH);
    Serial.println("Movimento detectado");
  } else {
    digitalWrite(pinoLED, LOW);
    Serial.println("Sem movimento");
  }
  
  delay(5000);
}
