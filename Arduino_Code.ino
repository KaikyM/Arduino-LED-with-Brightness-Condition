// C++ code
int brightness = 0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  brightness = analogRead(A0);
  // Brightness Condition(0 to 100)
  // Modify the photoresistor to see
  if(brightness < 85) {
   digitalWrite(LED_BUILTIN,HIGH); 
  } else {
   digitalWrite(LED_BUILTIN,LOW); 
  }
}
