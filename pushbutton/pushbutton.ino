int redPin = 13;
int sleep = 750;
int buttonPin = 2;
int buttonState;

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.print("Current State is: ");
  Serial.println(buttonState);
  if (buttonState == HIGH) {
    digitalWrite(redPin,HIGH);
  }
  else {
    digitalWrite(redPin,LOW);
  }
}
