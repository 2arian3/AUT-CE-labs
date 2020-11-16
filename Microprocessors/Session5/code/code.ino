#include <Servo.h>
#include <LiquidCrystal.h>
#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 3;
const int rs = 4, en = 5, d4 = 3, d5 = 2, d6 = 1, d7 = 0;
const int buzzerPin = 19, redBulb = 21, greenBulb = 20, servoPin = 6;
int input = 0, password = 1234;
char key;
bool changed = false;

char keys[ROWS][COLS] = {
 {'7','8','9'},
 {'4','5','6'},
 {'1','2','3'},
 {'*','0','#'}
};
int rowPins[ROWS] = { A7, A3, A2, A1 };
int colPins[COLS] = { A6, A5, A4};
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); 

void setup() {
  lcd.begin(16, 2);
  lcd.print(input);
  servo.attach(servoPin, 1000, 2000);
  servo.write(input); 
}

void loop() {
   key = kpd.getKey();
   if (key != NO_KEY){
      DetectButton();
      lcd.print(input);
   }
   if (changed && input >= 0 && input <= 180) {
      changed = false;
      servo.write(input);
   }
}
void DetectButton(){
   lcd.clear();
   if ( key >= '0' && key <= '9' ){
      if (input == 0)
        input = key - '0';
      else
        input = (key - '0') + input * 10;
   changed = true;
 }else if ( key == '*' ){
   input = 0;
   changed = true;
 }
}
