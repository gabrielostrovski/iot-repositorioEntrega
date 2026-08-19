const int ledVermelho = 10;
const int ledAmarelo = 9;
const int ledVerde = 8;
const int pinoSensor = A0;

float temperatura;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  int leitura = analogRead(pinoSensor);
  float tensao = leitura * 5.0 / 1024.0;
  temperatura = (tensao - 0.5) * 100.0;

  if (temperatura < 20.0) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
  } else if (temperatura < 30.0) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
  } else {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
  }

  delay(500);
}