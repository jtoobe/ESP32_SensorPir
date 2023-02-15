int pirPin = 35;
int LedPin = 32;

// El uso de un buzzer es opcional
// int buzzerPin = 4;

void setup() 
{
  // defino funcion de pines
  pinMode(pirPin, INPUT);
  pinMode(LedPin, OUTPUT);
 //  pinMode(buzzerPin, OUTPUT);
 
 // inicializo comunicacion serie
  Serial.begin(115200);
  
}
void loop() 
{
  if(digitalRead(pirPin) == HIGH)
  {
    digitalWrite(LedPin, HIGH);
    // digitalWrite(buzzerPin, HIGH);
    Serial.println("Movimiento detectado");
  }
  else
  {
    digitalWrite(LedPin, LOW);
    // digitalWrite(buzzer_pin, LOW);
   
  }
  delay(50);
}

