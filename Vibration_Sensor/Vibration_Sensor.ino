int ledPin = 13;
int vib= A4;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(vib, INPUT); //set EP input for measurment
  Serial.begin(9600); //init serial 9600
}

void loop(){
  long measurement= pulseIn(vib, HIGH);
  delayMicroseconds(50);
  Serial.print(" VIB : 00001 : hertz :" );
  Serial.println(measurement);
 
  if (measurement > 10){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW); 
  }
}
