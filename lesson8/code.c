void setup() {
  Serial.begin(9600);//���ڼ����������Ҫ���� 
  
  pinMode(2, INPUT_PULLUP);//����pin2Ϊ���룬�����ڲ���������
  pinMode(13, OUTPUT);//����pin3Ϊ��� 

}

void loop() {
  
  int sensorVal = digitalRead(2);//����ťֵ�������

  Serial.println(sensorVal);  //�ڴ��м������������ť��ֵ 

  //���°�ťʹpin2��pin13���Ʋ���� �����¹���ʹ�����˿��ܱ��ֵ��Ʋ� 
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}
