//This might work for another microphone project that uses an LED. It uses
//the same setup that the micrphone detecting sound uses but you just need to ass an LED in pin 13.
// It works half the time but this could be useful for us jsut so we can understand the Microphone more
// but Im not sure if we will actually use it.
int soundPin = A0;
int LED = 13;
 
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}
 
void loop()
{
    long sum = 0;
    for(int i=0; i<100; i++)
    {
       sum += analogRead(soundPin);
    }
 
    sum = sum/100;
 
    if(sum > 600){
      digitalWrite(LED, HIGH);
    }else{
      digitalWrite(LED, LOW);
    }
 
    Serial.println(sum);
    delay(10);
}
