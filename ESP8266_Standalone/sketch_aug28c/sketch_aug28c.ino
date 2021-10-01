#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = " RTcYeqHGIR1daufc5Owlz27G0R5IH6Ys";
char ssid[] = "chayanont";
char pass[] = "tom45295";

int value=0;
void setup()
{
  // Debug console
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
}
void loop()
{
Blynk.run();

  float Vout = analogRead(A0)  *(3.3/1024) ;
float Temp = Vout/0.01;
  Blynk.virtualWrite(V2,Temp );
delay(1000);
}
