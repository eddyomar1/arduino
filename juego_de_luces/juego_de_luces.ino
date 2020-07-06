

int res;

 int notas[] = {123,132,213,231,312,321};

int con;

void setup() {
pinMode(13,INPUT);
pinMode(12,INPUT);
pinMode(11,INPUT);

pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);



}

void loop() {
//sonido de incio

con = notas[0];

  tone(5,1000);
    delay(300);
  noTone(5);
    delay(300);  
  tone(5,1000);
      delay(300);
  noTone(5);

  
 if(con == 123){

    digitalWrite(8,HIGH);
 delay(1000);
digitalWrite(7,HIGH);
 delay(1000);
digitalWrite(6,HIGH);

  delay(2000);

digitalWrite(8,LOW);
 delay(1000);
digitalWrite(7,LOW);
 delay(1000);
digitalWrite(6,LOW);
delay(1000);


    }


    
delay(5000);



}
