bool btn;
int btnPressed = -1;
bool alreadyPressed = false;
int count = 0;
int greenToggle = -1;

void setup()
{
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(6, INPUT);
    pinMode(13, OUTPUT);
    Serial.begin(9600);
}

void loop(){
  // toggle Yellow LED
  toggleYellowLED();

  btn = digitalRead(6);
  
  if (btn){
    if (!alreadyPressed){
      btnPressed = btnPressed * -1;
      alreadyPressed = true;
    }
  }else{
    alreadyPressed = false;
  }
  
  //toggle LEDs
  
  if (btnPressed == 1){
    digitalWrite(13, HIGH);
  }else if (btnPressed == -1){
    digitalWrite(13, LOW);
  }
  
  delay(200);
}

void toggleYellowLED(){
  count++;
  if (count % 2 == 0){
    greenToggle *= -1;
    if (greenToggle == 1){
      digitalWrite(2, HIGH);
    }else{
      digitalWrite(2, LOW);
    }
  }
}
