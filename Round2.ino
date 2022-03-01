#include <Servo.h>
Servo myservo1; //Right Servo
Servo myservo2; //Left Servo

void setup() {
  myservo1.attach(11);
  myservo2.attach(12);
}

void loop() {
  myservo1.writeMicroseconds(1000); //Challenge1&2
  myservo2.writeMicroseconds(2000); //foward
  delay(1000); 

  myservo1.writeMicroseconds(2000); //backwards
  myservo2.writeMicroseconds(1000);
  delay(1000);
  
  myservo1.writeMicroseconds(1470); //stop
  myservo2.writeMicroseconds(1470);
  delay(3000); 
 







 myservo1.writeMicroseconds(1050); //Challenge2
  myservo2.writeMicroseconds(2000); //foward
  delay(1000); 

  myservo1.writeMicroseconds(2000); //backwards
  myservo2.writeMicroseconds(1050);
  delay(1000);
  
  myservo1.writeMicroseconds(1470); //stop
  myservo2.writeMicroseconds(1470);
  delay(3000); 






 
  myservo1.writeMicroseconds(1000); //Challenge3
  myservo2.writeMicroseconds(2000); //foward
  delay(700); 

  myservo1.writeMicroseconds(1000); //left
  myservo2.writeMicroseconds(1000); 
  delay(400); 

  myservo1.writeMicroseconds(1000); //foward
  myservo2.writeMicroseconds(2000); 
  delay(500); 
  
  myservo1.writeMicroseconds(1000); //left
  myservo2.writeMicroseconds(1000); 
  delay(300); 
  
  myservo1.writeMicroseconds(1000); //foward
  myservo2.writeMicroseconds(2000); 
  delay(1000); 

  myservo1.writeMicroseconds(1470); //stop
  myservo2.writeMicroseconds(1470); 
  delay(5000); 







  myservo1.writeMicroseconds(1000); //Challenge4
  myservo2.writeMicroseconds(2000); //foward
  delay(1700); 

  myservo1.writeMicroseconds(1000); //left
  myservo2.writeMicroseconds(1000); 
  delay(300); 

  myservo1.writeMicroseconds(1000); //foward
  myservo2.writeMicroseconds(2000); 
  delay(700);

  myservo1.writeMicroseconds(1000); //left
  myservo2.writeMicroseconds(1000); 
  delay(300);

  myservo1.writeMicroseconds(1000); //foward
  myservo2.writeMicroseconds(2000); 
  delay(500);
  
  myservo1.writeMicroseconds(1470); //stop
  myservo2.writeMicroseconds(1470); 
  delay(7000);






  myservo1.writeMicroseconds(1000); //Challenge5
  myservo2.writeMicroseconds(2000); //foward
  delay(1700); 

  myservo1.writeMicroseconds(1000); //left
  myservo2.writeMicroseconds(1000); 
  delay(300); 

  myservo1.writeMicroseconds(1000); //foward
  myservo2.writeMicroseconds(2000); 
  delay(700);

  myservo1.writeMicroseconds(1000); //left
  myservo2.writeMicroseconds(1000); 
  delay(300);

  myservo1.writeMicroseconds(1000); //foward
  myservo2.writeMicroseconds(2000); 
  delay(1000);

  myservo1.writeMicroseconds(1000); //left
  myservo2.writeMicroseconds(1000); 
  delay(250);

  myservo1.writeMicroseconds(1000); //foward
  myservo2.writeMicroseconds(2000); 
  delay(1700);
  
  myservo1.writeMicroseconds(1470); //stop
  myservo2.writeMicroseconds(1470); 
  delay(7000); 
  
 






  myservo1.writeMicroseconds(1000); //Challenge6
  myservo2.writeMicroseconds(2000); //foward
  delay(2000); 

  myservo1.writeMicroseconds(1000); //left
  myservo2.writeMicroseconds(1000); 
  delay(300);
  
  myservo1.writeMicroseconds(1000); //foward
  myservo2.writeMicroseconds(2000); 
  delay(500);
  
  myservo1.writeMicroseconds(1000); //left
  myservo2.writeMicroseconds(1000); 
  delay(600);

  myservo1.writeMicroseconds(1000); //foward
  myservo2.writeMicroseconds(2000); 
  delay(2700);

  myservo1.writeMicroseconds(1470); //stop
  myservo2.writeMicroseconds(1470); 
  delay(1000);
}
