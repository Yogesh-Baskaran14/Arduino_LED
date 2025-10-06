#define LED_PIN 7
#define POTENTIOMETER_PIN A1

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  Serial.print("potentiometerValue: ");
  Serial.println(potentiometerValue);
  int brightness = potentiometerValue / 4;
  analogWrite(LED_PIN, brightness);
}
