int A = 440;
int B = 493;
int C = 523;
int D = 587;
int E = 329;
int F = 349;
int G = 392;


void setup() {
pinMode(8,INPUT);
pinMode(9,OUTPUT);
}

void loop() {
 int x = digitalRead(8);
  if(x==HIGH){

odeToJoy();

  }
    if(x==LOW){noTone(9);}
}

void odeToJoy(){
  delay(500);
  tone(9, B);
    delay(100);
    
      noTone(9);
    
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);
    
    delay(500);
  tone(9, C);
    delay(100);

      noTone(9);
    
  
    delay(500);
  tone(9, D);
    delay(100);

      noTone(9);
    
  
    delay(500);
  tone(9, D);
    delay(100);

      noTone(9);
    
  
    delay(500);
  tone(9, C);
    delay(100);

      noTone(9);
    
  
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);
    
    delay(500);
  tone(9, A);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, G);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, G);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, A);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, B);
    delay(600);

      noTone(9);
    delay(100);
  tone(9, A);
    delay(80);

      noTone(9);
    delay(500);
  tone(9, A);
    delay(300);

      noTone(9);
    delay(500);
  tone(9, 593);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, C);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, D);
    delay(100);

      noTone(9);
      
    delay(500);
  tone(9, D);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, C);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, A);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, G);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, G);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, A);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);

    delay(500);
  tone(9, A);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, G);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, G);
    delay(1000);

      noTone(9);
    delay(500);
  tone(9, A);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, A);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, G);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, A);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, C);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, G);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, A);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, B);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, C);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, A);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, G);
    delay(100);

      noTone(9);
    delay(500);
  tone(9, A);
    delay(100);


    

      noTone(9);
    delay(500);
  tone(9, 146
  );
    delay(100);

      noTone(9);
    delay(500);
  tone(9, D);
    delay(100);

      noTone(9);
    
}

//--------------------------------------------------------

void alarm(){
  for(int rep = 0;rep<10;rep++){
  
    int x = 300;
  
  while(x<3000){
  
  tone(9, x);
    delay(10);

    x++;
 }
while(x>300){
  tone(9, x);
    delay(10);
    
    x--;
  }
 
}
}

void alarm_amb(){
  for(int rep = 0;rep<10;rep++){
  
  tone(9, 300);
    delay(500);

  tone(9, 3000);
      delay(500);
  
 
}

}
