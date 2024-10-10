int pot1 = 0;
int pot2 = 0;
int pot3 = 0;
int switch1 = 0;
const int BUTTON = 2;
const int LEDPIN = 13;
const int PIEZOPIN = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON, INPUT);
  pinMode(LEDPIN, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    inByte = Serial.read();
    pot1 = analogRead(A0);
    pot1 = analogRead(A1);
    pot1 = analogRead(A2);
    switch1 = digitalRead(BUTTON);

    Serial.print(pot1);
    Serial.print(",");
    Serial.print(pot2);
    Serial.print(",");
    Serial.print(pot3);
    Serial.print(",");
  }




}
