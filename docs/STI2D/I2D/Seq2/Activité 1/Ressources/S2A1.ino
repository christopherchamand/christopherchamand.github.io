/*
  S1A1

Auteur : Laurent Moutoussamy
Description : Ce code permet de lire les valeurs mesurées par les deux capteurs et de les afficher via le Serial Plotter.
Fichier créé à partir de Vittascience

*/


float capteurD5;
float capteurA0;

void serial_setupConnection(int baudrate) {
  Serial.begin(baudrate);
  while (!Serial) {
    Serial.println("En attente de l'ouverture du port série...");
    delay(1000);
  }
  Serial.println("Port série activé. Baudrate: " + String(baudrate));
  delay(50);
}


void setup() {
  pinMode(5, INPUT);
  pinMode(A0, INPUT);
  serial_setupConnection(9600);
}

void loop() {
  capteurD5 = digitalRead(5) * 5;
  capteurA0 = analogRead(A0);
  Serial.print("@Graph:");
  Serial.print("Capteur A0:");
  Serial.print(capteurA0);
  Serial.print("|");
  Serial.print("Capteur D5:");
  Serial.print(capteurD5);
  Serial.print("|");
  Serial.print("\n");
  delay(1000);
}
