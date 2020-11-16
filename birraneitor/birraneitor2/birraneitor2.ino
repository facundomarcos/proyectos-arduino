
/* ACA EMPIEZA LA DEFINICION DE VARIABLES Y CONSTANTES */
#define VALVA_1             12     //salida - valvula de llenado olla de licor
#define SENSOR_1             4      //entrada - sensor de llenado en olla de licor (puede ser un switch o un sensor )

#define TIEMPO_ESPERA     5000 //5 segundos

/* ==== Setup - Configuracion ==== */
void setup() {
  pinMode(VALVA_1,OUTPUT);
  pinMode(SENSOR_1,INPUT);
}
/* ==== END Setup ==== */

/* ==== Loop - Codigo que se repite==== */
void loop() {
  /* Hace mientras sensor1 este apagado cada 5 segundos */
 int encendido = digitalRead(SENSOR_1);
  if (encendido > 0){
    digitalWrite(VALVA_1, HIGH);  //abre valvula de llenado
   
  }


  delay(2000);
}
/* ==== End Loop ==== */
