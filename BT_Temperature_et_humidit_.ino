#include <dht11.h> // charger la librairie

dht11 DHT11; // Créer le capteur

#define DHT11PIN 2 // Définir la pin utilisée

#include <SoftwareSerial.h>

SoftwareSerial HC06(11,10);


void setup()
{
  HC06.begin(9600); 
}
void loop()
{
    //while(HC06.available())
    //{
      
  int chk = DHT11.read(DHT11PIN); // Lecture du capteur

  HC06.print("Humidite (%): "); // Humidité
  HC06.println((float)DHT11.humidity, 2);

  HC06.print("Temperature (°C): "); // Température
  HC06.println((float)DHT11.temperature, 2);

  delay(1000); // Pause avant prochaine lecture
    //}
}

