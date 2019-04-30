
/*************************************************************************
 **                                                                     **
 **              CURSO ARDUINO PARA INICIANTES - ROBOCORE               **
 **                                                                     **
 ** Projeto Final: Teclado de 4 notas                                   **
 **                                                                     **
 *************************************************************************/ 
 
int buzzer = 11; // Pino no qual o Buzzer está conectado, no caso 11
int botao1 = 2;  // Pino no qual o botão 1 está conectado, no caso 2
int botao2 = 3;  // Pino no qual o botão 2 está conectado, no caso 3
int botao3 = 4;  // Pino no qual o botão 3 está conectado, no caso 4
int botao4 = 5;  // Pino no qual o botão 4 está conectado, no caso 5

// A rotina setup é executada uma vez quando pressionado o reset:
void setup() {                
    pinMode(buzzer, OUTPUT);   // inicializa o pino do Buzzer como saída.
    pinMode(botao1, INPUT);    // inicializa o pino do botão 1 como entrada.
    pinMode(botao2, INPUT);    // inicializa o pino do botão 2 como entrada.
    pinMode(botao3, INPUT);    // inicializa o pino do botão 3 como entrada.
    pinMode(botao4, INPUT);    // inicializa o pino do botão 4 como entrada.
}

// A rotina loop é executada infinitas vezes até o Arduino ser desligado
void loop() {
  if(digitalRead(botao1) == HIGH) {         // Se o botão 1 for apertado
    tone(buzzer, 1000, 200);   // Toca a frequência 1000 por 200 ms
  }
  
  if(digitalRead(botao2) == HIGH) {         // Se o botão 2 for apertado
    tone(buzzer, 2000, 200);   // Toca a frequência 2000 por 200 ms
  }
  
  if(digitalRead(botao3) == HIGH) {         // Se o botão 3 for apertado
    tone(buzzer, 3000, 200);   // Toca a frequência 3000 por 200 ms
  }
  
  if(digitalRead(botao4) == HIGH) {         // Se o botão 4 for apertado
    tone(buzzer, 4000, 200);   // Toca a frequência 4000 por 200 ms
  }
}


