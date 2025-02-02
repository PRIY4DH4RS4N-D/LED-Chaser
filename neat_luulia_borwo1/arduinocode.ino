const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

void setup() {
  for (int i = 0; i < 12; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 12; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100); 
    digitalWrite(ledPins[i], LOW);
  }

  delay(500); 
  for (int i = 11; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }

  delay(500);
  for (int i = 0; i < 12; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(500);
  for (int i = 0; i < 12; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
  for (int i = 0; i < 12; i++) {
    if (i % 2 == 0) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
  delay(500);
  for (int i = 0; i < 12; i++) {
    if (i % 2 == 0) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
  delay(500);
  for (int i = 0; i < 12; i++) {
    if (i % 2 != 0) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
  delay(500);
  for (int i = 0; i < 6; i++) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[11 - i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[11 - i], LOW);
  }
  delay(500);
  for (int i = 0; i < 6; i++) {
    digitalWrite(ledPins[5 - i], HIGH);
    digitalWrite(ledPins[6 + i], HIGH);
    delay(100);
    digitalWrite(ledPins[5 - i], LOW);
    digitalWrite(ledPins[6 + i], LOW);
  }
  delay(500);
  for (int i = 0; i < 12; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }

  delay(500);
  for (int i = 11; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }

  delay(500);
}
