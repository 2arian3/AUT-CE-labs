//MASTER

#include<SPI.h>

char textSend[] = "<Hello World!>";

void setup(){
  pinMode(20, OUTPUT);
  Serial.begin(9600);
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV8);    //Sets clock for SPI communication at 8 (16/8=2Mhz)
  digitalWrite(20,LOW);
  delay(100);
}

void loop(){

  for(int i = 0; i < sizeof(textSend); i++){
    SPI.transfer(textSend[i]);
    delay(10);
  }
  Serial.print("Master: ");
  Serial.println(textSend);
}
