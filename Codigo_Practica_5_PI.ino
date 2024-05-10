/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte i
   Dev: Diego Emanuel Yos Pinzón
   Fecha: 10 de Mayo
 
*/

const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

const int N = 7;
const int SEGMENTOS[N] = {A,B,C,D,E,F,G};

//MATRIZ CATODO COMUN
const int DIGITOS[10][N] = {
  {0,1,1,0,0,0,0},
  {1,1,1,1,0,0,1},
  {1,0,1,1,0,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,0,0,1,1}
};
const int ON = HIGH;

float Kg = 2;
float Lb;
float Amperios = 2.98;
float microAmperios;

float multiplicacionKilogramos(float Kg) {
  return Kg * 2.20462;
}

float multiplicacion_uA(float microAmperios){
  return Amperios * 1000000;
}



void setup()
{
  Serial.begin(9600); 
  Lb = multiplicacionKilogramos(Kg);
  Serial.print(Kg);
  Serial.print(" kilogramos es igual a: ");
  Serial.print(Lb);
  Serial.println(" Libras ");
  delay(1000);
  
  microAmperios = multiplicacion_uA(Amperios);
  Serial.print(Amperios);
  Serial.print(" Amperios son iguales a: ");
  Serial.print(microAmperios);
  Serial.println(" uA ");
  delay(1000);


  for(int i = 0; i <= 9; i++) {
    pinMode(SEGMENTOS[i], OUTPUT);
    digitalWrite(SEGMENTOS[i], LOW);
  }
}

void print(int d){
  for(int i = 0; i < N; i++){
    digitalWrite(SEGMENTOS[i], DIGITOS[d][i]);
  }
}

void loop()
{

  for(int i = 0; i <= 9; i++) {
    print(i);
    delay(1000);

    }
    
}
