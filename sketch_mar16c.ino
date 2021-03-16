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
