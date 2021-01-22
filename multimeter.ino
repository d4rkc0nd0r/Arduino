int pinNo = A3;
int readOutput;
float v;
int sleep = 750;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinNo,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readOutput = analogRead(pinNo);
  v = (5. / 1023.) * readOutput;
  Serial.println(v);
  delay(sleep);
}
