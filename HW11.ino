void setup() {

  pinMode(2, OUTPUT);   
  pinMode(4, OUTPUT);   
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT);  
  pinMode(11, OUTPUT);  
  pinMode(12, OUTPUT); 
}

void loop() {
  unsigned long elapsedMillis = millis();

  unsigned int seconds = (elapsedMillis / 1000) % 60;

  analogWrite(2,  (seconds % 2  < 1) ? 255 : 0);   // blink 1s
  analogWrite(4,  (seconds % 6  < 3) ? 255 : 0);  // blink 3s
  analogWrite(9,  (seconds % 10  < 5) ? 255 : 0);  // blink 5s
  analogWrite(10, (seconds >= 15) ? 255 : 0);  // light since 15s
  analogWrite(11, (seconds >= 30) ? 255 : 0);  // light since 30s
  analogWrite(12, (seconds >= 45) ? 255 : 0);// light since 45s

  delay(10);
}
