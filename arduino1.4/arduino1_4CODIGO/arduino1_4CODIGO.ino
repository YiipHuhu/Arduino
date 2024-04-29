#define LED_VERDE 2 
#define LED_AMARELO 3 
#define LED_VERMELHO 4 
#define LED_AZUL 5 

#define UM_SEGUNDO 1000
#define MEIO_SEGUNDO 500
#define TAMANHO_LUZES 4
  int sequenciaLuzes[TAMANHO_LUZES];
                        //0        , 1          , 2           , 3

void setup() { 
  IniciaPortas();  
  iniciaJogo();
}

void loop() {
  for(int i = 0; int < TAMANHO_LUZES, i++){
    PiscarLed(sequenciaLuzes[i]);
  }
}

void IniciaJogo(){ //define a posição dos leds no array
  sequenciaLuzes[0] = LED_VERDE;
  sequenciaLuzes[1] = LED_AMARELO;
  sequenciaLuzes[2] = LED_VERMELHO;
  sequenciaLuzes[3] = LED_AZUL;
}

void PiscarLed(int Led){ //define logica de como os leds irao se comportar
  digitalWrite(Led, HIGH);
  delay(UM_SEGUNDO);
  digitalWrite(Led, LOW);
  delay(MEIO_SEGUNDO);
}

void IniciaPortas(){ //define o comportamento de cada led como OUTPUT(saida)
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
}

//com este codigo, ao ligar em uma placa de arduino e realizar o  upload do codigo, ira piscar exibir o comportamento de piscar nos leds.