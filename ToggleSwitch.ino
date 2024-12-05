byte pushButtonPin=2;
byte led=3;
int flag=0;

void setup() {
  Serial.begin(9600);
  pinMode(pushButtonPin, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop(){
  bool push_button_pin_state = digitalRead(pushButtonPin);
  if(push_button_pin_state==0){
    if(flag==0){
      digitalWrite(led, HIGH);
      flag=1;
      delay(250);
    }else if(flag==1){
      digitalWrite(led, LOW);
      flag=0;
      delay(250);      
    } 
  }
  else{
    // Don't care!
  }
  Serial.print("Flag: ");
  Serial.println(flag);
}

