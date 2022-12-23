

int sensorPin = A0;    
int sensorValue = 0;  // variable to store the value coming from the sensor
int hall = 4;

void setup() {pinMode(hall,INPUT);
Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  if(digitalRead(hall)==LOW)
  {digitalWrite(13,HIGH);}
  else
  {digitalWrite(13,LOW);}
 
  // turn the ledPin on


}
