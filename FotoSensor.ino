int LDR = A5;             //Declara a variável do foto sensor 
int valor = 0;            //Declara o valor do LDR

void setup() {
Serial.begin(9600);       //Chama o leitor serial
}

void loop() {             
valor = analogRead(LDR);  //Diz para ler o LDR como Valor
Serial.println(valor);    //Mostra no Serial a variável
}
