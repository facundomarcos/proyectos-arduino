int leds[]={4,5,6,7,8,9,10,11,12,13};
int tiempoRet=400;


void setup() {
  // put your setup code here, to run once:
pinMode(leds[0],OUTPUT);
pinMode(leds[1],OUTPUT);
pinMode(leds[2],OUTPUT);
pinMode(leds[3],OUTPUT);
pinMode(leds[4],OUTPUT);
pinMode(leds[5],OUTPUT);
pinMode(leds[6],OUTPUT);
pinMode(leds[7],OUTPUT);
pinMode(leds[8],OUTPUT);
pinMode(leds[9],OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(leds[0],HIGH);
digitalWrite(leds[1],HIGH);
digitalWrite(leds[2],HIGH);
digitalWrite(leds[3],HIGH);
digitalWrite(leds[4],HIGH);
digitalWrite(leds[5],HIGH);
digitalWrite(leds[6],HIGH);
digitalWrite(leds[7],HIGH);
digitalWrite(leds[8],HIGH);
digitalWrite(leds[9],HIGH);
delay(tiempoRet);

digitalWrite(leds[0],LOW);
digitalWrite(leds[1],LOW);
digitalWrite(leds[2],LOW);
digitalWrite(leds[3],LOW);
digitalWrite(leds[4],LOW);
digitalWrite(leds[5],LOW);
digitalWrite(leds[6],LOW);
digitalWrite(leds[7],LOW);
digitalWrite(leds[8],LOW);
digitalWrite(leds[9],LOW);
delay(tiempoRet);
}
