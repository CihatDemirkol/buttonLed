
int button=8;
int led=10;
int buttonDurum=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonDurum=digitalRead(button);
  if(buttonDurum==1)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
