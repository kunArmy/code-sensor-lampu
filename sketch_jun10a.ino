const int relayPin = 23; // Pin untuk mengontrol relay

void setup() {
  // Inisialisasi pin relay sebagai output
  pinMode(23, OUTPUT);
  // Matikan lampu pada awalnya
  digitalWrite(23, LOW);
}

void loop() {
  // Nyalakan lampu
  digitalWrite(23, HIGH);
  delay(100); // Lampu menyala selama 5 detik

  // Matikan lampu
  digitalWrite(23, LOW);
  delay(100); // Lampu mati selama 5 detik
}
