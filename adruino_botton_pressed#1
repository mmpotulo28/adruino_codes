bool btn;
int btnPressed = -1;
bool alreadyPressed = false;
  
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop()
{
  btn = digitalRead(6);
  
  if(btn){
    if(!alreadyPressed){
    	btnPressed = btnPressed * -1;
    	alreadyPressed = true;
   	}
  }else{
    alreadyPressed = false;
  }
    
    
  
  
  
  if(btnPressed == 1){
    Serial.println("ON");
    digitalWrite(13, HIGH);
  } else if(btnPressed == -1){
    Serial.println("OFF");
    digitalWrite(13, LOW);
  }
  
  delay(200);
}
