//Set Low to Light LED(s)
const int A_pin = 7;
const int B_pin = 6;
const int C_pin = 5;
const int D_pin = 4;
const int E_pin = 3;
const int F_pin = 2;
const int G_pin = 1;
const int Dp_pin = 0;

//Set High to Select Digit
const int Dig_1_pin = 13;
const int Dig_2_pin = 12;
const int Dig_3_pin = 9;
const int Dig_4_pin = 8;

//Push Button
const int button_1_pin = 11;
const int button_2_pin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(A_pin, OUTPUT);
  pinMode(B_pin, OUTPUT);
  pinMode(C_pin, OUTPUT);
  pinMode(D_pin, OUTPUT);
  pinMode(E_pin, OUTPUT);
  pinMode(F_pin, OUTPUT);
  pinMode(G_pin, OUTPUT);
  pinMode(Dp_pin, OUTPUT);
  pinMode(Dig_1_pin, OUTPUT);
  pinMode(Dig_2_pin, OUTPUT);
  pinMode(Dig_3_pin, OUTPUT);
  pinMode(Dig_4_pin, OUTPUT);
  pinMode(button_1_pin, INPUT);
  pinMode(button_2_pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Dig_1_pin, HIGH);
  digitalWrite(A_pin, HIGH);
  digitalWrite(B_pin, LOW);
  digitalWrite(C_pin, LOW);
  digitalWrite(D_pin, HIGH);
  digitalWrite(E_pin, HIGH);
  digitalWrite(F_pin, HIGH);
  digitalWrite(G_pin, HIGH);
  digitalWrite(Dp_pin, HIGH);
  delay(1);
  digitalWrite(Dig_1_pin, LOW);
  
  digitalWrite(Dig_2_pin, HIGH);
  digitalWrite(A_pin, LOW);
  digitalWrite(B_pin, LOW);
  digitalWrite(C_pin, HIGH);
  digitalWrite(D_pin, LOW);
  digitalWrite(E_pin, LOW);
  digitalWrite(F_pin, HIGH);
  digitalWrite(G_pin, LOW);
  digitalWrite(Dp_pin, LOW);
  delay(1);
  digitalWrite(Dig_2_pin, LOW);

  digitalWrite(Dig_3_pin, HIGH);
  digitalWrite(A_pin, LOW);
  digitalWrite(B_pin, LOW);
  digitalWrite(C_pin, HIGH);
  digitalWrite(D_pin, LOW);
  digitalWrite(E_pin, LOW);
  digitalWrite(F_pin, HIGH);
  digitalWrite(G_pin, LOW);
  digitalWrite(Dp_pin, HIGH);
  delay(1);
  digitalWrite(Dig_3_pin, LOW);

  digitalWrite(Dig_4_pin, HIGH);
  digitalWrite(A_pin, LOW);
  digitalWrite(B_pin, HIGH);
  digitalWrite(C_pin, LOW);
  digitalWrite(D_pin, LOW);
  digitalWrite(E_pin, HIGH);
  digitalWrite(F_pin, LOW);
  digitalWrite(G_pin, LOW);
  digitalWrite(Dp_pin, HIGH);
  delay(1);
  digitalWrite(Dig_4_pin, LOW);
}
