#include <SoftwareSerial.h>
#include <Servo.h>

int Btx =3;
int Brx =2;

SoftwareSerial bluetooth(Btx,Brx);
//
int Motor1A = 9;
int Motor1B = 10;

int Motor2A = 11;
int Motor2B = 12;





void setup() {
  bluetooth.begin(115200);
  bluetooth.begin(9600);
  pinMode(Motor1A,OUTPUT);
  pinMode(Motor1B,OUTPUT);
  pinMode(Motor2A,OUTPUT);
  pinMode(Motor2B,OUTPUT);

  digitalWrite(Motor1A,LOW);
  digitalWrite(Motor1B,LOW);
  digitalWrite(Motor2A,LOW);
  digitalWrite(Motor2B,LOW);
  

}
  int flag1 = -1;

void loop() {

  if(bluetooth.available()){
    char toSend = (char)bluetooth.read();
    if(toSend == 'S'){
      flag1 = 0;
        

      digitalWrite(Motor1A, LOW);
      analogWrite(Motor1B, LOW);
      digitalWrite(Motor2A, LOW);
      analogWrite(Motor2B, LOW);
      
    }
   if(toSend == 'F'){
    if(flag1!=1){
      flag1=1;
      digitalWrite(Motor1A, HIGH);
      analogWrite(Motor1B, 0);
      digitalWrite(Motor2A, HIGH);
      analogWrite(Motor2B, 0);
    }
   }
   if(toSend == 'B' ){
    if(flag1!=2){
      flag1=2;
      digitalWrite(Motor1B, HIGH);
      analogWrite(Motor1A, 0);
      digitalWrite(Motor2B, HIGH);
      analogWrite(Motor2A, 0);
    }
   }
   if(toSend == 'L' ){
    if(flag1!=3){
      flag1=3;
      digitalWrite(Motor2B, HIGH);
      analogWrite(Motor2A, 0);
      digitalWrite(Motor1A, HIGH);
      analogWrite(Motor1B, 0);
    }
   }
   else
   if(toSend == 'R' ){
    if(flag1!=4){
      flag1=4;
      digitalWrite(Motor1B, HIGH);
      analogWrite(Motor1A, 0);
      digitalWrite(Motor2A, HIGH);
      analogWrite(Motor2B, 0);
    }
    
   }
   
  }
}
