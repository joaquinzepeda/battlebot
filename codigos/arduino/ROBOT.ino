//Alfa Bots


int motorAanthor = 5; 
int motorAhor = 6; 
int motorBanthor = 9; 
int motorBhor = 10; 
int armaA = 3;
int armaB = 12;

  
  

void setup()  { 
  pinMode(motorBhor, OUTPUT);
  pinMode(motorBanthor, OUTPUT);
  pinMode(motorAhor, OUTPUT);
  pinMode(motorAanthor, OUTPUT);
  pinMode(armaA, OUTPUT);
  pinMode(armaB,OUTPUT);
  Serial.begin(9600);
 } 
 
void loop()  
{
  
  
  
  
  
  
  
  if(Serial.available() >0)
  {
    Serial.print("RECEIVED ");
    
    char entrada=Serial.read();
    Serial.print(entrada);
    Serial.print(" ");
    
    if(entrada=='F')
    {
      digitalWrite(motorBhor,LOW);
      digitalWrite(motorBanthor,LOW);
      digitalWrite(motorAhor,LOW);
      digitalWrite(motorAanthor,LOW);
    }      

    if(entrada=='O')
    {
      digitalWrite(armaA,HIGH);
      digitalWrite(motorBanthor,LOW);
    }

     if(entrada=='G')
    {
      digitalWrite(armaA,LOW);
      digitalWrite(motorBanthor,LOW);
    }
  
  
    
    
    if (entrada=='U')
    {
      digitalWrite(motorAhor,HIGH);
      digitalWrite(motorBhor,HIGH);
      digitalWrite(motorBanthor,LOW);
      digitalWrite(motorAanthor,LOW);
      
    
    
      
      if(Serial.available() >0) 
        {
        entrada=Serial.read();
      
      }
    }
    if (entrada=='D')
    {
      digitalWrite(motorAanthor,HIGH);
      digitalWrite(motorBanthor,HIGH);
      digitalWrite(motorAhor,LOW);
      digitalWrite(motorBhor,LOW);
    
    
      
      if(Serial.available() >0) 
        {
          entrada=Serial.read();
        
      }
    
    }
    if (entrada=='L')
    {  //izquierda
    
      digitalWrite(motorAhor, HIGH);
      digitalWrite(motorBanthor, HIGH);
      digitalWrite(motorAanthor,LOW);
      digitalWrite(motorBhor,LOW);
    
      
      if(Serial.available() >0) {
        entrada=Serial.read();
        
        }
    
      }
    if (entrada=='R'){  //derecha
    
      digitalWrite(motorAanthor,HIGH);
      digitalWrite(motorBhor,HIGH);
      digitalWrite(motorAhor, LOW);
      digitalWrite(motorBanthor, LOW);
    
    
      
      if(Serial.available() >0) {
        entrada=Serial.read();
        
        }
    
      }
  }
  
  
  
    
}
