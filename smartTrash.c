#include <Servo.h>

Servo servo1;

int trigPin = 9;

int echoPin = 8;

int ledPin = 13;

long distance;

long duration;

void setup() 
{
  servo1.attach(7); 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  ultra_sonic();
  servo1.write(90);

  if(distance <= 9)
  {
    digitalWrite(ledPin, HIGH); // liga o LED
    servo1.write(270);
    delay(2000); // espera 2 segundos
  }
  else
  {
    digitalWrite(ledPin, LOW); // desliga o LED
  }
}

void ultra_sonic()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
}