int led = 3; 
int brightness = 0; 
int fadeAmount = 5; 

void setup() {
  pinMode(led, OUTPUT); 
}

void loop() {

  for(brightness = 0; brightness <= 255 ; brightness += 5){
    analogWrite(led, brightness);
    delay (100);
  }

  for(brightness = 255; brightness >= 0 ; brightness -= 5){
    analogWrite(led, brightness);
    delay (100);
  }
}



