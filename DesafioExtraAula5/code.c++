// C++ code
//
int buttonPin = 7;
int led1Pin = 10;
int led2Pin = 11;
int estado = 0;

void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    estado = estado + 1;
    if (estado > 2) {
      estado = 0;
    }

    if (estado == 0) {
      digitalWrite(led1Pin, LOW);
      digitalWrite(led2Pin, LOW);
    } else if (estado == 1) {
      digitalWrite(led1Pin, HIGH);
      digitalWrite(led2Pin, LOW);
    } else if (estado == 2) {
      digitalWrite(led1Pin, LOW);
      digitalWrite(led2Pin, HIGH);
    }

    delay(500);
  }
}