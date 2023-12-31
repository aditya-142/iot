#define BLYNK_TEMPLATE_ID "TMPLW7uIJFDM"
#define BLYNK_DEVICE_NAME "LED"
#define BLYNK_AUTH_TOKEN "aCixJKNOQK43PbB4uVy29yZgq6ZFqOSj"
#define LED 2 

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "abcd";
char pass[] = "ZXCV@098";

BlynkTimer timer;

// This function is called every time the Virtual Pin 0 state changes
BLYNK_WRITE(V1)
{
  // Set incoming value from pin V4 to a variable
  int value = param.asInt();

  // Update state
  Blynk.virtualWrite(V1, value);
  if(value == 1){
    Serial.println("LED On");
    digitalWrite(LED, HIGH);
    }
    else if(value == 0){
  Serial.println("LED Off");
  digitalWrite(LED, LOW);
  }
  
} 
  

// This function is called every time the device is connected to the Blynk.Cloud
BLYNK_CONNECTED()
{
  // Change Web Link Button message to "Congratulations!"
  Blynk.setProperty(V3, "offImageUrl", "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations.png");
  Blynk.setProperty(V3, "onImageUrl",  "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations_pressed.png");
  Blynk.setProperty(V3, "url", "https://docs.blynk.io/en/getting-started/what-do-i-need-to-blynk/how-quickstart-device-was-made");
}

 

void setup()
{
  pinMode(LED,OUTPUT);
 
  // Debug console
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  // Setup a function to be called every second
  
}

void loop()
{
  Blynk.run();
  timer.run();
 }

