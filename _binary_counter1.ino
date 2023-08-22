// C++ code
//

byte pins[5]={2,3,4,5,6};
byte x=0;
byte i =0;

void setup()
{
 for(int j=0;j<=4;j++)
 
 pinMode(pins[j],OUTPUT);
 
  
}


void loop()
{
  for ( x=0;x<32;x++)
  {
  for( i =0;i<=4;i++)
  {
  digitalWrite(pins[i],x&1<<i);
  }
    delay(1000);
  }
 
}