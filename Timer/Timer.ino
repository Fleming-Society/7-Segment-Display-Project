//Set High to Light LED(s)
const int A_pin = 9;
const int B_pin = 8;
const int C_pin = 7;
const int D_pin = 6;
const int E_pin = 5;
const int F_pin = 4;
const int G_pin = 3;
const int Dp_pin = 2;

//Set Low to Select Digit
const int Dig_1_pin = 13;
const int Dig_2_pin = 12;
const int Dig_3_pin = 11;
const int Dig_4_pin = 10;

// Timer
unsigned long startMillis = 0;
unsigned long currentMillis = 0;
unsigned long startMillis_1 = 0;

int position = 1;
int number;
int delay_time = 500;

void setup() {
  // set pinMode:
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
}

void loop() {
  // Load Current Time
  currentMillis = millis();

  // Switch number
  if (currentMillis - startMillis_1 >= delay_time) {
    if (number == 9) {
      number = 0;
    }
    else {
      number ++;
    }
    startMillis_1 = currentMillis;
  }

  // Switch position
  if (currentMillis - startMillis >= 1) {
    if (position == 4) {
      position = 1;
    } else {
      position ++;
    }
    display_num (position, number);
    startMillis = currentMillis; 
  }
}


// Function for displaying numbers
void display_num(int pos, int num) {
  switch (num) {
    case 0:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, HIGH);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, LOW);
      digitalWrite(Dp_pin, LOW);
      break;

    case 1:
      digitalWrite(A_pin, LOW);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, LOW);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, LOW);
      digitalWrite(G_pin, LOW);
      digitalWrite(Dp_pin, LOW);
      break;

    case 2:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, LOW);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, HIGH);
      digitalWrite(F_pin, LOW);
      digitalWrite(G_pin, HIGH);
      digitalWrite(Dp_pin, LOW);
      break;

    case 3:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, LOW);
      digitalWrite(G_pin, HIGH);
      digitalWrite(Dp_pin, LOW);
      break;

    case 4:
      digitalWrite(A_pin, LOW);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, LOW);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, HIGH);
      digitalWrite(Dp_pin, LOW);
      break;

    case 5:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, LOW);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, HIGH);
      digitalWrite(Dp_pin, LOW);
      break;

    case 6:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, LOW);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, HIGH);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, HIGH);
      digitalWrite(Dp_pin, LOW);
      break;

    case 7:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, LOW);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, LOW);
      digitalWrite(G_pin, LOW);
      digitalWrite(Dp_pin, LOW);
      break;

    case 8:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, HIGH);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, HIGH);
      digitalWrite(Dp_pin, LOW);
      break;

    case 9:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, HIGH);
      digitalWrite(Dp_pin, LOW);
      break;
  }

  switch (pos) {
    case 1:
    digitalWrite(Dig_1_pin, LOW);
    digitalWrite(Dig_2_pin, HIGH);
    digitalWrite(Dig_3_pin, HIGH);
    digitalWrite(Dig_4_pin, HIGH);
      break;
    
    case 2:
    digitalWrite(Dig_1_pin, HIGH);
    digitalWrite(Dig_2_pin, LOW);
    digitalWrite(Dig_3_pin, HIGH);
    digitalWrite(Dig_4_pin, HIGH);
      break;

    case 3:
    digitalWrite(Dig_1_pin, HIGH);
    digitalWrite(Dig_2_pin, HIGH);
    digitalWrite(Dig_3_pin, LOW);
    digitalWrite(Dig_4_pin, HIGH);
      break;

    case 4:
    digitalWrite(Dig_1_pin, HIGH);
    digitalWrite(Dig_2_pin, HIGH);
    digitalWrite(Dig_3_pin, HIGH);
    digitalWrite(Dig_4_pin, LOW);
      break;
  }
}


