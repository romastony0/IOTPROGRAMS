const int enB = 2;
const int in3 = 8;
const int in4 = 9;

void setup(){  
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop(){
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(enB, 255);
  
  delay(3000);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH); 
  delay(1000);

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 
  delay(3000);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);
  delay(1000);
}
