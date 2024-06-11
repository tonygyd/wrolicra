void setup() {
  pinMode(5, OUTPUT);  // Configura el pin 5 como salida
  pinMode(3, OUTPUT);  // Configura el pin 3 como salida
}

void loop() {
  digitalWrite(5, HIGH);  // Establece el pin 5 a positivo
  digitalWrite(3, LOW);   // Establece el pin 3 a negativo
  delay(5000);            // Espera 5 segundos

  digitalWrite(5, LOW);   // Establece el pin 5 a negativo
  digitalWrite(3, HIGH);  // Establece el pin 3 a positivo
  delay(5000);            // Espera 5 segundos
}
