#include <Servo.h>
Servo myservo1; 
Servo myservo2; 
Servo myservo3;
String inByte;
int pos;

void setup() {
 
  myservo1.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
  myservo1.write(120);
  myservo2.write(0);
  myservo3.write(90);
  Serial.begin(9600);
}

void loop()
{    
  if(Serial.available())  // if data available in serial port
    { 
    inByte = Serial.readStringUntil('\n'); // read data until newline
    pos = inByte.toInt();   // change datatype from string to integer
    if(pos==0){
      myservo3.write(180);
      delay(300);             
      myservo1.write(60);
      delay(300);
      myservo3.write(90);
      delay(500);
      myservo1.write(120);
      myservo3.write(180);
      delay(300);
      myservo3.write(90);  
    }// move servo
    if(pos==180){        
      myservo3.write(180);
      delay(300);             
      myservo1.write(180);
      delay(300);
      myservo3.write(90);
      delay(500);
      myservo1.write(120);
      myservo3.write(180);
      delay(500);
      myservo3.write(90); 
    }
    Serial.print("Servo in position: ");  
    Serial.println(inByte);
    }
}
