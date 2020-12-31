#include "pitches.h"
#include "ode_to_joy.h"
//#include "jingle_bells.h"

#define buttonPin 10
#define speakerPin 8

float mapFloat(long value, long fromLow, long fromHigh, long toLow, long toHigh){
 return (float)(value - fromLow) * (toHigh - toLow) / (float)(fromHigh - fromLow) + toLow;
}

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(buttonPin) == LOW){
      for (int currentNote = 0; currentNote < sizeof(melody)/sizeof(int); currentNote++) {
      float scale = mapFloat(analogRead(A15), 0, 1023, 0, 3);
      float playTime = 1000 / noteDurations[currentNote];
      tone(speakerPin, melody[currentNote] * scale);
      delay(playTime * 0.5);
      noTone(speakerPin);
    } 
  }
}
