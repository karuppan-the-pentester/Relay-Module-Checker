int a = 12;
int b = 11;
int c = 10;
int d = 9;

void setup(){

pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);

}

void loop(){
digitalWrite(a, LOW);
delay(1000);
digitalWrite(b, LOW);
delay(1000);
digitalWrite(c, LOW);
delay(1000);
digitalWrite(d, LOW);
delay(1000);
digitalWrite(a, HIGH);
delay(1000);
digitalWrite(b, HIGH);
delay(1000);
digitalWrite(c, HIGH);
delay(1000);
digitalWrite(d, HIGH);
delay(1000);
}
