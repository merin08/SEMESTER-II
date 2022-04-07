#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266_SSL.h>
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon)  Auth Tokens  Copy all

char auth[] = "YourAuthToken";
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "YourNetworkName"; // Wi-Fi Name
char pass[] = "YourPassword"; // Wi-Fi Password

void setup()
{
 // Debug console
 Serial.begin(9600);
 Blynk.begin(auth, ssid, pass);
}

void loop()
{
 Blynk.run();
}
