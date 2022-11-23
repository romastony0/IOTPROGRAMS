int buzzpin=5;
int touchpin=3;
int val;

void setup(){
  pinMode(touchpin,INPUT);
  pinMode(buzzpin,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  val=digitalRead(touchpin);
  if(val==HIGH){
    Serial.println("detected");
    tone(5,100,2000);
  }else{
    Serial.println(" Not detected");
  }
}
