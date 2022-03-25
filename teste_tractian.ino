// A conversão ADC é de muita importância no mundo digital.
//A primeira etapa do código é estabelecer a conexão entre a placa arduino e o Monitor Série da própria ferramenta do Arduino.
// A Segunda etapa é ler a tensão analágico vindo do potenciômetro fazer a conversão ADC e mostrar o resultado no monitor série.
// O conversor analógico digital do Arduino é de 10bit de resolução e os valores lidos para este caso vai de 0 a 1023

int valorLido = 0;
 
void setup() {
Serial.begin(9600);//Velocidade de transmissão dos dados entre a serial.
}
 
void loop() {
valorLido = analogRead(A5);//Ler valor no pino A5
Serial.println(valorLido);//Enviar sinal para o monitor série
delay(200);//Esperar 200ms
}
