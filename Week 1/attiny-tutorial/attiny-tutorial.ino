int button = 2;
int red = 4;
int yellow = 3;
int green = 5;

int counter = 0;
boolean lastButtonState = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT_PULLUP);

  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);



}

void loop() {


  if(digitalRead(button)){
    lights(true,true,true);
  }





//  if (!digitalRead(button) && !lastButtonState) {
//    counter++;
//    if (counter >= 4) counter = 0;
//    lastButtonState = true;
//  }
//
//  if (digitalRead(button)) {
//    lastButtonState = false;
//  }
//
//
//  switch (counter) {
//    case 0:
//      lights(false, false, false);
//      break;
//    case 1:
//      lights(true, false, false);
//      break;
//    case 2:
//      lights(true, true, false);
//      break;
//    case 3:
//      lights(true, true, true);
//      break;
//  }
//
//
//
//  //  // put your main code here, to run repeatedly:
//  //  digitalWrite(3, HIGH);
//  //  delay(500);
//  //  digitalWrite(3, LOW);
//  //  delay(500);

}



void lights(bool greenState, bool yellowState, bool redState) {
  digitalWrite(green, greenState);
  digitalWrite(yellow, yellowState);
  digitalWrite(red, redState);

}
