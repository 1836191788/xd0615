
byte in1;
byte in2;
byte in3;
byte in4;

#define LT 6
#define BT 7

void setup()
{
  pinMode(2, OUTPUT);//输入1
  pinMode(3, OUTPUT);//输入2
  pinMode(4, OUTPUT);//输入3
  pinMode(5, OUTPUT);//输入4
  pinMode(8, OUTPUT);//片选1
  pinMode(9, OUTPUT);//片选2
  pinMode(10, OUTPUT);//片选3
  pinMode(11, OUTPUT);//片选4
  
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  Serial.begin(9600);
}


void loop()
{	
 
		in1=Serial.read();
		in1=in1-'0';
	    
		in2=Serial.read();
		in2=in2-'0';
	 
		in3=Serial.read();
		in3=in3-'0';
 	
		in4=Serial.read();
		in4=in4-'0';

	 digitalWrite(8,LOW);		

     digitalWrite(2,in1&0x1);
     digitalWrite(3,(in1>>1)&0x1);
     digitalWrite(4,(in1>>2)&0x1);
     digitalWrite(5,(in1>>3)&0x1);
    digitalWrite(8,HIGH);
  	 delay(10);
  	 

     digitalWrite(9,LOW);
     digitalWrite(2,in2&0x1);
     digitalWrite(3,(in2>>1)&0x1);
     digitalWrite(4,(in2>>2)&0x1);
     digitalWrite(5,(in2>>3)&0x1);
    digitalWrite(9,HIGH);
  	 delay(10);
  	 
    
     digitalWrite(10,LOW);
    
     digitalWrite(2,in3&0x1);
     digitalWrite(3,(in3>>1)&0x1);
     digitalWrite(4,(in3>>2)&0x1);
     digitalWrite(5,(in3>>3)&0x1);
    digitalWrite(10,HIGH);
  	 delay(10);
    
  	  digitalWrite(11,LOW);
     
     digitalWrite(2,in4&0x1);
     digitalWrite(3,(in4>>1)&0x1);
     digitalWrite(4,(in4>>2)&0x1);
     digitalWrite(5,(in4>>3)&0x1);
    digitalWrite(11,HIGH);
  	 delay(10);

}
