const int pinLED = 8;
void setup(){
  pinMode(pinLED, OUTPUT);
  //pinMode(pinLED, INPUT); This is for input with no internal pull up resistors
  //pinMode(pinLED, INPUT_PULLUP); This is for input with internal pull up risistors
  
  digitalWrite(pinLED, LOW); //Start low or off for LED
}
void loop(){
  digitalWrite(pinLED, HIGH);
  delay(500);
  digitalWrite(pinLED, LOW);
  delay(500);
}
