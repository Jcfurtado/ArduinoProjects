/*************************************************************************
 **                                                                     **
 **              CURSO ARDUINO PARA INICIANTES - ROBOCORE               **
 **                                                                     **
 ** Exemplo 10: Tocando uma melodia                                     **
 **                                                                     **
 *************************************************************************/

#define NOTE_C4  262
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247

int Buzzer = 11;  // Pino no qual o buzzer está conectado, no caso 11

void setup() {
  // tone(Pino, Frequência, Duração)
  tone(Buzzer,NOTE_C4,250);  // Toca a nota de acordo com os parâmetros
  delay(325);    // Espera o tempo da pausa
  noTone(Buzzer);  // Para de tocar a nota, prepara para próxima nota
  tone(Buzzer,NOTE_G3,125);  // Toca a nota de acordo com os parâmetros
  delay(160);    // Espera o tempo da pausa
  noTone(Buzzer);  // Para de tocar a nota, prepara para próxima nota
  tone(Buzzer,NOTE_G3,125);  // Toca a nota de acordo com os parâmetros
  delay(160);    // Espera o tempo da pausa
  noTone(Buzzer);  // Para de tocar a nota, prepara para próxima nota
  tone(Buzzer,NOTE_A3,250);  // Toca a nota de acordo com os parâmetros
  delay(325);    // Espera o tempo da pausa
  noTone(Buzzer);  // Para de tocar a nota, prepara para próxima nota
  tone(Buzzer,NOTE_G3,250);  // Toca a nota de acordo com os parâmetros
  delay(325);    // Espera o tempo da pausa
  noTone(Buzzer);  // Para de tocar a nota, prepara para próxima nota
  tone(Buzzer,0,250);  // Toca a nota de acordo com os parâmetros
  delay(325);    // Espera o tempo da pausa
  noTone(Buzzer);  // Para de tocar a nota, prepara para próxima nota
  tone(Buzzer,NOTE_B3,250);  // Toca a nota de acordo com os parâmetros
  delay(325);    // Espera o tempo da pausa
  noTone(Buzzer);  // Para de tocar a nota, prepara para próxima nota
  tone(Buzzer,NOTE_C4,250);  // Toca a nota de acordo com os parâmetros
  delay(325);    // Espera o tempo da pausa
  noTone(Buzzer);  // Para de tocar a nota, prepara para próxima nota
}

void loop() {
// A melodia apenas é executada uma vez no setup
}




