#define LED_VERMELHO 2
#define BOTAO_VERMELHO 10

#define UM_SEGUNDO 1000

void setup() { 
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(BOTAO_VERMELHO, INPUT_PULLUP);//adicionando INPUT_PULLUP, nao é necessario utilizar
//nenhum resistor para controlar a passagem de energia pois o proprio arduino faz o processo internamente.
  digitalWrite(LED_VERMELHO, HIGH);
  delay(UM_SEGUNDO);
  digitalWrite(LED_VERMELHO, HIGH);
}

void loop() {

}

//com este codigo, ao ligar em uma placa de arduino e realizar o  upload do codigo, ira piscar exibir o comportamento de piscar nos leds.