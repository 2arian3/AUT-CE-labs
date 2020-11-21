#include <Servo.h>
#include <LiquidCrystal.h>
#include <Keypad.h>
#include <MenuBackend.h>
#include <Bounce2.h>

int pressedButton = 0;
String numberOfProducts = "";
bool wantToSubmit = false, pay = false;
char key = ' ';

Bounce esc = Bounce ();
Bounce enter = Bounce ();
Bounce left = Bounce ();
Bounce right = Bounce ();

const byte ROWS = 4;
const byte COLS = 3;
const int rightKey = 23, leftKey = 22, enterKey = 24, escKey = 25;

char keys[ROWS][COLS] = {
 {'1','2','3'},
 {'4','5','6'},
 {'7','8','9'},
 {'*','0','#'}
};

byte rowPins[ROWS] = { A11, A10, A9, A8 };
byte colPins[COLS] = { A12, A13, A14};

Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); 
LiquidCrystal lcd(12, 13, 11, 10, 9, 8);
Servo servos[12];

int getPrice(String product){
    if(product == "Coffee")return 5;
    if(product == "Tea")return 2;
    if(product == "Mocha")return 5;
    if(product == "Orange Juice")return 4;
    if(product == "Apple Juice")return 4;
    if(product == "Cherry Juice")return 4;
    if(product == "Hotdog")return 10;
    if(product == "Burger")return 12;
    if(product == "Cheeseburger")return 15;
    if(product == "Olivier Salad")return 8;
    if(product == "Chick Ham")return 10;
    if(product == "Meat Ham")return 10;
    return 0;
}

int getPin(String product){
    if(product == "Coffee")return 3;
    if(product == "Tea")return 2;
    if(product == "Mocha")return 1;
    if(product == "Orange Juice")return 0;
    if(product == "Apple Juice")return 7;
    if(product == "Cherry Juice")return 6;
    if(product == "Hotdog")return 5;
    if(product == "Burger")return 4;
    if(product == "Cheeseburger")return 11;
    if(product == "Olivier Salad")return 10;
    if(product == "Chick Ham")return 9;
    if(product == "Meat Ham")return 8;
}

void menuUseEvent (MenuUseEvent used){
    lcd.clear();
    lcd.home();
    lcd.print(used.item.getName());
    if (getPrice(used.item.getName())) {
        lcd.setCursor(14, 0);
        if(!pay)
            lcd.print(getPrice(used.item.getName()));
        if(wantToSubmit && !pay){
            numberOfProducts = "";
            lcd.setCursor(0, 1);
            lcd.print("Amount:");
        }else if(pay){
            lcd.setCursor(0, 1);
            lcd.print("Total:"+String(numberOfProducts.toInt() * getPrice(used.item.getName())));
            HandleServos();
            pay = false;
            numberOfProducts = "";
        }
    }
}

void menuChangeEvent (MenuChangeEvent changed){
    lcd.clear();
    lcd.home();
    MenuItem newMenuItem = changed.to;
    lcd.print(newMenuItem.getName());
    if (getPrice(newMenuItem.getName())) {
        lcd.setCursor(14, 0);
        lcd.print(getPrice(newMenuItem.getName()));
    }
}

MenuBackend menu = MenuBackend (menuUseEvent, menuChangeEvent);
MenuItem drink = MenuItem ("Drink");
     MenuItem hotDrink = MenuItem ("Hot");
          MenuItem coffee = MenuItem ("Coffee");
          MenuItem tea = MenuItem ("Tea");
          MenuItem mocha = MenuItem ("Mocha");
     MenuItem coldDrink = MenuItem ("Cold");
          MenuItem orange = MenuItem ("Orange Juice");
          MenuItem apple = MenuItem ("Apple Juice");
          MenuItem cherry = MenuItem ("Cherry Juice");
MenuItem sandwich = MenuItem ("Sandwich");
     MenuItem hotSandwich = MenuItem ("Hot");
          MenuItem hotdog = MenuItem ("Hotdog");
          MenuItem burger = MenuItem ("Burger");
          MenuItem cheeseburger = MenuItem ("Cheeseburger");
     MenuItem coldSandwich = MenuItem ("Cold");
          MenuItem olivier = MenuItem ("Olivier Salad");
          MenuItem chick = MenuItem ("Chick Ham");
          MenuItem meat = MenuItem ("Meat Ham");
        

void setup() {
    lcd.begin(16, 2);

    pinMode(leftKey, INPUT);
    pinMode(rightKey, INPUT);
    pinMode(enterKey, INPUT);
    pinMode(escKey, INPUT);

    esc.attach (escKey);
    enter.attach (enterKey);
    right.attach (rightKey);
    left.attach (leftKey);
    esc.interval (50);
    enter.interval (50);
    right.interval (50);
    left.interval (50);
    
    menu.getRoot().add (drink);
    drink.addRight (sandwich);
    drink.add (hotDrink).addRight (coldDrink);
    hotDrink.add(coffee).addRight(tea).addRight(mocha);
    coldDrink.add(orange).addRight(apple).addRight(cherry);
    sandwich.add (coldSandwich).addRight (hotSandwich);
    hotSandwich.add(hotdog).addRight(burger).addRight(cheeseburger);
    coldSandwich.add(olivier).addRight(chick).addRight(meat);
    menu.toRoot ();

    for(int i = 0; i < 12; i++){
        if(i <= 3)
          servos[i].attach(3-i, 1000, 2000);
        else
          servos[i].attach(10+i, 1000, 2000);
        servos[i].write(0);
    }
    
}

void loop() {

    key = kpd.getKey();
    if(wantToSubmit && key != NO_KEY && key != '*' && key != '#'){
        numberOfProducts += key;
        lcd.clear();
        lcd.home();
        lcd.print(menu.getCurrent().getName());
        lcd.setCursor(14, 0);
        lcd.print(getPrice(menu.getCurrent().getName()));
        lcd.setCursor(0, 1);
        lcd.print("Amount:"+String(numberOfProducts.toInt()));
    }
    buttonEvent();
    changeMenu();
}

void buttonEvent (){
    enter.update ();
    right.update ();
    left.update ();
    esc.update ();
    pressedButton = 0;
    if (left.fell ())
        pressedButton = leftKey;
    else if (right.fell ())
        pressedButton = rightKey;
    else if (enter.fell ())
        pressedButton = enterKey;
    else if (esc.fell ())
        pressedButton = escKey;
}

void changeMenu () {
    MenuItem currentMenu = menu.getCurrent();
    if (pressedButton == leftKey){
        menu.moveLeft();
    }else if (pressedButton == rightKey) {
        menu.moveRight();
    }else if (pressedButton == escKey) {
        wantToSubmit = false;
        pay = false;
        menu.toRoot();
    }else if (pressedButton == enterKey) {
        if(!(currentMenu.moveDown ())){
            if(wantToSubmit){
               pay = true;
            }
            wantToSubmit = !pay;
            menu.use();
        }
        else {
            menu.moveDown();
        }
    }
    pressedButton = 0;
}

void HandleServos(){
    for(int i = 0; i < numberOfProducts.toInt(); i++){
      int openTime = millis();
      servos[getPin(menu.getCurrent().getName())].write(180);
      while(millis() - openTime <= 1000);
      servos[getPin(menu.getCurrent().getName())].write(0);
      if( i != numberOfProducts.toInt() - 1)
        while(millis() - openTime <= 2000);
    }
}
 
