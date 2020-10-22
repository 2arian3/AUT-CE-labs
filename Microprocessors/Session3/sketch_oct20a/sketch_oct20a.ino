#include <LiquidCrystal.h>
#include <Keypad.h>

const byte ROWS = 4; // Four rows
const byte COLS = 4; // Three columns
char keys[ROWS][COLS] = {
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'C','0','=','+'}
};
byte rowPins[ROWS] = { 0, 1, 2, 3 };
byte colPins[COLS] = { 4, 5, 6, 7 };

Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
long Num1, Num2, Num;
char key, operation;
boolean result = false, num1orNum2 = false, error = false;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Basic Calculator");
  delay(1000);
  lcd.clear(); 
}

void loop() {
  key = kpd.getKey();
  if (key != NO_KEY)
    DetectButtons();
    
  if (result == true)
    Calculate();
    
  DisplayResult();  
}
void Calculate()
{
  if (operation=='+')
    Num = Num1+Num2;
 
  if (operation=='-')
    Num = Num1-Num2;
 
  if (operation=='*')
    Num = Num1*Num2;
 
  if (operation=='/'){
    if (Num2 != 0)
      Num = Num1/Num2;
    else
      error = true;
  }
      
}
void DisplayResult()
{
  lcd.setCursor(0, 0);
  if (!error){
    if (!num1orNum2)
      {lcd.print(Num1); lcd.print(' '); lcd.print(Num2);}
    else 
      {lcd.print(Num1); lcd.print(operation); lcd.print(Num2);}
    lcd.setCursor(0, 1);
    if (result == true){
      lcd.print("= ");
      lcd.print(Num);
    }
  }else {
    lcd.clear();
    lcd.print("Invalid!");
    delay(1000);
    error = false;
  }
}
void DetectButtons()
{ 
    lcd.clear();
    if (key=='C') //If cancel Button is pressed
    {Num=Num1=Num2=0; result=false; num1orNum2 = false;}
    
     if (key == '1') {
      if (Num==0)
        Num=1;
      else
        Num = (Num*10) + 1; //Pressed twice
    }
    
     if (key == '4')
    {
      if (Num==0)
        Num=4;
      else
        Num = (Num*10) + 4; //Pressed twice
    }
    
     if (key == '7')
    {
      if (Num==0)
        Num=7;
      else
        Num = (Num*10) + 7; //Pressed twice
    } 
  
 
    if (key == '0')
    { 
      if (Num==0)
        Num=0;
      else
        Num = (Num*10) + 0; //Pressed twice
    }
    
     if (key == '2')
    {
      if (Num==0)
        Num=2;
      else
        Num = (Num*10) + 2; //Pressed twice
    }
    
     if (key == '5')
    {
      if (Num==0)
        Num=5;
      else
        Num = (Num*10) + 5; //Pressed twice
    }
    
     if (key == '8')
    {
      if (Num==0)
        Num=8;
      else
        Num = (Num*10) + 8; //Pressed twice
    }   
  
 
    if (key == '=')
      result = true;
    
     if (key == '3')
    {
      if (Num==0)
        Num=3;
      else
        Num = (Num*10) + 3; //Pressed twice
    }
    
     if (key == '6')
    {
      if (Num==0)
        Num=6;
      else
        Num = (Num*10) + 6; //Pressed twice
    }
    
     if (key == '9')
    {
      if (Num==0)
        Num=9;
      else
        Num = (Num*10) + 9; //Pressed twice
    }
    if(num1orNum2)
      Num2 = Num;
    else
      Num1 = Num;
 
      if (key == '+' || key == '-' || key == '/' || key == '*')
  {
    num1orNum2 = true;    
    Num =0;
    operation = key; 
    delay(100);
  }
}
