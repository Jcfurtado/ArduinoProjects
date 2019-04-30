
/*************************************************************************
 **                                                                     **
 **              CURSO ARDUINO PARA INICIANTES - ROBOCORE               **
 **                                                                     **
 ** Exemplo 09: Alarme de temperatura                                   **
 **                                                                     **
 *************************************************************************/ 

int PinoSensor = A0;  // Pino no qual o sensor de temperatura está conectado, no caso A0
int Buzzer = 3;      // Pino no qual o buzzer está conectado, no caso 2
int ValorSensor = 0;  // Variável para guardar a leitura do sensor de temperatura
float temperatura = 0;  // Variável para guardar o valor convertido do sensor para um valor de temperatura
int SetPoint = 40;   // Set point de temperatura, acima desse valor dispara o alarme
int led1 = 4;       // Pino no qual o primeiro LED da barra gráfica será ligado, no caso 3
int led2 = 5;       // Pino no qual o segundo LED da barra gráfica será ligado, no caso 4
int led3 = 6;       // Pino no qual o terceiro LED da barra gráfica será ligado, no caso 5
int led4 = 7;       // Pino no qual o quarto LED da barra gráfica será ligado, no caso 6
int led5 = 8;       // Pino no qual o quinto LED da barra gráfica será ligado, no caso 7
int led6 = 9;       // Pino no qual o sexto LED da barra gráfica será ligado, no caso 8
int led7 = 10;       // Pino no qual o sétimo LED da barra gráfica será ligado, no caso 9
int led8 = 11;      // Pino no qual o oitavo LED da barra gráfica será ligado, no caso 10
int led9 = 12;      // Pino no qual o nono LED da barra gráfica será ligado, no caso 11
int led10 = 13;     // Pino no qual o décimo LED da barra gráfica será ligado, no caso 12

void setup()  { 
 pinMode(led1, OUTPUT);  // Configura o pino do LED 1 como saída
 pinMode(led2, OUTPUT);  // Configura o pino do LED 2 como saída
 pinMode(led3, OUTPUT);  // Configura o pino do LED 3 como saída
 pinMode(led4, OUTPUT);  // Configura o pino do LED 4 como saída
 pinMode(led5, OUTPUT);  // Configura o pino do LED 5 como saída
 pinMode(led6, OUTPUT);  // Configura o pino do LED 6 como saída
 pinMode(led7, OUTPUT);  // Configura o pino do LED 7 como saída
 pinMode(led8, OUTPUT);  // Configura o pino do LED 8 como saída
 pinMode(led9, OUTPUT);  // Configura o pino do LED 9 como saída
 pinMode(led10, OUTPUT);  // Configura o pino do LED 10 como saída
 pinMode(Buzzer, OUTPUT);  // Configura o pino do buzzer como saída
 Serial.begin(9600); // Cria a comunicação serial
}

void loop()  { 
  ValorSensor = analogRead(PinoSensor);  // Lê o valor do sensor de temperatura
  temperatura = 5.0*ValorSensor*100/1024; // Converte o valor lido do sensor em um valor de temperatura
  Serial.print("Valor do Sensor = ");  // Escreve Valor do Sensor =  na serial
  Serial.print(ValorSensor);  // Escreve o valor do sensor  na serial
  Serial.print(" Valor da Temperatura = ");  // Escreve Valor do Sensor =  na serial
  Serial.println(temperatura);  // Escreve o valor do sensor  na serial
  
  if (temperatura > SetPoint) {
    digitalWrite(Buzzer, HIGH);  // O valor lido é maior que o set point, aciona o alarme
  }
  else {
    digitalWrite(Buzzer, LOW); // O valor lido é menor que o set point, não aciona o alarme
  }
  if (temperatura <= 20) {     // A temperatura é menor que 20, apaga todos os LEDs
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
  
  if (temperatura > 20) {     // A temperatura é maior que 20, aciona o LED 01 e 02
    digitalWrite(led1, HIGH);  
    digitalWrite(led2, HIGH);  
  }
  if (temperatura > 25) {     // A temperatura é maior que 25, aciona o LED 03 e 04
    digitalWrite(led3, HIGH);  
    digitalWrite(led4, HIGH);  
  }
  if (temperatura > 30) {     // A temperatura é maior que 30, aciona o LED 05 e 06
    digitalWrite(led5, HIGH);  
    digitalWrite(led6, HIGH);  
  }
  if (temperatura > 35) {     // A temperatura é maior que 35, aciona o LED 07 e 08
    digitalWrite(led7, HIGH);  
    digitalWrite(led8, HIGH);  
  }
  if (temperatura > 40) {     // A temperatura é maior que 40, aciona o LED 09 e 10
    digitalWrite(led9, HIGH);  
    digitalWrite(led10, HIGH);  
  }
}


