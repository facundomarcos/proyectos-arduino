
/* definicion de variables que van a usarse*/
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


/* ACA EMPIEZA LA DEFINICION DE VARIABLES Y CONSTANTES*/
#define VALVA_1             9     //salida - valvula de llenado olla de licor
#define TIEMPO_ESPERA     5000 //5 segundos




void setup() {
  pinMode(VALVA_1, OUTPUT); //configuramos el pin como salida

}

void loop() {
  digitalWrite(VALVA_1,HIGH); //Activamos la salida
  delay(TIEMPO_ESPERA);
  digitalWrite(VALVA_1,LOW); //Desactivamos la salida
  delay(TIEMPO_ESPERA);

}
