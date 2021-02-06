int lowest = 200;                 // enter the highest value received in data
int highest = 600;                // enter the lowest value received in data
int range = (highest - lowest);

void setup()
{
  // Start serial at 9600 baud
  Serial.begin(9600);
}

    void loop()
{
  // Read the input on analog pins:
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);
  int sensorValue4 = analogRead(A3);
  int sensorValue5 = analogRead(A4);


  // Convert the analog reading (which goes from 0 - 1023) to a voltage to a percentage of the range:
  float Sensor1 = ((float)(100-(((float)( sensorValue1-lowest)/range)*100)));
  float Sensor2 = ((float)(100-(((float)(sensorValue2-lowest)/range)*100)));
  float Sensor3 = ((float)(100-(((float)(sensorValue3-lowest)/range)*100)));
  float Sensor4 = ((float)(100-(((float)(sensorValue4-lowest)/range)*100)));
  float Sensor5 = ((float)(100-(((float)(sensorValue5-lowest)/range)*100)));

{
  // Print out the percentage values in line format to serial:
Serial.print("moisture,batch=one");

Serial.print(" Sensor5=");
Serial.print(Sensor5);
Serial.print(",");

Serial.print("Sensor4=");
Serial.print(Sensor4);
Serial.print(",");

Serial.print("Sensor3=");
Serial.print(Sensor3);
Serial.print(",");

Serial.print("Sensor2=");
Serial.print(Sensor2);
Serial.print(",");

Serial.print("Sensor1=");
Serial.print(Sensor1);

  Serial.println();
}

  // Wait 100 milliseconds
  delay(100);
}
