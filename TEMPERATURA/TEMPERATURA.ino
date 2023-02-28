const int lm35Pin = A0; // Pin analógico donde está conectado el LM35
float temperatura; // Variable donde guardaremos la temperatura medida

void setup() {
  Serial.begin(9600); // Inicializar la comunicación serial con una velocidad de 9600 baudios
}

void loop() {
  int lectura = analogRead(lm35Pin); // Leer el valor analógico del LM35
  float voltaje = (lectura * 5.0) / 1023.0; // Convertir la lectura a voltaje
  temperatura = voltaje * 100.0; // Convertir el voltaje a temperatura en grados Celsius
  Serial.print("Temperatura: "); // Imprimir el texto "Temperatura: "
  Serial.print(temperatura); // Imprimir el valor de la temperatura
  Serial.println(" °C"); // Imprimir el texto "°C" y hacer un salto de línea
  delay(500); // Esperar un segundo antes de medir de nuevo
}
