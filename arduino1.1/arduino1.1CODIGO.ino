//int ledVermelho = 2;
#define LED_VERMELHO 2 //define que a porta 2 é o led vermelho
#define UM_SEGUNDO 1000 //valores em milisegundos
#define MEIO_SEGUNDO 500
void setup() {
  // put your setup code here, to run once:
  // coloque seu codigo aqui, para executar uma vez:
  pinMode(LED_VERMELHO, OUTPUT);
  Serial.begin(9600);//função de monitoramento com intervalo de 9600
}

void loop() {
  // put your main code here, to run repeatedly:
  // coloque seu codigo aqui, para executar repetidamente:
  Serial.println(LED_VERMELHO);//analisa a saida de valor do led vermelho
  
  digitalWrite(LED_VERMELHO, HIGH);//corrente positiva(liga)
  //digitalWrite(2, 1);
  delay(1000); //em milisegundos
  digitalWrite(LED_VERMELHO, LOW);//corrente negativa(apaga)
  //digitalWrite(2, 0);
  delay(MEIO_SEGUNDO);
}

//com este codigo, ao ligar em uma placa de arduino e realizar o  upload do codigo, ira piscar exibir o comportamento de piscar no led.