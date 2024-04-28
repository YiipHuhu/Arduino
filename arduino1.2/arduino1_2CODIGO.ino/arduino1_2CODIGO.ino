#define LED_VERMELHO 2 //define que a porta 2 é o led vermelho
#define UM_SEGUNDO 1000 //valores em milisegundos
#define MEIO_SEGUNDO 500
void setup() {
  pinMode(LED_VERMELHO, OUTPUT);
}

void loop() {
  PiscarLed(LED_VERMELHO);//forneço qual led ira acender
}

void PiscarLed(int Led){
  digitalWrite(Led, HIGH);//corrente positiva(liga)
  delay(UM_SEGUNDO);
  digitalWrite(Led, LOW);//corrente negativa(apaga)
  delay(MEIO_SEGUNDO);
}

//com este codigo, ao ligar em uma placa de arduino e realizar o  upload do codigo, ira piscar exibir o comportamento de piscar no led.
