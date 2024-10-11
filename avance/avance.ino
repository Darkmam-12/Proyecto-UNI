
const int soilMoisturePin = A1;  
const int relayPin = 10;          

const int moistureThreshold = 300; ad

void setup() {

  Serial.begin(9600);


  pinMode(relayPin, OUTPUT);

o
  digitalWrite(relayPin, LOW);

  Serial.println("Sistema de Riego Automatizado Iniciado");
}

void loop() {

  int moistureValue = analogRead(soilMoisturePin);

  Serial.print("Valor de Humedad: ");
  Serial.println(moistureValue);


  if (moistureValue < moistureThreshold) {

    digitalWrite(relayPin, HIGH);
    Serial.println("Bomba ACTIVADA");
  }
  else {

    digitalWrite(relayPin, LOW);
    Serial.println("Bomba DESACTIVADA");
  }


  delay(5000);
}

