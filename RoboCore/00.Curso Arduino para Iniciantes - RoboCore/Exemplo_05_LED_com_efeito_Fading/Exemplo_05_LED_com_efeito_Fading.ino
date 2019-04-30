
/*************************************************************************
 **                                                                     **
 **              CURSO ARDUINO PARA INICIANTES - ROBOCORE               **
 **                                                                     **
 ** Exemplo 05: LED com efeito Fading                                   **
 **                                                                     **
 *************************************************************************/ 

int led = 11;     // Pino no qual o LED está conectado, no caso 11
int saida = 0;    // Valor que será colocado no PWM, varia de 0 a 255

void setup()  { 
  // não precisamos colocar nada no setup, para uma saída analógica não precisa configurar. 
} 

void loop()  { 
  // Fade in do valor mínimo ao máximo em incrementos de 5.
  for(saida = 0 ; saida <= 255; saida +=5) { 
    analogWrite(led, saida);         
    delay(30);    // Espera 30 ms para se ver o efeito    
  } 

  // Fade out do valor máximo ao mínimo em incrementos de 5.
  for(saida = 255 ; saida >= 0; saida -=5) { 
    analogWrite(led, saida);         
    delay(30);    // Espera 30 ms para se ver o efeito
  } 
}

