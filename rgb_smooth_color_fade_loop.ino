//Fade RGB LEDs

int redPin = 9;       // red LED connected to digital pin 9 PWM
int greenPin = 10;    // red LED connected to digital pin 10 PWM
int bluePin = 11;     // red LED connected to digital pin 11 PWM
int adjustPin = 0;    // speed adjust pin a0
int rateChange = 1;   //rate of change
int minVal = 0;       //minnimum value for brightness 0 to 255
int maxVal = 255;     //maximum value for brightness 0 to 255

void setup()  {
  //reset all color to value to start positions
  analogWrite(redPin, minVal); //red off
  analogWrite(greenPin, maxVal); //green on
  analogWrite(bluePin, minVal); //blue off
}
void loop()  {
  
  //(1) green
  delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));
  
  //fade in red
  for(int fadeVal = minVal; fadeVal <= maxVal; fadeVal += rateChange) { 
    analogWrite(redPin, fadeVal);
    delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));
  }
  
  //(2) yellow
  delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));
  
  //fade out green
  for(int fadeVal = maxVal; fadeVal >= minVal; fadeVal -= rateChange) { 
    analogWrite(greenPin, fadeVal);
    delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));                       
  }
  
  //(3) red
  delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));
  
  //fade in blue
  for(int fadeVal = minVal; fadeVal <= maxVal; fadeVal += rateChange) { 
    analogWrite(bluePin, fadeVal);
    delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));                         
  }
  
  //(4) purple
  delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));
 
  //fade out red
  for(int fadeVal = maxVal; fadeVal >= minVal; fadeVal -= rateChange) { 
    analogWrite(redPin, fadeVal);
    delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));                       
  }
  
  //(5) blue
  delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));
  
  //fade in green
  for(int fadeVal = minVal; fadeVal <= maxVal; fadeVal += rateChange) { 
    analogWrite(greenPin, fadeVal);
    delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));                           
  }
  
  //(6) cyan
  delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));
  
  //fade out blue
  for(int fadeVal = maxVal; fadeVal >= minVal; fadeVal -= rateChange) { 
    analogWrite(bluePin, fadeVal);
    delay(235 - map(analogRead(adjustPin), 0, 1024, 0, 235));                           
  }
  
}
