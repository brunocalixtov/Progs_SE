int alt = 0;
int anc = 0;
int lar = 0;
int res = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(" ");
  Serial.println("Ingrese alto del poligono:");
  while (Serial.available() == 0) {}
  alt = Serial.readString().toInt();
  Serial.println(alt);

  Serial.print("Ingrese ancho del poligono:");
  while (Serial.available() == 0) {}
  anc = Serial.readString().toInt();
  Serial.println(anc);
  
  Serial.print("Ingrese largo del poligono:");
  while (Serial.available() == 0) {}
  lar = Serial.readString().toInt();
  Serial.println(lar);

  res = alt * anc * lar;
  
  Serial.println("El resultado es: " + String(res));
      
  delay(100);

  alt = 0;
  anc = 0;
  lar = 0;
}
