void setup(){
  Serial.begin(9600);
  
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

  
}

char c;
void loop(){
  if(Serial.available()>0){
    c = Serial.read();
    Serial.println(c);
    if(c=="A"){
      digitalWrite(4,HIGH);
      delay(1000);
      digitalWrite(4,LOW);
      delay(1000);
    }
    else if(c=="B"){
      digitalWrite(5,HIGH);
      delay(1000);
      digitalWrite(5,LOW);
      delay(1000);
    }
    else if(c=="D"){
      digitalWrite(6,HIGH);
      delay(1000);
      digitalWrite(6,LOW);
      delay(1000);
    }
    else if(c=="C"){
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      delay(1000);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      delay(1000);
    }
 
  }
}
