

unsigned long previousMillis = 0;
const long interval = 1000; 


LEDs meuLED01(5, 0.1);
LEDs meuLED02(6, 1);


void setup() {
  //Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  meuLED01.atualizar();
  meuLED02.atualizar();

    unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    meuLED01.modificafrequencia();

  }

}
