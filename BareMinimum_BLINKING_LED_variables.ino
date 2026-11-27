int blueLED=5;
float pi=3.14;
int dit=50;
int dot=150;
int LongW=1000;

String myName="D V SRIVANI"

void setup() {
  // put your setup code here, to run once:
  pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blueLED,HIGH);
  delay(dit);
  digitalWrite(blueLED,LOW);
  delay(dit);

  digitalWrite(blueLED,HIGH);
  delay(dit);
  digitalWrite(blueLED,LOW);
  delay(dit);

  digitalWrite(blueLED,HIGH);
  delay(dit);
  digitalWrite(blueLED,LOW);
  delay(dit);


  digitalWrite(blueLED,HIGH);
  delay(dot);
  digitalWrite(blueLED,LOW);
  delay(dot);

  digitalWrite(blueLED,HIGH);
  delay(dot);
  digitalWrite(blueLED,LOW);
  delay(dot);

  digitalWrite(blueLED,HIGH);
  delay(dot);
  digitalWrite(blueLED,LOW);
  delay(dot);


  digitalWrite(blueLED,HIGH);
  delay(dit);
  digitalWrite(blueLED,LOW);
  delay(dit);

  digitalWrite(blueLED,HIGH);
  delay(dit);
  digitalWrite(blueLED,LOW);
  delay(dit);

  digitalWrite(blueLED,HIGH);
  delay(dit);
  digitalWrite(blueLED,LOW);
  delay(dit);

  delay(LongW);
}
