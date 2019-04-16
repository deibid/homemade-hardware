int leds = 0;
int pot = A2;

void setup() {

  pinMode(leds, OUTPUT);

}

void loop() {

  //flip the orientation of the pot. 
  int input = abs(1023 - analogRead(pot));

  if (input < 20) {
    digitalWrite(leds, LOW);
  }

  if (input > 21 && input < (1023 / 2) + 10) {
    int intensity = map(input, 21, 1023 / 2, 0, 255);
    analogWrite(leds, intensity);
  }

  if (input > (1023 / 2) + 10) {
    int rate = map(input, 1023 / 2, 1023, 1000, 50);
    digitalWrite(leds, HIGH);
    delay(rate / 2);
    digitalWrite(leds, LOW);
    delay(rate / 2);
  }

}
