int A = 440;
int B = 493;
int C = 523;
int D = 587;
int E = 329;
int F = 349;
int G = 392;

void setup() {

pinMode(10,INPUT);
pinMode(9,INPUT);
pinMode(8,INPUT);

pinMode(11,OUTPUT);
}

void loop() {

int bo = digitalRead(10);
int bt = digitalRead(9);
int bth = digitalRead(8);

if(bo==HIGH){
  tone(11,A,500);
  }
  
if(bt==HIGH){
  tone(11,B,500);
  }
if(bth==HIGH){
  tone(11,C,500);
  }

if(bo==LOW||bt==LOW||bth==LOW){noTone(11);}


}
