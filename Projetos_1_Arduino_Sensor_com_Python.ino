#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;

int ultimovalor = 0; 

void setup() {
  Serial.begin(9600);
  if (!bmp.begin()) {
    Serial.println("Sensor BMP180 não encontrado, verifique as conexões!");
    while (1); 
  }
}

void loop() {
  int valoratual = bmp.readPressure();
  
  Serial.print(valoratual);
  Serial.println(" Pa");

  if (valoratual > ultimovalor + 10) {  
    Serial.println("Vermelho");
  }

  ultimovalor = valoratual;

}
