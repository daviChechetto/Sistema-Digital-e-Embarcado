#include <math.h>
const int led = 8;
const int sensor = A0;
int botao = 0;
double tempCelsius(int valorNTC) {
  double temp;
  temp = log(((10240000 / valorNTC) - 10000));
  temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741*temp*temp))*temp);
  return temp = temp - 273.15;
} 
 
void setup() {  
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(botao, OUTPUT);
}

void loop() {
 int valor = analogRead(sensor);
 double c = tempCelsius(valor);
 Serial.println(valor);

digitalWrite(led, HIGH);
 
 delay(100);
}
