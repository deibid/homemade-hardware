
int pitch = 262;
int potValue = 0;

int button = 3;
int pot = A0;
int buzzer = 4;


void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(buzzer,OUTPUT); 
}

void loop() {

  if(!digitalRead(button)){
      potValue = analogRead(pot)/4;
      pitch = map(potValue,0,255,400,700);
      tone(buzzer,pitch);
  }else{
    noTone();
  }

}
