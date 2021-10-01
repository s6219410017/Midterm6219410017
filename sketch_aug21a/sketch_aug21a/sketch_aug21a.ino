/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = " zY7tJNkWMt2_dltOfsmnyjiobBcSJu_7";

//char ssid[] = "YourNetworkName";
char ssid[] = "chayanont";
//char ssid[] = "AndroidAP404D";

//char pass[] = "YourPassword";
//char pass[] = "uxgg2076";
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
  Serial.println(value);
  if(value<=100)
  {
   Blynk.virtualWrite(V1,value);//ส่งข้อมูลไปยังขา Virtual V1
    value++; 
    }
else
{
    value=0;
}
float Vout = analogRead(A0)  *(3.3/1024) ;
float Temp = Vout/0.01;
  Blynk.virtualWrite(V2,Temp );//ส่งข้อมูลไปยังขา Virtual V2
  delay(1000);
}



