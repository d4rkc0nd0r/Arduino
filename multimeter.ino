int pinNo = A3;
int readOutput;
float v;
int sleep = 750;

void setup() {
  pinMode(pinNo,INPUT);
  Serial.begin(9600);
}

void loop() {
  readOutput = analogRead(pinNo);
  v = (5. / 1023.) * readOutput;
  Serial.println(v);
  delay(sleep);
}
