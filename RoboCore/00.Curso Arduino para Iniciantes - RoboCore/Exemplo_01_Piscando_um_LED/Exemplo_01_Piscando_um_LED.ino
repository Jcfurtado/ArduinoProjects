/*************************************************************************
 **                                                                     **
 **              CURSO ARDUINO PARA INICIANTES - ROBOCORE               **
 **                                                                     **
 ** Exemplo 01: Piscando um LED                                         **
 **                                                                     **
 *************************************************************************/ 
 
int led = 13; // Pino no qual o LED está conectado, no caso 13 

// A rotina setup é executada uma vez quando pressionado o reset:
void setup() {                
    pinMode(led, OUTPUT);     // inicializa o pino do LED como saída.
}

// A rotina loop é executada infinitas vezes até o Arduino ser desligado
void loop() {
  digitalWrite(led, HIGH);   // Liga o LED (HIGH é a tensão colocada no pino, no caso 5V)
  delay(1000);               // Espera 1 s ou 1000 ms
  digitalWrite(led, LOW);    // Desliga o LED (LOW equivale a 0V ou GND)
  delay(1000);               // Espera 1 s
}



