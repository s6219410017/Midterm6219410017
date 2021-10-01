void setup() {
Serial.begin(9600);//D9 D10 RS232 
pinMode(D1, INPUT);//switch
pinMode(D4, OUTPUT);//LED
pinMode(D2, INPUT);//switch
pinMode(D5, OUTPUT);//LED
}

void loop() {
 if(digitalRead(D1) == 0)//กดD1 = logic 0
    {
     digitalWrite(D4,HIGH);

      Serial.println("LED D4 = ON");
    }
 else
    {
      digitalWrite(D4,LOW);
      Serial.println("LED D4 = OFF");
    }
    if(digitalRead(D2) == 0)//กดD1 = logic 0
    {
     digitalWrite(D5,HIGH); 
    }
 else
    {
      digitalWrite(D5,LOW);
    }
}
