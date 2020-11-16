int in1=2;
int in2=3;
int pinPWM=5;
int velocidad;
int pot=A0;
int valorPot;

void setup() {
  // put your setup code here, to run once:
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  valorPot=analogRead(pot);

  velocidad=map(valorPot,0,1023,0,255);
  analogWrite(pinPWM,velocidad);
}
