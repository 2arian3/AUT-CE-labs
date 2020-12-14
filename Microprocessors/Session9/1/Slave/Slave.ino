//SLAVE

#include<SPI.h>

volatile bool flag1 = false;
bool flag2 = false;

String textReceive="";

void setup (void){
  Serial.begin(9600);
  pinMode(SS, INPUT_PULLUP);
  pinMode(MOSI, INPUT);
  pinMode(SCK, INPUT);
  SPCR |= _BV(SPE);
  SPI.attachInterrupt();
  Serial.println("i'm the slave and waiting for <Hello World!>");

}

ISR (SPI_STC_vect){ //Interrupt Service Routine
  char c = SPDR;
  if (c == '<')
    flag2 = true;
  else if(c == '>'){
    if (flag2){
      Serial.print("Master: ");
      Serial.println(textReceive);
      textReceive = "";
      flag2 = false;
    }
  }
  else{
    if (flag2)
      textReceive += c;
  }
}

void loop() {
}
