int ButtonValue = 0;
int Button = 3;
int LED = 2;

// C++ code
//
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT);
  
}

void loop()
{
  ButtonValue = digitalRead(Button);
  if (ButtonValue != 0){
    digitalWrite(LED, HIGH);
 
  }

 else 
 {
  digitalWrite(LED, LOW);
 }
  

}
