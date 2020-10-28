#include <Servo.h>
#include <LiquidCrystal.h>
#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 3; 
char keys[ROWS][COLS] = {
  {'7','8','9'},
  {'4','5','6'},
  {'1','2','3'},
  {'C','0','='}
};
Servo servo; 
byte rowPins[ROWS] = { 0, 1, 2, 3 };
byte colPins[COLS] = { 4, 5, 6}; 
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13, servoPin = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);  
char key;
int numToBeShown = 0;
bool changed = false;

void setup() {
  lcd.begin(16, 2);
  lcd.print(numToBeShown);
  servo.attach(servoPin, 1000, 2000);
  servo.write(numToBeShown);  
}
void DetectButton(){
  lcd.clear();
  if ( key >= '0' && key <= '9' ){
    if (numToBeShown == 0)
      numToBeShown = key - '0';
    else
      numToBeShown = (key - '0') + numToBeShown * 10;
    changed = true;
  }else if ( key == 'C' ){
    numToBeShown = 0;
    changed = true;
  }
}
void loop() {
  key = kpd.getKey();
  if (key != NO_KEY){
    DetectButton();
    lcd.print(numToBeShown);
  }
  if (changed && numToBeShown >= 0 && numToBeShown <= 180) {
    changed = false;
    servo.write(numToBeShown);
  }
}
