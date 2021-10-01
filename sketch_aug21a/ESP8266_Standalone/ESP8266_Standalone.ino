#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "zY7tJNkWMt2_dltOfsmnyjiobBcSJu_7";
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
Serial.println(value);
if(value<=100)
  {
Blynk.virtualWrite(V1,value);//ส่งข้อมูลเข้าไปยังขา Virtual V1
value++; 
    }
else
{
value=0;
  }
delay(1000);
}

