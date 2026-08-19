//CIRCUITO BOTÂO LED
int buttonPin = 7;
int ledPin = 10;
bool estadoLed = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    estadoLed = !estadoLed;
    digitalWrite(ledPin, estadoLed);
    delay(500);
  }
}

//CIRCUITO POTENCIOMETRO
#include <Servo.h>

Servo servoMotor;

int potenciometro = A0;

int valorLido;
int angulo;

void setup() {
  
  servoMotor .attach(9);
  
}
void loop() {
  
  valorLido = analogRead(potenciometro);
  angulo = map(valorLido, 0, 1023, 0, 180);
  servoMotor .write(angulo);
  
  delay(15);
}