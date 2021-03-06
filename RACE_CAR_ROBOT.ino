#include <SoftwareSerial.h>
SoftwareSerial bluetooth(A1,A0); //(RX,TX)
char data;
//DC motor 1
int PWM1 = 11;
int IN1 = 12;
int IN2 = 13;
//DC motor 2
int PWM2 = 10;
int IN3 = 2;
int IN4 = 4;
//DC motor 3
int PWM3 = 9;
int IN5 = 7;
int IN6 = 8;
//DC motor 4
int PWM4 = 3;
int IN7 = 5;
int IN8 = 6;
void setup() {
 bluetooth.begin(9600);
 //DC MOTORS PINS
 //DC MOTOR 1
 pinMode(PWM1,OUTPUT);
 pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);
 //DC MOTOR 2
 pinMode(PWM2,OUTPUT);
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);
 //DC MOTOR 3
 pinMode(PWM3,OUTPUT);
 pinMode(IN5,OUTPUT);
 pinMode(IN6,OUTPUT);
 //DC MOTOR 2
 pinMode(PWM4,OUTPUT);
 pinMode(IN7,OUTPUT);
 pinMode(IN8,OUTPUT); 
 //DC MOTORS SPEED
 analogWrite(PWM1,190);
 analogWrite(PWM2,190);
 analogWrite(PWM3,190);
 analogWrite(PWM4,190);
}

void loop() {
  if(bluetooth.available()){
  data = bluetooth.read();
  if( data == 'F'){
    // FORWARD STATE
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);
  digitalWrite(IN7,HIGH);
  digitalWrite(IN8,LOW);
    }
    if(data == 'B'){
      // BACKWARD STATE
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,HIGH);
  digitalWrite(IN7,LOW);
  digitalWrite(IN8,HIGH);
      }
      if(data == 'R'){
        // RIGHT STATE
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,HIGH);
  digitalWrite(IN7,HIGH);
  digitalWrite(IN8,LOW);
      }
      if(data == 'L'){
        // LEFT STATE
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);
  digitalWrite(IN7,LOW);
  digitalWrite(IN8,HIGH);
        }
      if(data == 'S'){
        // STOP STATE
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);
  digitalWrite(IN7,LOW);
  digitalWrite(IN8,LOW);
        }
     /* if(data == '1'){
  //DC motors speed
  analogWrite(PWM1,25.5);
  analogWrite(PWM2,25.5);
        }  
        if(data == '2'){
  // motors speed
  analogWrite(PWM1,51);
  analogWrite(PWM2,51);
        } 
        if(data == '3'){
  // motors speed
  analogWrite(PWM1,76.5);
  analogWrite(PWM2,76.5);
        }  
        if(data == '4'){
  // motors speed
  analogWrite(PWM1,102);
  analogWrite(PWM2,102);
        }  
        if(data == '5'){
  // motors speed
  analogWrite(PWM1,127.5);
  analogWrite(PWM2,127.5);
        }
        if(data == '6'){
  // motors speed
  analogWrite(PWM1,153);
  analogWrite(PWM2,153);
        } 
        if(data == '7'){
  // motors speed
  analogWrite(PWM1,178.5);
  analogWrite(PWM2,178.5);
        } 
        if(data == '8'){
  // motors speed
  analogWrite(PWM1,204);
  analogWrite(PWM2,204);
        } 
        if(data == '9'){
  // motors speed
  analogWrite(PWM1,229.5);
  analogWrite(PWM2,229.5);
        } 
        if(data == 'q'){
  // motors speed
  analogWrite(PWM1,255);
  analogWrite(PWM2,255);
        }*/
               
  }
}
