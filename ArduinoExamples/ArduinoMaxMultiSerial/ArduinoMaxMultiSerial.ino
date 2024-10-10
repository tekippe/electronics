int pot1 = 0;
int pot2 = 0;
int pot3 = 0;
int switch1 = 0;
int inByte = 0;
const int BUTTON = 2;
const int LEDPIN = 13;
const int PIEZOPIN = 9;

void setup() {
  // start serial port at 9600 bps and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }
  pinMode(BUTTON, INPUT);
  pinMode(LEDPIN, OUTPUT);
  establishContact();

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    inByte = Serial.read();
    pot1 = analogRead(A0);
    pot2 = analogRead(A1);
    pot3 = analogRead(A2);
    switch1 = digitalRead(BUTTON);

    Serial.print(pot1);
    Serial.print(",");
    Serial.print(pot2);
    Serial.print(",");
    Serial.print(pot3);
    Serial.print(",");
    Serial.println(switch1);
  }

void establishContact() {
  while (Serial.available() <= 0) {
    Serial.println("0,0,0,0");  // send an initial string
    delay(300);
  }
}



}
