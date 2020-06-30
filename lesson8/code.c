void setup() {
  Serial.begin(9600);//串口监视器输出必要条件 
  
  pinMode(2, INPUT_PULLUP);//配置pin2为输入，启用内部上拉电阻
  pinMode(13, OUTPUT);//配置pin3为输出 

}

void loop() {
  
  int sensorVal = digitalRead(2);//将按钮值读入变量

  Serial.println(sensorVal);  //在串行监视器上输出按钮的值 

  //按下按钮使pin2与pin13电势差相等 ，以下功能使两个端口能保持电势差 
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}
