#include <ESP32Servo.h>
#include <Arduino.h>
Servo meuMotor;


// Definição dos pinos
const int LED1 = 2;
const int LED2 = 4;
const int LED3 = 18;
const int SERVO = 19;
void setup()
{
  
  // Configuração do servo
  meuMotor.attach(SERVO);
  meuMotor.write(0);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop()
{
  meuMotor.write(180);
  delay(1000);
  digitalWrite(LED3, HIGH);

  meuMotor.write(90);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);

  meuMotor.write(0);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, HIGH);
  delay(1000);

  meuMotor.write(90);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);

  meuMotor.write(180);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(1000);
}
