
/*************************************************************************
 **                                                                     **
 **              CURSO ARDUINO PARA INICIANTES - ROBOCORE               **
 **                                                                     **
 ** Exemplo 06: Dimmer                                                  **
 **                                                                     **
 *************************************************************************/ 

int led = 11;     // Pino no qual o LED está conectado, no caso 11
int pot = A0;     // Pino no qual o potenciômetro está conectado, no caso A0
int saida = 0;    // Valor que será colocado no PWM, varia de 0 a 255

void setup()  { 
  // não precisamos colocar nada no setup, para uma saída analógica não precisa configurar. 
} 

void loop()  {
  saida = analogRead(pot); // Lê o valor da entrada analógica (0 – 1023)
  saida = map(saida, 0, 1023, 0, 255); // Converte o valor da saída para valores entre 0-255
  analogWrite(led, saida); // Acende o LED com intensidade proporcional ao potenciômetro
}

