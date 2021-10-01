#include <ESP8266WiFi.h>
#include <DHT.h>
#define DHTTYPE DHT11
#define DHTPIN D4 //ใช้ขาD4 ต่อกับขาสัญญาณ DHT11
DHT dht(DHTPIN, DHTTYPE, 15);

unsigned long int humid;
unsigned long int temp;

void project()
{
humid = dht.readHumidity();
temp = dht.readTemperature();


 Serial.print("humid="); 
 Serial.println(humid);
 

 Serial.print("Temp="); 
 Serial.println(temp);
 Serial.println("---------------------------"); 
}

void setup() 
{
    Serial.begin(115200); 
}

void loop() 
{
 project(); //เรียกให้ฟังก์ชันชื่อprojectทำงาน    
 delay(1000);   
}
