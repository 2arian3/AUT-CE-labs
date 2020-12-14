//MASTER

#include<SPI.h>

void setup(){
  pinMode(20, OUTPUT);//ss1
  pinMode(21, OUTPUT);//ss2
  
//  pinMode(A1, INPUT);//LM35
   
  Serial.begin(9600);
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV8);    //Sets clock for SPI communication at 8 (16/8=2Mhz)
  digitalWrite(20,LOW);//ss1
  digitalWrite(21,HIGH);//ss2
}

void loop(){

  int light = map(analogRead(A1), 0, 1023, 0, 99);
  int celc = map(analogRead(A0), 0, 1023, -40, 110);
  delay(100);
  
  String sendMsg = (String)celc;
  sendMsg = '<' + sendMsg + '>';
  int ans = light - 1;
  String sendMsg2 = (String)ans;
  sendMsg2 = '<' + sendMsg2 + '>';
  
  char mms[10];
  sendMsg.toCharArray(mms,10);
  Serial.print("Master: ");
  Serial.println(mms);
  delay(10);
  for(int i = 0; i < sizeof(mms); i++){
    SPI.transfer(mms[i]);
    delay(10);
  }
  digitalWrite(21,LOW);//ss2
  digitalWrite(20,HIGH);//ss1
  delay(200);
//  //=================
  sendMsg2.toCharArray(mms,10);
  Serial.print("Master: ");
  Serial.println(mms);
  for(int i = 0; i < sizeof(mms); i++){
    SPI.transfer(mms[i]);
    delay(10);
  }
  digitalWrite(20,LOW);//ss1
  digitalWrite(21,HIGH);//ss1
  delay(200);
//  //=================
}
