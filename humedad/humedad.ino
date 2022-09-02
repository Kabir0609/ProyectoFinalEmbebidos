int sensorh=A0;
int bomba = 7;
void setup() {
  Serial.begin(9600);
  pinMode(bomba,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int humedad = analogRead(sensorh);
  
  

  if(humedad>=721 && humedad<=1024){
    digitalWrite(bomba,HIGH);
  }
  else{
    digitalWrite(bomba,LOW);
  }
  Serial.println(humedad);
  delay(500);
  // put your main code here, to run repeatedly:

}
