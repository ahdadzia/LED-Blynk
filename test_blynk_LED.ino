#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "Your Auth Token"; //Token blynk yg di email

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Your Wifi"; //nama wifi
char pass[] = "Your Password"; //password wifi
Servo move_servo;
BLYNK_WRITE(V1){ 
  move_servo.write(param.asInt());
}
void setup(){
// Debug console
Serial.begin(9600);
move_servo.attach(2);
Blynk.begin(auth, ssid, pass);
Serial.begin(9600);
 
}

void loop()
{
Blynk.run();

}
