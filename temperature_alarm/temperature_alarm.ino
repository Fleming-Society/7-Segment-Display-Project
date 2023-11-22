const int analog_pin = A0;
const int red_LED = 11;
const int green_LED = 10;

double V_2;
unsigned int R_1 = 10000;
double R_2;
double T;
int T_set = 25;

void setup() {
  Serial.begin(9600);
  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
}

void loop() {
  V_2 = 0.0048828125 * analogRead(analog_pin);
  R_2 = (R_1 * V_2) / (5 - V_2);
  T = 1 / (3.354016e-3 + 2.569850e-4 * log(R_2 / 10000) + pow(2.620131e-6 * log(R_2 / 10000), 2) + pow(6.383091e-8 * log(R_2 / 10000), 3)) - 273.15;
  Serial.print(T);
  Serial.println("°C");

  if (T > T_set) {
    digitalWrite(red_LED, HIGH);
    digitalWrite(green_LED, LOW);
  }
  else {
    digitalWrite(red_LED, LOW);
    digitalWrite(green_LED, HIGH);
  }

}
