#define LED_VERDE 2 
#define LED_AMARELO 3 
#define LED_VERMELHO 4 
#define LED_AZUL 5 

#define UM_SEGUNDO 1000
#define MEIO_SEGUNDO 500
void setup() { //define o comportamento de cada led como OUTPUT(saida)
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
}D

void loop() { //executa os metodos em loop
  Sequencia1();
  Sequencia2();
}

void Sequencia1(){ //define a 1° ordem que os leds irao exibir o comportamento de PiscarLed()
  PiscarLed(LED_VERDE);
  PiscarLed(LED_AMARELO);
  PiscarLed(LED_VERMELHO);
  PiscarLed(LED_AZUL);
}

void Sequencia2(){ //define a 2° ordem que os leds irao exibir o comportamento de PiscarLed()
  PiscarLed(LED_VERMELHO);
  PiscarLed(LED_AZUL);
  PiscarLed(LED_VERDE);
  PiscarLed(LED_AMARELO);
}

void PiscarLed(int Led){ //define logica de como os leds irao se comportar
  digitalWrite(Led, HIGH);
  delay(UM_SEGUNDO);
  digitalWrite(Led, LOW);
  delay(MEIO_SEGUNDO);
}

//com este codigo, ao ligar em uma placa de arduino e realizar o  upload do codigo, ira piscar exibir o comportamento de piscar nos leds.