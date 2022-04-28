#include <Servo.h>
int servoPin = 9;
int servoPos = 90;
int x = 800; //min value
int y = 2000; //max value
Servo servo;


void setup() {
Serial.begin(9600);
servo.attach(servoPin,x,y); //Change the x and y values, default is 800 and 2000.

}

void loop() {
Serial.println();
Serial.println("Enter the angle:");
while (Serial.available()==0){}
servoPos = Serial.parseInt();

servo.write(servoPos);
Serial.print(servoPos);
Serial.println(" Degrees.");
}
