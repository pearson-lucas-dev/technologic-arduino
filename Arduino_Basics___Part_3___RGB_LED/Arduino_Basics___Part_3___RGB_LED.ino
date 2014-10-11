const int redPin = 8;
const int greenPin = 9;
const int bluePin = 10;
const int blinkDuration = 100;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  digitalWrite(redPin, HIGH); 
  digitalWrite(bluePin, HIGH); 
  digitalWrite(greenPin, HIGH);
}

void loop(){
 runPattern2();
 runPattern1();
}

void blinkLED(int ledPin, int duration){
  digitalWrite(ledPin, LOW);
  delay(duration);
  digitalWrite(ledPin, HIGH);
  delay(duration);
}

void blinkBlueLED(){
blinkLED(bluePin, blinkDuration);
}

void blinkRedLED(){
blinkLED(redPin, blinkDuration);
}

void blinkGreenLED(){
blinkLED(greenPin, blinkDuration);
}

void runPattern1(){
  blinkBlueLED();
  blinkGreenLED();
  blinkRedLED();
  blinkGreenLED();
}

void runPattern2(){
  blinkRedLED();
  blinkGreenLED();
  blinkBlueLED();
}
