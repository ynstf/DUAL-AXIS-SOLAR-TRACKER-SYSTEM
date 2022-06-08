#include<Servo.h>

Servo servo1;
Servo servo2;
int myservo1 = 90;
int myservo2 = 90;
int ldr1,ldr2,ldr3,ldr4;

void setup() {
  servo1.attach(10);
  servo1.write(myservo1);
  
  servo2.attach(11);
  servo2.write(myservo2); 
}

void loop() {
  // put your main code here, to run repeatedly:
  ldr1 = analogRead(A0);
  ldr2 = analogRead(A1);

  if (ldr1>ldr2){
    if(myservo1<=180 && myservo1 >=1){
      myservo1 = myservo1 - 2;
      delay(30);
      servo1.write(myservo1);
    }
  }
  
  if (ldr1<ldr2){
    if (myservo1>=0 && myservo1 <180){
      myservo1 = myservo1 + 2;
      delay(30);
      servo1.write(myservo1);
    }


  ldr3 = analogRead(A4);
  ldr4 = analogRead(A5);

  if (ldr3>ldr4){
    if (myservo2<=180 && myservo2 >=1){
      myservo2 = myservo2 -2;
      delay(30);
      servo2.write(myservo2);
    }
  }

  if (ldr3<ldr4){
    if (myservo2>=0 && myservo2 <180){
      myservo2 = myservo2 +2;
      delay(30);
      servo2.write(myservo2);
    }
  }
  
  }
}
