int ledAceso = 0;
int led[3] = { 7, 6, 5};
        //     0   1  2
void setup() {
    pinMode(12, INPUT); //Botao Arduino
    pinMode(led[0], OUTPUT);
    pinMode(led[1], OUTPUT);
    pinMode(led[2], OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int valBotao = digitalRead(12); // Leitura do botao

    if (valBotao == 0) // Se botao igual a 0 execute abaixo
    {
      if (ledAceso == 0) 
      {
            int valorBotao = random(0,3); // Lampada aleatória
      		digitalWrite(led[valorBotao], HIGH);
      		digitalWrite(led[valorBotao], LOW);
      		delay(700);
      }
      else {
        digitalWrite(led[valBotao], LOW);
        delay(100);
        ledAceso = 0;
      }
    }
}
