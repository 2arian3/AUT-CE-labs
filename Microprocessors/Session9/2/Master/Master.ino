//MASTER

#include<SPI.h>

char textSend1[] = "<Hello World!>";
char textSend2[] = "<Hi!>";



void setup(){
  pinMode(20, OUTPUT);//ss1
  pinMode(21, OUTPUT);//ss2
    
  Serial.begin(9600);
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV8);    //Sets clock for SPI communication at 8 (16/8=2Mhz)
  digitalWrite(20,LOW);//ss1
  digitalWrite(21,HIGH);//ss2
  delay(100);
}

void loop(){

  for(int i = 0; i < sizeof(textSend1); i++){
    SPI.transfer(textSend1[i]);
    delay(10);
  }
  Serial.print("Master: ");
  Serial.println(textSend1);
  digitalWrite(21,LOW);//ss2
  digitalWrite(20,HIGH);//ss1
  delay(100);
  //=================
  for(int i = 0; i < sizeof(textSend2); i++){
    SPI.transfer(textSend2[i]);
    delay(10);
  }
  Serial.print("Master: ");
  Serial.println(textSend2);
  digitalWrite(20,LOW);//ss1
  digitalWrite(21,HIGH);//ss1
  delay(100);
  //=================
}
