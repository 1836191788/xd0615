void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
int i;
void loop()
{
  for(i=0;i<7;i++)
  {
  
  digitalWrite(i, HIGH);
  delay(600); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(600); // Wait for 1000 millisecond(s)
    
  }
}
