int Led = 13 ; 
int touchpin = 3; 
int val ; 

void setup (){
  Serial.begin(9600);
  pinMode (Led, OUTPUT) ; 
  pinMode (touchpin, INPUT) ; 
}

void loop (){
  val = digitalRead (touchpin) ; 
  if (val == HIGH) {
    digitalWrite (Led, HIGH);
    Serial.print("Touch Sensor Status:");
    Serial.println("1");
    delay(1000);
  }else{
    digitalWrite (Led, LOW);
    Serial.print("Touch Sensor Status:");
    Serial.println("0");
    delay(1000);
  }
}
