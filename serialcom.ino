// Definisikan pin yang akan digunakan
const int ledPin = 7;
String data;

void setup() {
  // Mulai komunikasi serial dengan baud rate 9600 bps
  Serial.begin(115200);

  // Atur pin sebagai output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    // Baca karakter yang diterima dari Serial Monitor
    data = Serial.readString();
    
    // Jika karakter yang diterima adalah 'h' (hidupkan), nyalakan LED
    if (data == "hidup") {
      digitalWrite(ledPin, HIGH);
      Serial.println("aktif");
      
    }
    // Jika karakter yang diterima adalah 'm' (matikan), matikan LED
    if (data == "mati") {
      digitalWrite(ledPin, LOW);
      Serial.println("ded");
    }
  }
}
