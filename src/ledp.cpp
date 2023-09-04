#include <Arduino.h>
const int buttonPin = 7;
const int ledPin = 10;
int statusBotao = 0;
int estado = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  statusBotao = digitalRead(buttonPin);

    if (statusBotao == HIGH && estado == 0) {
        digitalWrite(ledPin, HIGH);
        estado = 1;
        delay(2000);
      
    }

    else if (statusBotao == HIGH && estado == 1) {
        for (int i = 0; i < 3; i++){
            digitalWrite(ledPin, HIGH);
            delay(500);
            digitalWrite(ledPin, LOW);
            delay(500);

        }
        digitalWrite(ledPin, HIGH);
        estado = 2;
        delay(1000);
    }
    else if (statusBotao == HIGH && estado == 2) {
        digitalWrite(ledPin, LOW);
        estado = 0;
        delay(1000);
        
        }
}
