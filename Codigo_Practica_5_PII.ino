/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte II
   Dev: Diego Emanuel Yos Pinzón
   Fecha: 10 de Mayo
 
*/

#define buzzer 9
#define push_button 10

int Do = 261;
int re = 294;
int mi = 329;
int fa = 349;
int sol = 391;
int solJ = 415;
int la = 440;
int laJ = 455;
int si = 466;
int doD = 523;
int doDJ = 554;
int reD = 587;
int reDJ = 622;
int miD = 659;
int faD = 698;
int faDJ = 740;
int solD = 783;
int solDJ = 830;
int laD = 880;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if(digitalRead(push_button) == HIGH){

  delay(1000);
  tone(buzzer, la, 500);
  delay(550);
  tone(buzzer, la, 500);
  delay(550);
  tone(buzzer, la, 500);
  delay(550);
  tone(buzzer, fa, 350);
  delay(400);
  tone(buzzer, doD, 150);
  delay(200);
  tone(buzzer, la, 500);
  delay(550);
  tone(buzzer, fa, 350);
  delay(400);
  tone(buzzer, doD, 150);
  delay(200);
  tone(buzzer, la, 1000);
  delay(1050);
  tone(buzzer, miD, 500);
  delay(550);
  tone(buzzer, miD, 500);
  delay(550);
  tone(buzzer, miD, 500);
  delay(550);
  tone(buzzer, faD, 350);
  delay(400);
  tone(buzzer, doD, 150);
  delay(200);
  tone(buzzer, solJ, 500);
  delay(550);
  tone(buzzer, fa, 350);
  delay(400);
  tone(buzzer, doD, 150);
  delay(200);
  tone(buzzer, la, 1000);
  delay(1050);
  tone(buzzer, laD, 500);
  delay(550);
  tone(buzzer, la, 350);
  delay(400);
  tone(buzzer, la, 150);
  delay(200);
  tone(buzzer, laD, 500);
  delay(550);
  tone(buzzer, solDJ, 250);
  delay(350);
  tone(buzzer, solD, 250);
  delay(300);
  tone(buzzer, faDJ, 125);
  delay(175);
  tone(buzzer, faD, 125);
  delay(175);
  tone(buzzer, faDJ, 250);
  delay(300);
  tone(buzzer, laJ, 250);
  delay(300);
  tone(buzzer, reDJ, 500);
  delay(550);
  tone(buzzer, reD, 250);
  delay(300);
  tone(buzzer, doDJ, 250);
  delay(300);
  tone(buzzer, doD, 125);
  delay(175);
  tone(buzzer, si, 125);
  delay(175);
  tone(buzzer, doD, 250);
  delay(300);
  tone(buzzer, fa, 125);
  delay(175);
  tone(buzzer, solJ, 500);
  delay(550);
  tone(buzzer, fa, 375);
  delay(400);
  tone(buzzer, la, 125);
  delay(175);
  tone(buzzer, doD, 500);
  delay(550);
  tone(buzzer, la, 375);
  delay(425);
  tone(buzzer, doD, 125);
  delay(175);
  tone(buzzer, reD, 1000);
  delay(1050);
  tone(buzzer, laD, 500);
  delay(550);
  tone(buzzer, la, 350);
  delay(400);
  tone(buzzer, la, 150);
  delay(200);
  tone(buzzer, laD, 500);
  delay(550);
  tone(buzzer, solDJ, 250);
  delay(300);
  tone(buzzer, solD, 250);
  delay(300);
  tone(buzzer, faDJ, 125);
  delay(175);
  tone(buzzer, faD, 125);
  delay(175);
  tone(buzzer, faDJ, 250);
  delay(300);
  tone(buzzer, laJ, 250);
  delay(300);
  tone(buzzer, reDJ, 500);
  delay(550);
  tone(buzzer, reD, 250);
  delay(300);
  tone(buzzer, doDJ, 250);
  delay(300);
  tone(buzzer, doD, 125);
  delay(175);
  tone(buzzer, si, 125);
  delay(175);
  tone(buzzer, solD, 250);
  delay(300);
  tone(buzzer, fa, 250);
  delay(300);
  tone(buzzer, solJ, 500);
  delay(550);
  tone(buzzer, fa, 375);
  delay(425);
  tone(buzzer, doD, 125);
  delay(175);
  tone(buzzer, la, 500);
  delay(550);
  tone(buzzer, fa, 375);
  delay(425);
  tone(buzzer, Do, 125);
  delay(175);
  tone(buzzer, la, 1000);
  delay(1000);
  }
}
