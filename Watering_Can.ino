int lowest = 200;
int highest = 600;
int range = (highest - lowest);

void setup()
{
  // Start serial at 9600 baud
  Serial.begin(9600);
}

    void loop()
{
  // Read the input on analog pin 0:
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);
  int sensorValue4 = analogRead(A3);
  int sensorValue5 = analogRead(A4);


  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float Sensor1 = ((float)(100-(((float)( sensorValue1-lowest)/range)*100)));
  float Sensor2 = ((float)(100-(((float)(sensorValue2-lowest)/range)*100)));
  float Sensor3 = ((float)(100-(((float)(sensorValue3-lowest)/range)*100)));
  float Sensor4 = ((float)(100-(((float)(sensorValue4-lowest)/range)*100)));
  float Sensor5 = ((float)(100-(((float)(sensorValue5-lowest)/range)*100)));

 
  // Print out the value you read:


{
//  Serial.print(sensorValue1);
//  Serial.print(" RawOnion ");
//  Serial.print(sensorValue2);
//  Serial.print(" RawRadishNew ");
//  Serial.print(sensorValue3);
//  Serial.print(" RawChives ");
//  Serial.print(sensorValue4);
//  Serial.print(" RawChives ");
//  Serial.print(sensorValue5);
//  Serial.print(" RawRadish ");
//
//  Serial.print(Sensor5);
//  Serial.print(" Radish ");
//  Serial.print(Sensor4);
//  Serial.print(" Chives ");
//  Serial.print(Sensor3);
//  Serial.print(" Chives ");
//  Serial.print(Sensor2);
//  Serial.print(" NewRadishes ");
//  Serial.print(Sensor1);
//  Serial.print(" Onions ");

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
//Serial.print(",");
  
 
  Serial.println();
}

   
  // Wait 100 milliseconds
  delay(100);
}
