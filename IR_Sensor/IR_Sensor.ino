int irPin = 3;
int detection;

int led = 2;

void setup() {
  Serial.begin(9600); 
  pinMode(irPin, INPUT); 
  pinMode(led, OUTPUT);
}

void loop() { 
  detection = digitalRead(irPin);

  if(detection == LOW){
    digitalWrite(led, HIGH);
    Serial.print("There is an obstacle!\n");
  }else{
    digitalWrite(led, LOW); 
    Serial.print("No obstacle!\n");

  }
  delay(500);
}
