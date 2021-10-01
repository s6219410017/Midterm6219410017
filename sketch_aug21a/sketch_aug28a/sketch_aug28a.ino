#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "AZyUPcBL_OEjAFiPHFIuhpGMK7ogvtOJ";
char ssid[] = "chayanont";
char pass[] = "tom45295";
void setup()
{
// Debug console
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
}
void loop()
{
Blynk.run();
}
