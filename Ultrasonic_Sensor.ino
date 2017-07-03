  int LED =13;
  int BUZZ=12;
 
 void setup() {
  Serial.begin(115200);
  pinMode(6,OUTPUT);
  pinMode(3,INPUT);
  pinMode(LED,OUTPUT);
  pinMode(BUZZ,OUTPUT);
}

void loop()
{
  float de, dt;
  digitalWrite(6,LOW);
  delayMicroseconds(2);
  digitalWrite(6,HIGH);
  delayMicroseconds(10);
  digitalWrite(6,LOW);
  de = pulseIn(3,HIGH);

  dt=(de/2)/28.57;

  if(dt<15)
  {
    Serial.print("Object is at ");
    Serial.print(dt);
    Serial.println(" cm");
    digitalWrite(LED,HIGH);
    digitalWrite(BUZZ,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
    digitalWrite(BUZZ,LOW);
  }

}
