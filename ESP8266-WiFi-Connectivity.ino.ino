#include <ESP8266WiFi.h>

//Network details:(Editable per Network request)
const char* ssid = "STELLAR"; //Enter your WiFi SSID here
const char* password = "stellarBD"; //Enter your WiFi password here

//Setting the client:
WiFiClient espClient;

void setup() {
  
  Serial.begin(115200);
  Serial.println("Starting..");
  delay(10);

  setup_wifi();
  delay(500);

}

void loop() {
}

void setup_wifi()
{
  delay(10);
  //Starting by Connecting to WiFi
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println("");
}

