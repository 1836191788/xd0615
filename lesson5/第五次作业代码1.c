byte a=0; 
void setup()
{
  pinMode (2,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
}
void loop()
{
  if (Serial.available()>0)
   {
     a=Serial.read();
     a=a-'0';
     digitalWrite(2,a&0x1);
     digitalWrite(3,(a>>1)&0x1);
     digitalWrite(4,(a>>2)&0x1);
     digitalWrite(5,(a>>3)&0x1);
  	 delay(10);
   }
}

