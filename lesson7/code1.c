 #include <MsTimer2.h>
 int tick=0;
  byte a=0;
 void mytimer()
 {
 	a=tick;
    digitalWrite(8,HIGH);
    digitalWrite(1,a&0x1);
    digitalWrite(3,(a>>1)&0x1);
    digitalWrite(4,(a>>2)&0x1);
    digitalWrite(5,(a>>3)&0x1);
    digitalWrite(8,LOW);
    if(tick==9)
      tick=-1;
 	tick++;
	 
 }

void setup()
{
  pinMode (1,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (8,OUTPUT);
  digitalWrite(8,LOW);
  pinMode(6,OUTPUT);//²âÊÔ
  pinMode(7,OUTPUT);//ÏûÒþ
  
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  MsTimer2::set(1000,mytimer);
  MsTimer2::start();
}
void loop()
{
  
}
