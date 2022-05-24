int leds [5] = {2, 3, 4, 5, 6};
int puls [5] = {9, 10, 11, 12, 13};

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
    pinMode(puls[i], INPUT);
  }

  Serial.begin(9600);
}
int opc = -1;
void loop() {
  opc = -1;

  Check();
  
  switch (opc) {
    case 0:
      digitalWrite(leds[0], HIGH);
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], LOW);
      break;
    case 1:
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[1], HIGH);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], LOW);
      break;
    case 2:
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], HIGH);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], LOW);
      break;
    case 3:
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], HIGH);
      digitalWrite(leds[4], LOW);
      break;
    case 4:
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], HIGH);
      break;
    default:
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], LOW);
  }

  Serial.println("led encendido: " + String(opc+1));

  delay(100);
}

void Check(){
  for (int i = 0; i < 5; i++) {
    if(digitalRead(puls[i]) == LOW){
      opc = i;
    }
  }  
}
