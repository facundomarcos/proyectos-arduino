
/* Programa AlarmaV3.ino
Hace sonar intermitentemente un buzzer, y al mismo
tiempo prende dos leds intermitentemente, hasta que
se oprime el botón de apagado de la alarma */
// Variables
int pinBuzzer = 15;
int pinLed1 = 16;
int pinLed2 = 17;
int pinBoton = 2;
boolean banderaAlarma = HIGH;
int rep;
int numRep = 10;
int tiempoEnc = 600;
int tiempoApag = 400;
int tiempoEspera = 9900;
// Función setup
void setup()
{
pinMode(pinBuzzer, OUTPUT);
pinMode(pinLed1, OUTPUT);
pinMode(pinLed2, OUTPUT);
pinMode(pinBoton, INPUT);
attachInterrupt(0, Interruptor, RISING);
}
// Función loop
void loop()
{
banderaAlarma = HIGH;
do
{
Alarma();
} while(banderaAlarma == HIGH);
}
// Función Alarma
void Alarma()
{
for (rep = 0; rep < numRep; rep++)
{
digitalWrite(pinBuzzer, HIGH);
digitalWrite(pinLed1, HIGH);
digitalWrite(pinLed2, HIGH);
delay(tiempoEnc);
digitalWrite(pinBuzzer, LOW);
digitalWrite(pinLed1, LOW);
digitalWrite(pinLed2, LOW);
delay(tiempoApag);
}
delay(tiempoEspera);
}
// Función Interruptor
void Interruptor()
{
banderaAlarma = LOW;
}
