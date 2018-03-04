// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 9; 
// Create a servo object 
Servo Servo1; 
Servo Servo2; 
Servo Servo3; 
Servo Servo4; 
Servo Servo5; 
Servo Servo6; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(6); 
   Servo2.attach(7); 
   Servo3.attach(8); 
   Servo4.attach(9); 
   Servo5.attach(10); 
   Servo6.attach(11); 
}
void loop(){ 
   // Make servo go to 0 degrees 
   Servo1.write(0);
   delay(1000);
   Servo2.write(0);
   delay(1000);
   Servo3.write(0);
   delay(1000);
   Servo4.write(0);
   delay(1000);
   Servo5.write(0);
   delay(1000);
   Servo6.write(0);
   delay(1000);  
   // Make servo go to 90 degrees 
   Servo1.write(30);
   delay(1000);
   Servo2.write(30);
   delay(1000);
   Servo3.write(30);
   delay(1000);
   Servo4.write(30);
   delay(1000);
   Servo5.write(30);
   delay(1000);
   Servo6.write(30); 
   delay(10000); 
   Servo1.write(90);
   delay(1000);
   Servo2.write(90);
   delay(1000);
   Servo3.write(90);
   delay(1000);
   Servo4.write(90);
   delay(1000);
   Servo5.write(90);
   delay(1000);
   Servo6.write(90);
   delay(10000);  
} 

