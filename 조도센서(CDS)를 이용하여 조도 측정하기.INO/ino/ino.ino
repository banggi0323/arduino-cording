void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}
void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if (sensorValue > 700) digitalWrite(4, LOW);
  else digitalWrite(4, HIGH);
  //delay(2000);
}