#include <LiquidCrystal.h>
#include <Keypad.h>
#include <Wire.h>

# define ADDRESS 0b1010000

# define RS_PIN 13
# define EN_PIN 12
# define D4_PIN 11
# define D5_PIN 10
# define D6_PIN 9
# define D7_PIN 8

# define led1 7
# define led2 6
# define led3 5
# define led4 4

int mode = 1;
int mode_time1 = 2;
int mode_time2 = 2;
int mode_time3 = 2;
int mode_time4 = 2;
int startingTime;
// 1 means pre washing
// 2 means washing
// 3 means post washing
// 4 means drying

char keys[4][3] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

byte pin_rows[4] = {25, 26, 27, 28}; //connect to the row pinouts of the keypad
byte pin_columns[3] = {24, 23, 22}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys), pin_rows, pin_columns, 4, 3);
LiquidCrystal lcd(RS_PIN, EN_PIN, D4_PIN, D5_PIN, D6_PIN, D7_PIN);

byte readI2C(byte deviceAddress, byte dataAddress){
  Wire.beginTransmission(ADDRESS); 
  Wire.write(deviceAddress);
  Wire.write(dataAddress);
  Wire.endTransmission();
  Wire.requestFrom(ADDRESS, 1);
  if(Wire.available())
    return Wire.read();
  else
    return 0xFF;
}
void writeI2C(byte deviceAddress, byte dataAddress, byte data){
  Wire.beginTransmission(ADDRESS); 
  Wire.write(deviceAddress);
  Wire.write(dataAddress);
  Wire.write(data);
  Wire.endTransmission();
  delay(10);
}

void setup() {
 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
 
  lcd.begin(16, 2);
  Wire.begin();
  writeI2C(0x00, 0x00, mode);
}

