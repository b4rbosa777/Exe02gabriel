int pot = A0;  
int bits = 0;     
int led = 3;         

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  pot = analogRead(pot);  

 
  int brightness = map(pot, 0, 1023, 0, 255);

  
  for (int i = 0; i <= brightness; i++) {
    analogWrite(led, i);
    delay(10); 

  
  for (int i = brightness; i >= 0; i--) {
    analogWrite(led, i);
    delay(10); 
  }
}