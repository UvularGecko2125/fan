float a = millis();
int x
void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

}

void loop() {

float b = millis();

if((b-a) = 5000)
{
  x = x +20;
  a=b;
}

if(x>=254)x=110
{
 analogWrite(5,x);
  analogWrite(6,0);
}

 /* analogWrite(5,90);
  analogWrite(6,0);
  delay(5000);
  
  analogWrite(5,110);
  analogWrite(6,0);
  delay(5000);

  analogWrite(5,130);
  analogWrite(6,0);

  delay(5000);

  analogWrite(5,160);
  analogWrite(6,0);

  delay(5000);

  analogWrite(5,210);
  analogWrite(6,0);
  delay(5000);

  analogWrite(5,260);
  analogWrite(6,0);
  delay(5000);

  analogWrite(5,0);
  analogWrite(6,0);
  delay(5000);*/


}
