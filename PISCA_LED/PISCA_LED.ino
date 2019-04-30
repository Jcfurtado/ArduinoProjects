#define LED_AZUL 4

void setup() {
  pinMode(LED_AZUL, OUTPUT);
}
void loop() {
  digitalWrite(LED_AZUL, HIGH);
  delay(2000);
  digitalWrite(LED_AZUL, LOW);
  delay(1000);
}
