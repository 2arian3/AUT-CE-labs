
// the setup function runs once when you press reset or power the board
void setup() {
  for( int i = 0; i < 7; i++ ){
    pinMode(i, OUTPUT);
  }
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int signal10 = digitalRead(10);
  int signal11 = digitalRead(11);
  int signal12 = digitalRead(12);
  if( signal12 == LOW ){
    for(int i = 0; i < 7; i++ ){
      digitalWrite(i, LOW);
    }
  }
  else if( signal10 == LOW){
    for( int i = 6; i >= 0; i--){
      digitalWrite(i, HIGH);
      delay(1000);
    }
  }
  else if( signal11 == LOW ){
    for(int i = 0; i < 7; i++ ){
      digitalWrite(i, HIGH);
      delay(1000);
    }
  }
}
