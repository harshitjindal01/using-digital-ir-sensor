int op=7;
int hasobstacle=LOW;
void setup()

{
  pinMode(7,INPUT);
  Serial.begin(9600);
}
void loop()
{
  hasobstacle=digitalRead(op);
  if(hasobstacle==HIGH)
  {
    Serial.println("something ahead");
    digitalWrite(13,HIGH);
    delay(500);
  }
  else
  {
    Serial.println("path clear");

    digitalWrite(13,LOW);
    delay(500);
  }
  delay(100);
  }

