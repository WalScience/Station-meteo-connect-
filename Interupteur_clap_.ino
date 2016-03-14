//WAL_SCIENCE
//INTERRUPTEUR A MAIN
//2015
//YOLO
//PLEIN DE COMMENTAIRE #ToiMemeTuSaye
//Version 1.1

const int CapteurPin = 2;    
const int LedPin =  13;   
 
int CapteurBas = LOW;       
int ChangementEtat = 0;             
 
int EtatDuCapteur = 0;          
 
void setup() {

  pinMode(LedPin, OUTPUT);     

  pinMode(CapteurPin, INPUT);    
}
 
void loop(){

  EtatDuCapteur = digitalRead(CapteurPin);
 

  if (EtatDuCapteur == HIGH) {    

    if (ChangementEtat == 1) {

      CapteurBas=!CapteurBas;

      ChangementEtat=0;

      digitalWrite(LedPin, CapteurBas); 
     delay(100);
  }  
         
     
  }
  else {

    ChangementEtat=1;
      
  }
}
