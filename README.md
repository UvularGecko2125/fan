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
工作二<br>
功能:讓風扇逆時針旋轉 按按鈕來加速或減速<br>
輸出腳:N3:GND N2: 6 N1: 5 按鈕一: 4 按鈕二: 3<br>
```C++
int i = 110;
void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(4,INPUT);
pinMode(3,INPUT);

}
void motor(int i)
{
  analogWrite(5,i);
  analogWrite(6,0);
  
}

void loop() {

if(digitalRead(4)==LOW )
{
  while(digitalRead(4)==LOW )
    i = i +48;
}
if(digitalRead(3)==LOW )
{
  while(digitalRead(3)==LOW )
    i = i -48;
}
if(i>=254)
{ 
  i=255; 
}
if(i<=109)
{
  i=110;
}
motor(i);

}
```
