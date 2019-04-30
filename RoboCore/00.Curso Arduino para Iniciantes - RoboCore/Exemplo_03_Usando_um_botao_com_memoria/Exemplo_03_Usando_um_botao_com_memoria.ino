/*************************************************************************
 **                                                                     **
 **              CURSO ARDUINO PARA INICIANTES - ROBOCORE               **
 **                                                                     **
 ** Exemplo 03: Usando um botão com memória                             **
 **                                                                     **
 *************************************************************************/ 
 
int led = 13; // Pino no qual o LED está conectado, no caso 13
int botao = 2; // Pino no qual o botão está conectado, no caso 2
int estado = 0; // Variável para guardar o estado do botão (0 = Desligado e 1 = Ligado)
int estado_led = 0; // Variável para guardar o estado do led (0 = Desligado e 1 = Ligado)

// A rotina setup é executada uma vez quando pressionado o reset:
void setup() {                
    pinMode(led, OUTPUT);     // inicializa o pino do LED como saída.
    pinMode(botao, INPUT);    // inicializa o pino do botão como entrada.
}

// A rotina loop é executada infinitas vezes até o Arduino ser desligado
void loop() {
  estado = digitalRead(botao);  // Lê a entrada  do botão
 
  if(estado == HIGH) {        // Se o botão for apertado
    if(estado_led == HIGH) {  // O estado do LED é aceso?
      estado_led = LOW;       // Manda apagar
    }
    else {                    // O estado do LED é apagado?
      estado_led = HIGH;      // Manda acender
    }
  }
  
  if(estado_led == HIGH) {    // Se o estado do LED for aceso
    digitalWrite(led, HIGH);  // Liga o LED
  }
  else {                      // Se o estado do LED for apagado
    digitalWrite(led, LOW);   // Desliga o LED
  }
}

