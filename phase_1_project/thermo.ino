int i = 0;
void setup()
{ Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{ int a = analogRead(A5);
  unsigned long StartTime = millis();
  digitalWrite(2,LOW);
  while(a > 180){
  digitalWrite(2,HIGH);
  a = analogRead(A5);
  //Serial.println(a);
  unsigned long EndTime = millis();
  //delayMicroseconds(1);
  Serial.println(EndTime);
  if(EndTime - StartTime > 100)
  { digitalWrite(2,LOW);
    while(a > 180){
    a = analogRead(A5);
    digitalWrite(5,HIGH);
    delay(400);
    digitalWrite(5,LOW);
    delay(400);
   }
  }
  }}