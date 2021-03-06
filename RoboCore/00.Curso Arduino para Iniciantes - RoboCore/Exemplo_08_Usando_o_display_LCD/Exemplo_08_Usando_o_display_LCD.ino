
/*************************************************************************
 **                                                                     **
 **              CURSO ARDUINO PARA INICIANTES - ROBOCORE               **
 **                                                                     **
 ** Exemplo 08: Usando o display LCD                                    **
 **                                                                     **
 *************************************************************************/ 

#include <LiquidCrystal.h> // Inclui a biblioteca do Display LCD

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Inicializa os pinos do display LCD

void setup() { 
  lcd.begin(16, 2); // Define o tamanho do display LCD (16 colunas e 2 linhas)
  lcd.print("Alo Arduino"); // Imprime o texto no display LCD
}

void loop() {
  lcd.setCursor(0, 1); // Posiciona o cursor na coluna 0 e linha 1 (A linha 1 é a segunda linha)
  lcd.print(millis()/1000); // Imprime os segundos que se passaram desde que o Arduino foi ligado
}

