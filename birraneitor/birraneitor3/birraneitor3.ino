
/* notas: delay mayores de 1 minuto (60.000 milisegundos) se salen de rango -> usar mas veces el delay*/
/* definicion de variables que van a usarse*/
#define VALVA_1             9                                             //salida - valvula de llenado olla de licor
#define TIEMPO_ESPERA     5000                      //5 segundos
#define BOTON_1                                                           //entrada - boton de encendido (emmpieza a llenar olla de licor
#define SENSOR_1                                                          //entrada - sensor de llenado en olla de licor (puede ser un switch o un sensor )
#define VALVG_1                                                           //salida - valvula de gas olla licor
#define SENSOR_2                                                          //entrada - sensor de temperatura olla de licor
#define TEMP_INICIAL                              // 72 ° C
#define TEMP_LAVADO                               // 80 ° C
#define VALVA_2                                                          //salida - valvula descarga olla licor -> llenado macerador (por gravedad)
#define TIEMPO_ESPERA_AGITADOR       10000        //10 segundos  
/* #define TOLVA_1          //salida - abre la tolva para descargar la malta */
#define AGITADOR                                                         //salida - relay para motor agitador
#define TIEMPO_AGITADO               900000       //15 minutos
#define SENSOR_3                                                         //entrada - temperatura del macerador
#define TEMP_MACERADO_1                           // 64 ° C
#define TIEMPO_MACERADO_1           3600000       // 1 hora
/*  cuando pasen 30 minutos del macerado, llenar y prender olla de licor  */
#define TEMP_MACERADO_2                           // 70 ° C
#define TIEMPO_MACERADO_2           1800000       // 1/2 hora
#define VALVG_2                                                          //salida - valvula de gas macerador
#define ESCALON_MACERADO                          //booleano
/*  apagar macerador  */
/* #define TOLVA_2          //salida - abre la tolva para descargar la malta oscura*/
/*  mezclar malta oscura  */
#define TIEMPO_RECIRCULADO           900000       //15 minutos
#define VALVA_3                                                         //salida - valvula recirculado macerador
#define BOMBA_1                                                         //salida - Bomba macerador
/*  al pasar a hervor, tambien activar el lavado  */
#define VALVA_4                                                         //salida - valvula recirculado macerador -> llenado hervor
#define VALVG_3                                                          //salida - valvula de gas hervor
#define TIEMPO_HERVOR               3600000       // 1 hora
#define ALARMA_DENSIDAD_1                                                //salida - medir la densidad a la salida del macerador
/* #define TOLVA_3          //salida - abre la tolva para descargar lupulo de amargor*/
/* #define TOLVA_4          //salida - abre la tolva para descargar coagulante*/
/* #define TOLVA_5          //salida - abre la tolva para descargar lupulo de aroma*/
#define BOMBA_2                                                         //salida - Whirpool
#define VALVA_5                                                         //salida - valvula whirpool
#define TIEMPO_WHIRPOOL             300000       //5 minutos
#define TIEMPO_REPOSO               60000       //1 minutos
#define VALVA_6                                                         //salida - valvula enfriador
#define VALVA_7                                                         //salida - valvula agua corriente enfriador


/* definicion de funciones*/
void encender();                  /*  */
void llenarLicor(){
   /*  prende gas licor*/
   /* prende valvula llenado */ 
   /* repetir operacion para llenado (delay) y cambiar valor para temperatura de lavado */
  };             
void leerLlenadoLicor(){
  /*  apaga valvula de llenado */
  /*  activa funcion para sensar temperatura*/
  };         
void  leerTemperaturaLicor(){
  /* activa funcion de apertura valvula vaciado licor ->llenado macerador*/
  /*  activa funcion agitador*/
  };    
void agitarMacerador(){
  /* prende motor del agitador cada 15 minutos*/
  };
void descargarTolva1(){
  /* descarga la malta*/
   /* agita macerador*/
}
void leerTemperaturaMacerado(){
  /*prender gas macerador */
}
void macerar(){
  /*establecer tiempo */
   /*establecer temperatra  */
   /*establecer temperatra  escalon*/
   /*agitar */
    /*escalon temperatura booleano */
}
void apagarMacerador(){
  /*apagar gas macerador */
}
void descargarTolva2(){
  /* descarga la malta oscura*/
   /* agita macerador*/
  /* breve descanso para recircular*/
}
void recircular(){
  /*prende valvula 3  */
  /*prende bomba 1  */
   /*tiempo 15 minutos */
   /*apaga valvula 3 */
}
void llenadoHervor(){
  /*prende bomba 1 */
  /*prende valvula 4 */
  /*OPERACION MANUAL medir densidad en macerador */
}
void hervir() {
/* prende gas hervor*/
/*descargar lupulos */
/*descargar coagulante */
/*descargar lupulos */
/* tiempo hervido*/
/*apagar gas hervor*/
}
void whirpool() {
/*prende bomba 2 */
/* prende valvula 5*/
/*tiempo whirpool */
/*apaga valvula */
/* tiempo descanso*/
}
void enfriado() {
/*prende valvula 6 */
/*prende bomba 2 */
/*prende valvula 7 agua corriente */
}
void setup() {
/* */
/* */
}

void loop() {


}
