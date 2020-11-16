
#include <Servo.h>
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C  lcd(0x27,2,1,0,4,5,6,7);

Servo servoEntrada;
Servo servoSalida;
const int inputPinBoton = 2;
const int inputPinParo = 3;
int valueBoton = 0;
int valueParo = 0;
int tiempoLlenado=120; //120 seg tiempo inicial de llenado de las botellas
int SERVOSALIDACERRADO=176;  // valor del servo de salida cerrado
int SERVOSALIDAABIERTOFIN=30; //ABIERTO PARA PURGAR CO2 AL FINAL
int SERVOSALIDAABIERTO=140;  // valor del servo de salida abierto (no del todo) ant 150
int SERVOSALIDAABIERTOPOCO=161; //valor del servo de salida abierto un poco para que salga el gas despacio
int TIEMPODEPURGADO=200; // VALOR X 16 ITERACIONES
int TIEMPOCERRANDOSALIDA=50; // VALOR X 16 ITERACIONES
int TIEMPOABRIRCERVEZA=100; // ITERACION X 16



void setup() {
  servoEntrada.attach(9);  
 servoSalida.attach(10);
  pinMode(inputPinBoton, INPUT);
  pinMode(inputPinParo, INPUT);
  
   lcd.setBacklightPin(3,POSITIVE);
    lcd.setBacklight(HIGH); 
    lcd.begin(16, 2);
    lcd.clear();
}

void loop() {
  

  valueBoton = digitalRead(inputPinBoton);  //lectura digital de pin
  valueParo = digitalRead(inputPinParo);  //lectura digital de pin
 
  //mandar mensaje a puerto serie en función del valor leido
  if(valueParo == LOW){ //EL BOTON DE PARO ESTA SIN PULSAR
    if (valueBoton == HIGH) { // el boton no esta pulsado
       
       
        lcd.setCursor(0,0);
        lcd.print("Pulsa Inicio    ");
        lcd.setCursor(0,1);
        lcd.print("Para Empezar    ");
      
    }
    else { //se ha pulsado el boton
       
        //abrimos co2 izquierda
      servoEntrada.write(190);
      delay(500);
      valueParo = digitalRead(inputPinParo);  //lectura digital de pin
      if(valueParo == HIGH) return;
      //abrimos servo salida
      servoSalida.write(SERVOSALIDAABIERTO);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Purgando con CO2  ");
      lcd.setCursor(0,1);
      valueParo = digitalRead(inputPinParo);  //lectura digital de pin
      if(valueParo == HIGH) return;
      for(int i=0;i<16;i++){
        lcd.print(".");
        delay(TIEMPODEPURGADO);
      }
         
     
      valueParo = digitalRead(inputPinParo);  //lectura digital de pin
      if(valueParo == HIGH) return;
     
      //cerramos salida
      servoSalida.write(SERVOSALIDACERRADO);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Cerrando salida 1.5s");
      lcd.setCursor(0,1);
      for(int i=0;i<16;i++){
        lcd.print(".");
        delay(TIEMPOCERRANDOSALIDA);
      }      
    
      
      //abrimos cerveza derecha
      servoEntrada.write(20);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Abrimos Cerveza ");
      lcd.setCursor(0,1);
      for(int i=0;i<16;i++){
        lcd.print(".");
        delay(TIEMPOABRIRCERVEZA);
      }      
      
      valueParo = digitalRead(inputPinParo);  //lectura digital de pin
      if(valueParo == HIGH) return;
      //abrimos salida un poco anteriormente 30
      servoSalida.write(SERVOSALIDAABIERTOPOCO);
       lcd.clear();
      lcd.setCursor(0,0);
      String s="Llenando... ";
      s.concat(tiempoLlenado);
      s.concat(" s.");
      lcd.print(s);
    
      
      for(int i=tiempoLlenado;i!=-1;i--){
        valueParo = digitalRead(inputPinParo);  //lectura digital de pin
        valueBoton = digitalRead(inputPinBoton);  //lectura digital de pin
        if(valueParo == HIGH) return;
        if (valueBoton == LOW){
          tiempoLlenado=tiempoLlenado-i;
          i=0;
        }
        lcd.setCursor(0,1);
        lcd.print(tiempoLlenado-i);

        delay(1000);
      }
       
      valueParo = digitalRead(inputPinParo);  //lectura digital de pin
      if(valueParo == HIGH) return;
      //cerramos cerveza
      servoEntrada.write(100);
      delay(500); //esperamos a que primero se cierre la entrada
      servoSalida.write(SERVOSALIDAABIERTOFIN);
       lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Cerrando cerveza");
      lcd.setCursor(0,1);
      lcd.print("FIN             ");
      delay(2000);
    }
  }else{
    servoEntrada.write(100); 
   
    lcd.setCursor(0,0);
    lcd.print("Boton de STOP   ");
    lcd.setCursor(0,1);
    lcd.print("Fluidos cerrados");
  
  }
   //lcd
      
  delay(500);
}

