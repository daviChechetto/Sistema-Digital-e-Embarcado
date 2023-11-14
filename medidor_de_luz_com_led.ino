int LDR = A5;
int valor = 0;

void setup() 
{
Serial.begin(9600);
}
void loop() 
{
valor = analogRead(LDR);
Serial.println(valor);

}
