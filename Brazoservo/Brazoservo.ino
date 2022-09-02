
#include <Servo.h>
#include <SoftwareSerial.h>
//Definicion de los servos
Servo servo1;
Servo servo2;
int eje1=90;
int eje2=90;
int sensor=8;

byte sensora =1;


int Btx =3;
int Brx =2;

SoftwareSerial bluetooth(Btx,Brx);
//
int Motor1A = 9;
int Motor1B = 10;

int Motor2A = 11;
int Motor2B = 12;
 int sensorh=A0;
int bomba = 7;
void setup(){ 
  pinMode(bomba,OUTPUT); 
  servo1.attach(5);
  servo2.attach(6);

//  servo1.write(90);
//  servo2.write(90);

  Serial.begin(9600);

//  bluetooth.begin(115200);
//  bluetooth.begin(9600);
//  pinMode(Motor1A,OUTPUT);
//  pinMode(Motor1B,OUTPUT);
//  pinMode(Motor2A,OUTPUT);
//  pinMode(Motor2B,OUTPUT);
//
//  digitalWrite(Motor1A,LOW);
//  digitalWrite(Motor1B,LOW);
//  digitalWrite(Motor2A,LOW);
//  digitalWrite(Motor2B,LOW);
}

int flag1 = -1;
   

void loop(){  
//  int humedad = analogRead(sensorh);
//  if(humedad>=721 && humedad<=1024){
//    digitalWrite(bomba,HIGH);
//  }
//  else{
//    digitalWrite(bomba,LOW);
//  }
//  Serial.println(humedad); 
//  delay(500);


//  if(bluetooth.available()){
//    char toSend = (char)bluetooth.read(); 
//    if(toSend == 'S'){
//      flag1 = 0;
//
//      digitalWrite(Motor1A, LOW);
//      analogWrite(Motor1B, LOW);
//      digitalWrite(Motor2A, LOW);
//      analogWrite(Motor2B, LOW);
//      
//    }
//   if(toSend == 'F'){
//    if(flag1!=1){
//      flag1=1;
//      digitalWrite(Motor1A, HIGH);
//      analogWrite(Motor1B, 0);  33333

//      digitalWrite(Motor2A, HIGH);
//      analogWrite(Motor2B, 0);
//    }
//   }
//   if(toSend == 'B' ){
//    if(flag1!=2){
//      flag1=2;
//      digitalWrite(Motor1B, HIGH);
//      analogWrite(Motor1A, 0);
//      digitalWrite(Motor2B, HIGH);
//      analogWrite(Motor2A, 0);
//    }
//   }
//   if(toSend == 'L' ){
//    if(flag1!=3){
//      flag1=3;
//      digitalWrite(Motor2B, HIGH);
//      analogWrite(Motor2A, 0);
//      digitalWrite(Motor1A, HIGH);
//      analogWrite(Motor1B, 0);
//    }
//   }
//   else
//   if(toSend == 'R' ){
//    if(flag1!=4){
//      flag1=4;
//      digitalWrite(Motor1B, HIGH);
//      analogWrite(Motor1A, 0);
//      digitalWrite(Motor2A, HIGH);
//      analogWrite(Motor2B, 0);
//    }
//    
//   }
//  }

  

  
  //SERVO 1
  if (analogRead(2)<200 && eje1<180){
    eje1++;
    servo1.write(eje1);
    delay(50);
  }
  if (analogRead(2)>700 && eje1>0){
    eje1--;
    servo1.write(eje1);
  }
  //SERVO 2
  if (analogRead(1)<200 && eje2<180){
    eje2++;
    servo2.write(eje2);
  }
  if (analogRead(1)>700 && eje2>0){
    eje2--;
    servo2.write(eje2);
  }
  delay(15);
 
}
