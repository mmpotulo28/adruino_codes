bool btn;
int btnPressed = -1;
bool alreadyPressed = false;
int count = 0;
bool redToggle = false;
bool yellowToggle = false;

void setup()
{
    pinMode(2, OUTPUT);
    pinMode(13, OUTPUT);
    Serial.begin(9600);
}

void loop(){
  // toggle Yellow LED
  count++;
  toggleYellowLED(count);
  toogleRedLED(count);

  delay(200);
}

void toggleYellowLED(int count){
  if(count %2 == 0){
    yellowToggle = !yellowToggle;
    digitalWrite(2, yellowToggle);
  }
}

void toogleRedLED(int count){
  if(count % 4 == 0){
    redToggle = !redToggle;
    digitalWrite(13, redToggle);
  }
  
}
