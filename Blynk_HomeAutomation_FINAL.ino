/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest
 *************************************************************/

#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "ab15301bb20644869929a3088b65dccb"; //You will get this Auth Token in Gmail if you signin Blynk app with your Gmail ID

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Vigilante"; //Enter your WIFI Name
char pass[] = "johncena";//Enter your WIFI Password

void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(13,OUTPUT);

  digitalWrite(13,LOW);
  
  

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);
}

void loop()
{
  Blynk.run();
}

