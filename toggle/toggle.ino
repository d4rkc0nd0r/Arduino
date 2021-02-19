int LEDPin = 13;
int sleep = 100;
int buttonPin = 2;
int buttonState1 = 0;
int buttonState2;
int LEDState = 0;

void setup() {
  pinMode(LEDPin,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
  buttonState2 = digitalRead(buttonPin);
  if (buttonState1 == 0 && buttonState2 == 1) {
    if (LEDState == 0) {
      digitalWrite(LEDPin,HIGH);
      LEDState = 1;
    }
    else {
      digitalWrite(LEDPin,LOW);
      LEDState = 0;
    }
  }
  buttonState1 = buttonState2;
}
