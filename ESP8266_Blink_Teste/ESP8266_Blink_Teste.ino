#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SimpleTimer.h>
#include <DHT.h>
#include <DHT_U.h>
#define DHTPIN 12 //pin gpio 12 in sensor
#define DHTTYPE DHT22   // DHT 22 Change this if you have a DHT11


// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "1d9318cf69b34bd59e16939def63a0fe";

SimpleTimer timer;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Trojan.exe";https://message.aliexpress.com/buyerMsgDetail.htm?channelId=42893974102&digest=36b2249e417cad0d353ee8ebd59dfd4e119ef95f68649c90b0fa86d6a7e718d5
char pass[] = "Monalisa";

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600); // See the connection status in Serial Monitor
  Blynk.begin(auth, ssid, pass);
   // Setup a function to be called every second
  timer.setInterval(1000L, sendUptime);
}

void sendUptime()
{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
   //Read the Temp and Humidity from DHT
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  Blynk.virtualWrite(10, t); // virtual pin 
  Blynk.virtualWrite(11, h); // virtual pin 
}

void loop()
{
  Blynk.run();
  timer.run();
}
