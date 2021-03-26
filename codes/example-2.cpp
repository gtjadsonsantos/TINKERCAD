int listGpios[8] = {0,1,2,3,4,5,6,7};
int currentPosition = 0;
int btnLEFT = 9;
int btnRIGHT = 8;


void setup()
{
  for (int i = 0; i < 8; i++){
  	pinMode(listGpios[i],OUTPUT);
  }
  
  pinMode(btnLEFT,INPUT);
  pinMode(btnRIGHT,INPUT);

}

void loop()
{
  int sensorBtnLEFT =  digitalRead(btnLEFT);
  int sensorBtnRIGHT =  digitalRead(btnRIGHT);
 
  delay(200);
  
  if(sensorBtnLEFT == 1){
   
    if (
    currentPosition =  currentPosition + 1; 
  	digitalWrite(listGpios[currentPosition -1 ],LOW);
    digitalWrite(listGpios[currentPosition],HIGH);
        
  }
  
  if(sensorBtnRIGHT == 1){
    
    currentPosition = currentPosition - 1;
  	digitalWrite(listGpios[currentPosition + 1 ],LOW);
    digitalWrite(listGpios[currentPosition],HIGH);
    
  }
  
  
 
}