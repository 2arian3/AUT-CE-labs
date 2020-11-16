#include <Servo.h>
#include <LiquidCrystal.h>
#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 3;
const int closeButton = 13, changePassButton = 10, changeTimerButton = 8;
const int rs = 4, en = 5, d4 = 3, d5 = 2, d6 = 1, d7 = 0;
const int buzzerPin = 19, redBulb = 21, greenBulb = 20, servoPin = 6;
String input = "", password = "12345";
char key;
bool opened = false, shouldBeOpened = false, shouldBeClosed = false;
unsigned int openedFrom;
int mode = 0, maxTime = 20000;

char keys[ROWS][COLS] = {
 {'1','2','3'},
 {'4','5','6'},
 {'7','8','9'},
 {'*','0','#'}
};
byte rowPins[ROWS] = { A7, A3, A2, A1 };
byte colPins[COLS] = { A6, A5, A4};
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
Servo servo;

void setup() {
  pinMode(closeButton, INPUT);
  pinMode(changePassButton, INPUT);
  pinMode(changeTimerButton, INPUT);
  pinMode(redBulb, OUTPUT);
  pinMode(greenBulb, OUTPUT);
  lcd.begin(16, 2);
  lcd.print(input);
  servo.attach(servoPin, 1000, 2000);
  servo.write(0); 
}

void loop() {
   key = kpd.getKey();
   if (key != NO_KEY)
      DetectButton();
   if(shouldBeOpened){
      lcd.clear();
      lcd.print("OPENED...");
      opened = true;
      shouldBeOpened = false;
      openedFrom = millis();
      tone(buzzerPin, 500, 100);
      servo.write(180);
      digitalWrite(greenBulb, HIGH);
      digitalWrite(redBulb, LOW);
   }else if(opened && (shouldBeClosed || (millis()-openedFrom >= maxTime))){
      lcd.clear();
      lcd.print("CLOSED...");
      lcd.setCursor(0, 1);
      lcd.print("Time:"+String(millis()-openedFrom));
      lcd.setCursor(0, 0);
      opened = false;
      shouldBeClosed = false;
      tone(buzzerPin, 500, 100);
      servo.write(0);
      digitalWrite(greenBulb, LOW);
      digitalWrite(redBulb, HIGH);
   }
   if(opened && (digitalRead(closeButton) == HIGH))
      shouldBeClosed = true;
   if(opened && (digitalRead(changePassButton) == HIGH)){
      mode = 1;
      input = "";
   }
   if(opened && (digitalRead(changeTimerButton) == HIGH)){
      mode = 2;
      input = "";
   }
}
bool CheckPassword(){
  String temp = input;
  input = "";
  return temp == password;
}
void DetectButton(){
   lcd.clear();
   if ( key >= '0' && key <= '9' ){
      input += key;
      lcd.print(input);
   }
   else if ( key == '*' ){
      if(mode == 0){
        shouldBeOpened = CheckPassword();
        lcd.clear();
        if(shouldBeOpened)
          lcd.print("Correct");
        else
          lcd.print("Incorrect");
        delay(500);
        lcd.setCursor(0, 0);
      }else if(mode == 1){
        lcd.setCursor(0, 1);
        password = input;
        lcd.print("Set new pass");
        lcd.setCursor(0, 0);
        input = "";
        mode = 0;
      }else if(mode == 2){
        lcd.setCursor(0, 1);
        maxTime = input.toInt();
        lcd.print("Set new timer");
        lcd.setCursor(0, 0);
        input = "";
        mode = 0;
      }  
 }
}
