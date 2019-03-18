#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo;

char auth[] = "token Blynk";
char ssid[] = "wifi";
char pass[] = "pass";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  servo.attach(16); // arduino  D2 pin
  
 }
  
void loop()
{
  
  Blynk.run();
  
}


BLYNK_WRITE(V2)
{
  servo.write(0);
}
BLYNK_WRITE(V3)
{
  servo.write(180);
}
