/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte III
   Dev: Diego Emanuel Yos Pinzón
   Fecha: 10 de Mayo
 
*/


#define push_button 10
#define buzzer 9
#define RELE 11 

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
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,0,0,1,1}
};
const int ON = HIGH;


void setup()
{
  
  pinMode(push_button, INPUT); 
  pinMode(buzzer, OUTPUT);
  pinMode(RELE, OUTPUT);
  for(int i = 9; i >= 0; i--) {
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
  while (digitalRead(push_button) == LOW);
  for(int i = 9; i >= 0; i--) {
    print(i);
    delay(1000);
    if(i == 0){
    tone(buzzer, 600 );
    digitalWrite(RELE, LOW);
    delay(500);
    noTone(buzzer);
    digitalWrite(RELE, HIGH);
    }
    
  }
}
