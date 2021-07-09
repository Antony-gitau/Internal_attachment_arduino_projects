int redled=13;
int greenled=12;
int blueled=11;
int dit=50;
int dah=200;
int longwait=100;


void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(blueled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  
digitalWrite(redled,HIGH);
delay(dit);
digitalWrite(redled,LOW);
delay(dit);

digitalWrite(redled,HIGH);
delay(dit);
digitalWrite(redled,LOW);
delay(dit);

digitalWrite(redled,HIGH);
delay(dit);
digitalWrite(redled,LOW);
delay(dit);

digitalWrite(greenled,HIGH);
delay(dah);
digitalWrite(greenled,LOW);
delay(dah);

digitalWrite(greenled,HIGH);
delay(dah);
digitalWrite(greenled,LOW);
delay(dah);

digitalWrite(greenled,HIGH);
delay(dah);
digitalWrite(greenled,LOW);
delay(dah);

digitalWrite(blueled,HIGH);
delay(dit);
digitalWrite(blueled,LOW);
delay(dit);

digitalWrite(blueled,HIGH);
delay(dit);
digitalWrite(blueled,LOW);
delay(dit);

digitalWrite(blueled,HIGH);
delay(dit);
digitalWrite(blueled,LOW);
delay(dit);

delay(longwait);
}
