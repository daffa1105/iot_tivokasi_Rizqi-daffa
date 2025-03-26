#include <Arduino.h>  


// Deklarasi pin LED
int lampu = 26;
int lampu2 = 33;
int lampu3 = 17;


void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Blinking LED");


    // Atur pin sebagai OUTPUT
    pinMode(lampu, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu3, OUTPUT);
}


void loop() {
    // Nyalakan kedua LED
    digitalWrite(lampu, HIGH);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, LOW);
    Serial.println("LED ON");
    
    delay(4000); 


    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, LOW);
    Serial.println("LED ON");
    
    delay(2000);
    
    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, HIGH);
    Serial.println("LED ON");
    
    delay(3000); 
}
