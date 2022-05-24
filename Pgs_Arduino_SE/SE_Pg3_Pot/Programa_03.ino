
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.println("Ingrese numero:");
}

int x = 0;
int pot = 0;
String cont;

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(" ");
  Serial.println("Ingrese numero:");
  while (Serial.available() == 0) {}
  x = Serial.readString().toInt();
  Serial.println(x);

  Serial.print("Ingrese potencia:");
  while (Serial.available() == 0) {}
  pot = Serial.readString().toInt();
  Serial.println(pot);

  cont = pow(x, pot);
  Serial.print(x);
  Serial.print(" elevado a la potencia ");
  Serial.print(pot);
  Serial.print(" es igual a ");
  Serial.println(cont);
  
  x = 0;
  pot = 0;

}
