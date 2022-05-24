int leds [8] = {6, 7, 8, 9, 10, 11, 12, 13};

void setup() {
  for(int i = 0; i < 0; i++){
    pinMode(leds[i],OUTPUT);
  }

  Serial.begin(9600);
}

int v, vNueva;
void loop() {
  // put your main code here, to run repeatedly:
  //10 bits de resolucion, 5v de referencia, ADC => 0 - 1023

  v = analogRead(A0);

  vNueva = map(v, 0, 1023, 0, 7);
  //v = valor a mapear
  //0 = lim inferior intervalo origen
  //1023 = lim sup intervalo origen
  //0 = lim inf intervalo destino
  //7 = lim sup intervalo destino
  
  Serial.println("valor leido: " + String(v));

  delay(100);
}
