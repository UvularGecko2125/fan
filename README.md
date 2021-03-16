工作一<br>
功能:讓風扇逆時針旋轉 每隔五秒加速<br>
輸出腳:N3:GND N2: 6 N1: 5<br>
```C++
int void setup() {
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {

  
  analogWrite(5,80);
  analogWrite(6,0);
  delay(5000);

  analogWrite(5,110);
  analogWrite(6,0);
  delay(5000);

  analogWrite(5,180);
  analogWrite(6,0);
  delay(5000);

  analogWrite(5,250);
  analogWrite(6,0);
  delay(5000);

}
```
