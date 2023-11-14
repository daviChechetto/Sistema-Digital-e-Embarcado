#include <math.h>
const int led = 8;
const int sensor = A0;
int botaoB = 0;
int botaoV = 0;
int estadoBotaoB;
int estadoBotaoV;
double tempCelsius(int valorNTC) {
  double temp;
  temp = log(((10240000 / valorNTC) - 10000));
  temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741*temp*temp))*temp);
  return temp = temp - 273.15;
} 
 
void setup() {  
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(botaoB, INPUT);
pinMode(botaoV, INPUT):
}

void loop() {
 estadoBotaoB = analogRead(botaoB);
 int valor = analogRead(sensor);
 double c = tempCelsius(valor);
 Serial.println(valor);
if (estadobotaoB == HIGH) && (estadobotaoV == HIGH)
{
  digitalWrite(led, HIGH)
}
digitalWrite(led, HIGH);
 
 delay(100);
}
