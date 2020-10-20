/*
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
*/

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
 
  lcd.begin(16, 2);
  lcd.print("Arian Boukani");
}

void loop() {
  int signal8 = digitalRead(8);
  int signal9 = digitalRead(9);
  int signal10 = digitalRead(10);
  if ( signal8 == 1 ) {
    lcd.scrollDisplayLeft();
    delay(500);
  }else if ( signal9 == 1 ){
    lcd.scrollDisplayRight();
    delay(500); 
  }else if ( signal10 == 1 ) {
    lcd.clear();
  }
  
}
