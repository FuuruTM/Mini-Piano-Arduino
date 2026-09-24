int nada[] = {1, 2, 3};
int led[] = {5, 6, 7, 8, 9, 10, 12, 13};

void setup() {
  for(int i = 0; i < 8; i++) {
    pinMode(led[i], OUTPUT);
  }
  for(int i = 0; i < 3; i++) {
    pinMode(nada[i], INPUT_PULLUP);
  }
  pinMode(A5, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A0, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(A5) == LOW) {
    digitalWrite(5, HIGH);
    delay(350);
    not1();
    delay(350);
    noTone(A2);
    digitalWrite(5, LOW);
    delay(15);
  }
  if(digitalRead(A4) == LOW) {
    digitalWrite(6, HIGH);
    delay(350);
    tone(A2, 294);
    tone(4, 294);
    delay(350);
    noTone(A2);
    digitalWrite(6, LOW);
    delay(15);
  }
  if(digitalRead(A3) == LOW) {
    digitalWrite(7, HIGH);
    delay(350);
    tone(A2, 330);
    delay(350);
    noTone(A2);
    digitalWrite(7, LOW);
    delay(15);
  }
   if(digitalRead(A1) == LOW) {
    digitalWrite(8, HIGH);
    delay(350);
    tone(A2, 349);
    delay(350);
    noTone(A2);
    digitalWrite(8, LOW);
    delay(15);
  }
   if(digitalRead(A0) == LOW) {
    digitalWrite(9, HIGH);
    delay(350);
    tone(A2, 392);
    delay(350);
    noTone(A2);
    digitalWrite(9, LOW);
    delay(15);
  }
   if(digitalRead(1) == LOW) {
    digitalWrite(10, HIGH);
    delay(350);
    tone(A2, 440);
    delay(350);
    noTone(A2);
    digitalWrite(10, LOW);
    delay(15);
  }
   if(digitalRead(2) == LOW) {
    digitalWrite(12, HIGH);
    delay(350);
    tone(A2, 494);
    delay(350);
    noTone(A2);
    digitalWrite(12, LOW);
    delay(15);
  }
  if(digitalRead(3) == LOW) {
    digitalWrite(13, HIGH);
    delay(350);
    tone(A2, 523);
    delay(350);
    noTone(A2);
    digitalWrite(13, LOW);
    delay(15);
  }
}
