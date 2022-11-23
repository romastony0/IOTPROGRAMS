int sensor=7;
int sensor_value;

void setup() {
  pinMode(sensor,INPUT);
  Serial.begin(9600);
}

void loop(){
  sensor_value=digitalRead(sensor);
  Serial.print("PIR:00008:Volts:");
  Serial.println(sensor_value);
}
