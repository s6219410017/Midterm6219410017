void setup() {
  Serial.begin(9600);

}

void loop() {
 int data=analogRead(A0);
 Serial.print("Data analog A0= ");
 Serial.println(data);

float voltage= data*(3.3/1024);
Serial.print("voltage pin A0= ");
 Serial.println(voltage);
 Serial.println("................");
 delay(1000);

}
