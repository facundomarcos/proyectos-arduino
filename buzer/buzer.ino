#include <EasyBuzzer.h>

void sonidoTerminado(){
  Serial.println("Sonido terminado");
}

void setup() {
  Serial.begin(9600);
  
  // Configuración del pin
  EasyBuzzer.setPin(5);

  Serial.println("Comienza el sonido");
  
  // Configuración del beep
  EasyBuzzer.beep(
    2000,          // Frecuencia en herzios
    200,           // Duración beep en ms
    100,           // Duración silencio en ms
    3,             // Números de beeps por ciclos
    100,           // Duración de la pausa
    1,             // Número de ciclos
    sonidoTerminado// Función callback que es llamada cuando termina
  );

   

 
}

void loop() {
  // Función para que funcione la librería
  EasyBuzzer.update();
}
