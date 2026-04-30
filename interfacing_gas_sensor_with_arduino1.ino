int ledPin = 13;
int buzzerPin = 3;

const int gas = 0;
int MQ2pin= A0;

void setup()
{
  pinMode(ledPin, OUTPUT);
   pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float sensorvalue;
  sensorvalue = analogRead(MQ2pin);
  Serial.println(sensorvalue);
  
  
  if(sensorvalue >= 150) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
  }
  else{
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }
}