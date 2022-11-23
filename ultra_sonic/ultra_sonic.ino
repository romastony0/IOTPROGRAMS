int trigPin = 6;
int echoPin = 4;

int led = 3;

long duration;

int distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(trigPin, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034/2;

  if(distance <= 30){
    digitalWrite(led, HIGH);
    // tone(led, HIGH);
  }else{
    digitalWrite(led, LOW);
    //  tone(led, LOW);
  }

  Serial.println(distance);
  delay(500);

}
