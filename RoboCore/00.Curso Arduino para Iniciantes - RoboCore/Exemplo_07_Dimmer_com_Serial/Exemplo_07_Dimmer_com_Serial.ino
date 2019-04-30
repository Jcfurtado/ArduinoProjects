/*************************************************************************
 **                                                                     **
 **              CURSO ARDUINO PARA INICIANTES - ROBOCORE               **
 **                                                                     **
 ** Exemplo 07: Dimmer com Serial                                       **
 **                                                                     **
 *************************************************************************/ 

int led = 11;     // Pino no qual o LED está conectado, no caso 11
int pot = A0;     // Pino no qual o potenciômetro está conectado, no caso A0
int saida = 0;    // Valor que será colocado no PWM, varia de 0 a 255

void setup()  {
  Serial.begin(9600);    // Cria a comunicação serial
  // não precisamos colocar nada no setup, para uma saída analógica não precisa configurar. 
} 

void loop()  {
  saida = analogRead(pot); // Lê o valor da entrada analógica (0 – 1023)
  Serial.print("Potenciometro = ");  // Escreve Potenciometro = na serial
  Serial.print(saida); // Escreve na serial o valor da saida
  saida = map(saida, 0, 1023, 0, 255); // Converte o valor da saída para valores entre 0-255
  Serial.print(" LED = "); // Escreve LED = na serial
  Serial.println(saida);   // Escreve na serial o valor da saida
  analogWrite(led, saida); // Acende o LED com intensidade proporcional ao potenciômetro
}

