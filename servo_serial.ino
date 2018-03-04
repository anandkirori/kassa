#include <Servo.h> 

Servo myservo;
int input;
void setup() 
{ 
  myservo.attach(9);
  Serial.begin(9600);
  myservo.write(0);
} 

void loop() {
    input = Serial.read();
    myservo.write(input);
    Serial.println(10);
    delay (100);  
}
