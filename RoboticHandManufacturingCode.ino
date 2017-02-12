/* Robotic Hand Manufacturing Code
 by Tomas Kubaitis 
*/

#include <Servo.h>

Servo pin2; 
Servo pin3; 
Servo pin4; 
Servo pin5; 
Servo pin6; 


int pos = 0;   

void setup() {
  pin2.attach(2);
   pin3.attach(3);
    pin4.attach(4);
     pin5.attach(5);
      pin6.attach(6);  
}
void loop() {
pin4.write(20); 
pin3.write(0); 
pin6.write(0);
delay(1000);
for (pos = 0; pos <= 90; pos += 1) { 
    pin6.write(pos);             
    delay(15);                       
  }
for (pos = 0; pos <= 180; pos += 1) { 
    pin2.write(pos);             
    delay(15);                       
  }
   for (pos = 0; pos <= 130; pos += 1) { 
    pin3.write(pos);             
    delay(15);                       
  } 
  for (pos = 90; pos >= 70; pos -= 1) { 
    pin5.write(pos);              
    delay(20);  
  }
for (pos = 0; pos <= 170; pos += 1) { 
    pin4.write(pos);             
    delay(15);                       
  }
for (pos = 70; pos <= 76; pos += 1) { 
    pin5.write(pos);              
    delay(20);  
  } 
for (pos = 180; pos >= 100; pos -= 1) { 
    pin2.write(pos);              
    delay(10);  
  }
for (pos = 76; pos >= 30; pos -= 1) { 
    pin5.write(pos);              
    delay(20);  
  }
for (pos = 90; pos <= 180; pos += 1) { 
    pin6.write(pos);             
    delay(15);                       
  }
for (pos = 100; pos <= 170; pos += 1) { 
    pin2.write(pos);             
    delay(15);                       
  }
int a = 1;
while(a==1){
for (pos = 180; pos >= 90; pos -= 1) { 
    pin6.write(pos);             
    delay(15);                       
  }
for (pos = 30; pos <= 76; pos += 1) { 
    pin5.write(pos);              
    delay(20);  
  }
for (pos = 180; pos >= 100; pos -= 1) { 
    pin2.write(pos);              
    delay(10);  
  } 
for (pos = 76; pos >= 30; pos -= 1) { 
    pin5.write(pos);              
    delay(20);  
  }
for (pos = 90; pos <= 180; pos += 1) { 
    pin6.write(pos);             
    delay(15);                       
  }
for (pos = 100; pos <= 180; pos += 1) { 
    pin2.write(pos);             
    delay(15);                       
  }
}      
}
  
