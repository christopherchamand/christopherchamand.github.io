/*

Séquence 2 Activité 1
Author: Christopher CHAMAND
Ce code permet de lire les valeurs mesurées par les deux capteurs 
et de les afficher via le Serial Plotter.

*/

#define capteurA 5
#define capteurB A0

int val_capteurA;
int val_capteurB;

void serial_testConnexion(int baudrate) {
  Serial.begin(baudrate);
  while (!Serial) {
    Serial.println("En attente de l'ouverture du port série...");
    delay(1000);
  }
  Serial.println("Port série activé. Baudrate: " + String(baudrate));
  delay(50);
}

void setup() {
  pinMode(capteurA, INPUT);
  pinMode(capteurB, INPUT);
  serial_testConnexion(9600);
}

void loop() {
  val_capteurA = digitalRead(capteurA);
  val_capteurB = analogRead(capteurB);
  Serial.print("CapteurA: ");
  Serial.print(val_capteurA);
  Serial.print(" | ");
  Serial.print("CapteurB: ");
  Serial.print(val_capteurB);
  Serial.print("\n");
  delay(1000);
}
