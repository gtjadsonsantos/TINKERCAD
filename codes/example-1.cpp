const int GPIO0 = 0;
const int GPIO1 = 1;
const int GPIO2 = 2;
const int GPIO3 = 3;
const int GPIO4 = 4;
const int GPIO5 = 5;
const int GPIO6 = 6;
const int GPIO7 = 7;
  
void setup() {
  pinMode(GPIO0, OUTPUT);
  pinMode(GPIO1, OUTPUT);
  pinMode(GPIO2, OUTPUT);
  pinMode(GPIO3, OUTPUT);
  pinMode(GPIO4, OUTPUT);
  pinMode(GPIO5, OUTPUT);
  pinMode(GPIO6, OUTPUT);
  pinMode(GPIO7, OUTPUT);

}

void loop() {
  
  for (int i = 7; i >= 0;i--){
  	digitalWrite(i,HIGH);
    delay(200);
  }
   
  for (int i = 0; i <= 7;i++){
  	digitalWrite(i,LOW);
    delay(200);
  }
  
  delay(200);
}