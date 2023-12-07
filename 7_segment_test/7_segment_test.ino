//Set High to Light LED(s)
// Define input pins
#define A_pin     4
#define B_pin     2
#define C_pin     5
#define D_pin     7
#define E_pin     8
#define F_pin     6
#define G_pin     3
#define Dp_pin    9

// Set Low to Select Digit
#define Dig_1_pin 13
#define Dig_2_pin 12
#define Dig_3_pin 11
#define Dig_4_pin 10

// Set analogRead pin
#define analog_pin A1

// Variables for temperature measurement
unsigned int R_1 = 10000;

// Timer
unsigned long startMillis = 0;
unsigned long currentMillis = 0;
unsigned long startMillis_1 = 0;

int position = 1;
int number;
const int T_refresh_period = 250;  // Refresh period of temperature measurement

// split temperature into 4 digits (Most significant 4 digits)
byte digit_1;
byte digit_2;
byte digit_3;
byte digit_4;

// 3.3V
double VCC = 3.24;

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

  muxDelay = map(analogRead(A1), 0, 1023, 0, 50);
  // Serial.println(analogRead(A1));

    // Load Current Time
    currentMillis = millis();

    // Switch number
    if (currentMillis - startMillis_1 >= delay_time) {
      if (number == 9) {
        number = 0;
      } else {
        number++;
      }
      startMillis_1 = currentMillis;
    }

    // Switch position
    if (currentMillis - startMillis >= muxDelay) {
      if (position == 4) {
        position = 1;
      } else {
        position++;
      }
      display_num(position, number);
      startMillis = currentMillis;
    }
  }

// Function to measure temperature and split the temperature number into 4 most signigicant digits.
void measure_temperature() {
  int t; double T; double V_2; double R_2;
  V_2 = VCC / 4096 * analogRead(analog_pin);
  R_2 = (R_1 * V_2) / (VCC - V_2);
  T = 1 / (3.354016e-3 + 2.569850e-4 * log(R_2 / 10000) + pow(2.620131e-6 * log(R_2 / 10000), 2) + pow(6.383091e-8 * log(R_2 / 10000), 3)) - 273.15;

  // Split the number into digits
  t = T * 100;
  digit_4 = t % 10;
  t = t / 10;
  digit_3 = t % 10;
  t = t / 10;
  digit_2 = t % 10;
  t = t / 10;
  digit_1 = t % 10;
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
      break;

    case 1:
      digitalWrite(A_pin, LOW);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, LOW);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, LOW);
      digitalWrite(G_pin, LOW);
      break;

    case 2:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, LOW);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, HIGH);
      digitalWrite(F_pin, LOW);
      digitalWrite(G_pin, HIGH);
      break;

    case 3:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, LOW);
      digitalWrite(G_pin, HIGH);
      break;

    case 4:
      digitalWrite(A_pin, LOW);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, LOW);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, HIGH);
      break;

    case 5:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, LOW);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, HIGH);
      break;

    case 6:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, LOW);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, HIGH);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, HIGH);
      break;

    case 7:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, LOW);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, LOW);
      digitalWrite(G_pin, LOW);
      break;

    case 8:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, HIGH);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, HIGH);
      break;

    case 9:
      digitalWrite(A_pin, HIGH);
      digitalWrite(B_pin, HIGH);
      digitalWrite(C_pin, HIGH);
      digitalWrite(D_pin, HIGH);
      digitalWrite(E_pin, LOW);
      digitalWrite(F_pin, HIGH);
      digitalWrite(G_pin, HIGH);
      break;
  }

  switch (pos) {
    case 1:
    digitalWrite(Dig_1_pin, LOW);
    digitalWrite(Dig_2_pin, HIGH);
    digitalWrite(Dig_3_pin, HIGH);
    digitalWrite(Dig_4_pin, HIGH);
    digitalWrite(Dp_pin, LOW);
      break;
    
    case 2:
    digitalWrite(Dig_1_pin, HIGH);
    digitalWrite(Dig_2_pin, LOW);
    digitalWrite(Dig_3_pin, HIGH);
    digitalWrite(Dig_4_pin, HIGH);
    digitalWrite(Dp_pin, HIGH);
      break;

    case 3:
    digitalWrite(Dig_1_pin, HIGH);
    digitalWrite(Dig_2_pin, HIGH);
    digitalWrite(Dig_3_pin, LOW);
    digitalWrite(Dig_4_pin, HIGH);
    digitalWrite(Dp_pin, LOW);
      break;

    case 4:
    digitalWrite(Dig_1_pin, HIGH);
    digitalWrite(Dig_2_pin, HIGH);
    digitalWrite(Dig_3_pin, HIGH);
    digitalWrite(Dig_4_pin, LOW);
    digitalWrite(Dp_pin, LOW);
      break;
  }
}