const int ledpin=2;
const int btnpin=4;
int btnstate=0; 
void setup() {
 // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(btnpin,INPUT);
}
void loop() {
btnstate=digitalRead(btnpin);
if(btnstate==HIGH)
{
digitalWrite(ledpin,HIGH);
Serial.println("LED ON");
 }
 else
 {
digitalWrite(ledpin,LOW);
Serial.println("LED OFF");
 }
 // put your main code here, to run repeatedly
}
