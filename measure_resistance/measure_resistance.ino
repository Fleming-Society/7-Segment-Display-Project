// Note: float and double are both 4bit for ATMEGA boards. Precision cannot be further improved

int analog_pin = A0;  // Pin used
unsigned long R_1 = 1000; // ***EDIT*** , R_1 value
float R;  // Float variable for storing resistance
float V_2;  // Float variable for storing analogRead() values

void setup() {
  // Start Serial Communication
  Serial.begin(9600);
}

void loop() {
  V_2 = 0.0048828125 * analogRead(analog_pin);
  R = (R_1 * V_2) / (5 - V_2);
  Serial.println(R);
  delay(1000);
}
