
void setup()
{
  for (int i = 2; i<6; i++)
  pinMode(i, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 for (int i = 2; i<6; i++)
  digitalWrite(i, LOW);
  
  indicator();
}
void indicator()
{ 
  int sensor_input = analogRead(A0);
  Serial.println(sensor_input);
  
  if (sensor_input >= 35 )
  { digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
   
  }
  else if ( sensor_input > 20 )
  {
    digitalWrite(3,HIGH);
  }
  
  else
  {
    digitalWrite(2,HIGH);
  }  
  delay(10);
}