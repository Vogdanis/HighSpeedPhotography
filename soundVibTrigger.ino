// Camera automation //

#define SHUTTER_PIN 12
#define CAMERA_TRIGGER 11


// SOUND SENSOR //
#define SOUND_THRESHOLD 200

// Serial Port messages enable to adjust THRESHOLD disable when shooting photos 
#define PRINT_MESSAGES

// Digital pins being used
#define FLASH_PIN 13

// Analog pins being used
#define SOUND_TRIGGER_PIN A1

int CAMERA_STATE=0;
////////////////////////////////////////////////////////


void setup(){

  pinMode(SOUND_TRIGGER_PIN,INPUT);
  pinMode(FLASH_PIN,OUTPUT);
  pinMode(SHUTTER_PIN,OUTPUT);
  pinMode(CAMERA_TRIGGER,INPUT);
  digitalWrite(FLASH_PIN,LOW);
  digitalWrite(SHUTTER_PIN,LOW);
  

  #ifdef PRINT_MESSAGES
    Serial.begin(9600);
  #endif
  
  
}


////////////////////////////////////////////////////////

void loop(){


  
  #ifdef PRINT_MESSAGES
    Serial.println(analogRead(SOUND_TRIGGER_PIN));
   // Serial.println(CAMERA_STATE);
  #endif

  
if(digitalRead(CAMERA_TRIGGER)!=1){

  CAMERA_STATE=1;
}

while(CAMERA_STATE==1){
  
   digitalWrite(SHUTTER_PIN,HIGH);
    delay(500);
  if(analogRead(SOUND_TRIGGER_PIN)>SOUND_THRESHOLD)
  {
    digitalWrite(FLASH_PIN,HIGH);
   
    digitalWrite(SHUTTER_PIN,LOW);
  /*   #ifdef PRINT_MESSAGES
    Serial.println("FLASH TRIGGERED!");
    #endif  */
 
    delay(10);
 digitalWrite(FLASH_PIN,LOW);
 
    CAMERA_STATE=0;
  }
  
}
  
}
 
