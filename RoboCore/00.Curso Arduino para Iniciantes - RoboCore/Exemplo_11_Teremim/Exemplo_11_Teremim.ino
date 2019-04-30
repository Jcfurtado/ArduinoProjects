/*************************************************************************
 **                                                                     **
 **              CURSO ARDUINO PARA INICIANTES - ROBOCORE               **
 **                                                                     **
 ** Exemplo 11: Teremim                                                 **
 **                                                                     **
 *************************************************************************/ 

int Valor_sensor;  // Variável para armazenar aintensidade de luz do LDR
int Sensor_Min = 1023;  // Variável para calibrar o menor valor do sensor
int Sensor_Max = 0;  // Variável para calibrar o maior valor do sensor
int Buzzer = 11;  // Pino no qual o buzzer está conectado, no caso 11

int ledPin = 13; // Pino no qual o LED está conectado, no caso 13

void setup() {
  pinMode(ledPin, OUTPUT);     // Inicializa o pino do LED como saída.
  digitalWrite(ledPin, HIGH);  // Liga a saída do LED

  // Rotina de calibração do LDR (Tempo de duração: 5 segundos)
  while (millis() < 5000) {
    // Grava o maior valor lido no LDR
    Valor_sensor = analogRead(A0);  
    if (Valor_sensor > Sensor_Max) {
      Sensor_Max = Valor_sensor;
    }
    // Grava o menor valor lido no LDR
    if (Valor_sensor < Sensor_Min) {
      Sensor_Min = Valor_sensor;
    }
  }
  // Desliga o LED para indicar fim da rotina de calibração do LDR
  digitalWrite(ledPin, LOW);
}

void loop() {
  Valor_sensor = analogRead(A0); //Lê o valor do LDR

  // Converte o valor do sensor na faixa de frequência das notas musicais
  int nota = map(Valor_sensor, Sensor_Min, Sensor_Max, 50, 4000);
  tone(Buzzer, nota, 20); // Toca a nota por 20 ms
  delay(10); // Espera 10 ms
}

