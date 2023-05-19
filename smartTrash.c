#include <EasyUltrasonic.h>
#include <Servo.h>

 

#define TRIGPIN 8 // Digital pin connected to the trig pin of the ultrasonic sensor
#define ECHOPIN 9 // Digital pin connected to the echo pin of the ultrasonic sensor

 

int ledPin = 13;
Servo servo1;

 

EasyUltrasonic ultrasonic; // Create the ultrasonic object

 

void setup() {
  Serial.begin(9600); // Open the serial port

 

  servo1.attach(7);

 

  pinMode(ledPin, OUTPUT);

 

  ultrasonic.attach(TRIGPIN, ECHOPIN); // Attaches the ultrasonic sensor on the specified pins on the ultrasonic object
  // ultrasonic.attach(TRIGPIN, ECHOPIN, 3, 300); // Uncomment this line and comment the above line if you are using the Ping))) ultrasonic sensor
}

 

void loop() {
  servo1.write(90);

  float distanceIN = ultrasonic.getDistanceIN(); // Read the distance in inches

 

  float distanceCM = convertToCM(distanceIN); // Convert the distance to centimeters

  if(distanceCM <20){
    digitalWrite(ledPin, HIGH);
    servo1.write(270);
    delay(1000);
    }else{
      digitalWrite(ledPin, LOW);
      }

  // Print the new distance value in Serial Monitor
  Serial.print(distanceCM);
  Serial.println(" cm");

 

  delay(100);
}
