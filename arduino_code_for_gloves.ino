void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  Serial.println("LABEL,voltage1,voltage2,voltage3,voltage4,voltage5");
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue1 = analogRead(A5);
  int sensorValue2 = analogRead(A4);
  int sensorValue3 = analogRead(A3);
  int sensorValue4 = analogRead(A2);
  int sensorValue5 = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage1 = sensorValue1 * (5.0 / 1023.0);
  float voltage2 = sensorValue2 * (5.0 / 1023.0);
  float voltage3 = sensorValue3 * (5.0 / 1023.0);
  float voltage4 = sensorValue4 * (5.0 / 1023.0);
  float voltage5 = sensorValue5 * (5.0 / 1023.0);
  // print out the value you read:
  Serial.print(voltage1);
  Serial.print(",");
  Serial.print(voltage2);
  Serial.print(",");
  Serial.print(voltage3);
  Serial.print(",");
  Serial.print(voltage4);
  Serial.print(",");
  Serial.println(voltage5);
  delay(1000);
}