void loop(){
  mode = readI2C(0x00, 0x00);
  lcd.clear();
  lcd.home();
  lcd.print("Default mode:");
  lcd.print(mode);
  delay(500);
  lcd.clear();
  lcd.print("Press * to start");
  lcd.setCursor(0, 1);
  lcd.print("Press # for time");
  char inputKey = keypad.waitForKey();
  if (inputKey == '#'){
    // user wants to change the timer
    lcd.clear();
    lcd.home();
    lcd.print("enter new timer:");
    lcd.setCursor(0, 1);
    String newTime = "";
    char input = keypad.waitForKey();
    while(input != '*' && input != '#'){
      newTime += input;
      lcd.clear();
      lcd.home();
      lcd.print("enter new timer:");
      lcd.setCursor(0, 1);
      lcd.print(newTime);
      input = keypad.waitForKey();
    }
    int mode_time = newTime.toInt();
    delay(500);
    lcd.clear();
    lcd.home();
    lcd.print("which mode?");
    input = keypad.waitForKey();
    if (input == '1')
        mode_time1 = mode_time;
    else if (input == '2')
        mode_time2 = mode_time;
    else if (input == '3')
        mode_time3 = mode_time;
    else if (input == '4')
        mode_time4 = mode_time;
    lcd.clear();
    lcd.print("Mode " + String(input) + " time");
    lcd.setCursor(0, 1);
    lcd.print("changed.");
    delay(1000);
  }
  else if(inputKey == '*'){
    //user wants to run the washing machine
    bool exitFlag = false;
    lcd.clear();
    lcd.home();
    lcd.print("* : continue");
    lcd.setCursor(0, 1);
    lcd.print("# : change def");
    char nextKey = keypad.waitForKey();
    if (nextKey == '*'){
      lcd.clear();
      lcd.home();
      lcd.print("Current mode:" + String(mode));
      delay(200);
      while(true){
        if (mode == 1){
          digitalWrite(led1, HIGH);
          startingTime = millis() / 1000;
          while(true){
              lcd.clear();
              lcd.home();
              lcd.print("mode 1 running");
              char exitKey = keypad.getKey();
              if (exitKey == '*'){
                lcd.clear();
                lcd.home();
                lcd.print("Exiting");
                exitFlag = true;
                delay(200);
                digitalWrite(led1, LOW);
                break;
              }
              lcd.setCursor(0, 1);
              int toPrint = mode_time1 - (millis()/1000 - startingTime);
              if (toPrint >= 0)
                lcd.print("Remaining:" + String(toPrint));
              else{
                  mode++;
                  digitalWrite(led1, LOW);
                  break;
              }
              delay(200);
          }
        }
        else if (mode == 2){
          digitalWrite(led2, HIGH);
          startingTime = millis() / 1000;
          while(true){
              lcd.clear();
              lcd.home();
              lcd.print("mode 2 running");
              char exitKey = keypad.getKey();
              if (exitKey == '*'){
                lcd.clear();
                lcd.home();
                lcd.print("Exiting");
                exitFlag = true;
                delay(200);
                digitalWrite(led2, LOW);
                break;
              }
              lcd.setCursor(0, 1);
              int toPrint = mode_time2 - (millis()/1000 - startingTime);
              if (toPrint >= 0)
                lcd.print("Remaining:" + String(toPrint));
              else{
                  mode++;
                  digitalWrite(led2, LOW);
                  break;
              }
              delay(200);
           }
          }
        else if (mode == 3){
          digitalWrite(led3, HIGH);
          startingTime = millis() / 1000;
          while(true){
              lcd.clear();
              lcd.home();
              lcd.print("mode 3 running");
              char exitKey = keypad.getKey();
              if (exitKey == '*'){
                lcd.clear();
                lcd.setCursor(0, 0);
                lcd.print("Exiting");
                exitFlag = true;
                delay(200);
                digitalWrite(led3, LOW);
                break;
              }
              lcd.setCursor(0, 1);
              int toPrint = mode_time3 - (millis()/1000 - startingTime);
              if (toPrint >= 0)
                lcd.print("Remaining:" + String(toPrint));
              else{
                  mode++;
                  digitalWrite(led3, LOW);
                  break;
              }
              delay(200);
           }
          }
        else if (mode == 4){
          digitalWrite(led4, HIGH);
          startingTime = millis() / 1000;
          while(true){
              lcd.clear();
              lcd.home();
              lcd.print("mode 4 running");  
              char exitKey = keypad.getKey();
              if (exitKey == '*'){
                lcd.clear();
                lcd.home();
                lcd.print("Exiting");
                delay(200);
                exitFlag = true;
                digitalWrite(led4, LOW);
                break;
              }
              lcd.setCursor(0, 1);
              int toPrint = mode_time4 - (millis()/1000 - startingTime);
              if (toPrint >= 0)
                lcd.print("Remaining:" + String(toPrint));
              else{
                  mode++;
                  digitalWrite(led1, HIGH);
                  digitalWrite(led2, HIGH);
                  digitalWrite(led3, HIGH);
                  digitalWrite(led4, HIGH);
                  lcd.clear();
                  lcd.home();
                  lcd.print("Finished washing");
                  delay(500);
                  digitalWrite(led1, LOW);
                  digitalWrite(led2, LOW);
                  digitalWrite(led3, LOW);
                  digitalWrite(led4, LOW);
                  break;
              }
              delay(200);
            }
          }
        if (exitFlag || mode > 4)
            break;
      }
    }
    else if (nextKey == '#'){
        //user wants to change default mode
        lcd.clear();
        lcd.home();
        lcd.print("Enter def mode:");
        char newMode = keypad.waitForKey();
        lcd.setCursor(0, 1);
        lcd.print(newMode - '0');
        
        //writing
        writeI2C(0x00, 0x00, newMode - '0');
        lcd.clear();            
        lcd.home();
        lcd.print("Savaing done!");
        delay(2000);
    }
    else{
        lcd.clear();            
        lcd.home();
        lcd.print("Invalid input");
        delay(2000);      
    }
  }
  else{
    lcd.clear();            
    lcd.home();
    lcd.print("Invalid input");
    delay(2000);
  }
}
