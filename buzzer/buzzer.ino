


void setup() {
  
pinMode(5,OUTPUT);


}

void loop() {
for(int a = 0;a<100;a+=10){
tone(5,a);
delay(100);
}
for(int a = 100;a>0;a-=10){
tone(5,a);
delay(100);
}
}
