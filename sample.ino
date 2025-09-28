const int tempPin = A0;      // TMP36 middle pin to A0
const int coolingLed = 9;    // Blue LED (cooling indicator)
const int heatingLed = 10;   // Red LED (heating indicator)

const float hotThreshold = 30.0;    // Temperature in Celsius to start cooling
const float coldThreshold = 15.0;   // Temperature in Celsius to start heating

void setup() {
  Serial.begin(9600);
  pinMode(coolingLed, OUTPUT);
  pinMode(heatingLed, OUTPUT);
}

float readTempC() {
  int sensorVal = analogRead(tempPin);
  float voltage = sensorVal * (5.0 / 1023.0);       // Convert analog value to voltage
  float temperatureC = (voltage - 0.5) * 100.0;     // Convert voltage to Celsius
  return temperatureC;
}

void loop() {
  float ambientTemp = readTempC();
  Serial.print("Ambient Temperature: ");
  Serial.print(ambientTemp);
  Serial.println(" °C");

  if (ambientTemp > hotThreshold) {
    digitalWrite(coolingLed, HIGH);
    digitalWrite(heatingLed, LOW);
  } 
  else if (ambientTemp < coldThreshold) {
    digitalWrite(heatingLed, HIGH);
    digitalWrite(coolingLed, LOW);
  } 
  else {
    digitalWrite(coolingLed, LOW);
    digitalWrite(heatingLed, LOW);
  }

  delay(2000);   // Wait for 2 seconds before next reading
}
