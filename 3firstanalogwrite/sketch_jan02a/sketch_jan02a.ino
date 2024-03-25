int redPin=9;
int bright1=5;
int bright3=255;
int bright2=100;
void setup() {
  // put your setup code here, to run once:
 pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin,bright1);
delay(3000);

analogWrite(redPin,bright2);
delay(3000);

analogWrite(redPin,bright3);
delay(3000);
}
