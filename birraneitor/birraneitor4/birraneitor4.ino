//Pines entradas
const int BOTON_1             1       //boton de encendido
const int SENSOR_1            2       //sensor de llenado en olla de licor
const int SENSOR_2            3       //sensor de temperatura olla de licor
//Pines salidas
const int VALVA_1             4       //valvula de llenado olla de licor
const int VALVG_1             5       //valvula de gas olla licor
const int VALVA_2             6       //valvula descarga olla licor -> llenado macerador (por gravedad)
//Estados
const int ESTADO_APAGADO;
const int ESTADO_LLENANDO_LICOR;
const int ESTADO_LLENO_LICOR;
const int ESTADO_VACIANDO_LICOR;
const int ESTADO_VACIO_LICOR
//Constantes
const int TEMP_INICIAL = 72           //temperatura olla de licor
const int TEMP_LAVADO = 80            //temperatura lavado olla de licor
//Variables
int estado = ESTADO_APAGADO;
int temperatura = 0;
int licorLleno = 0;
int ultimoCambio = 0;
int tiempoCambio = 0;
int tiempo = 0;
//Inicializar
void setup(){
  pinMode(VALVA_1,OUTPUT);
  pinMode(VALVG_1,OUTPUT);
  pinMode(VALVA_2,OUTPUT);
  pinMode(SENSOR_1,INPUT);
  pinMode(SENSOR_2,INPUT);
}

//Funcionalidad
void loop(){
  obtenerDatosLicor();
  controlarLicor();
  }
 void obtenerDatosLicor(){
  tiempo = millis();
  licorLleno = SENSOR_1;
  temperatura = SENSOR_2;
  tiempoCambio = tiempo - ultimoCambio;
 }
 void controlarLicor(){
  case ESTADO_APAGADO:
    controlarApagadoLicor();
   break;
  case ESTADO_LLENANDO_LICOR:
    controlarLlenadoLicor();
   break;
   case ESTADO_LLENO_LICOR:
    controlarLlenoLicor();
   break;
   case ESTADO_VACIANDO_LICOR:
    controlarVaciandoLicor();
   break;
   case ESTADO_VACIO_LICOR:
    controlarVacioLicor();
   break;
 }
void controlarApagadoLicor(){
  delay(50);
}
void controlarLlenadoLicor(){
  llenarLicor();
}
 
