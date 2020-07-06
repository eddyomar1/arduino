int e = 0;


void setup() {
  pinMode(12, INPUT);
 pinMode(3, OUTPUT);
}

void loop() {

e = digitalRead(12);
if(e==HIGH){analogWrite(3,250); }
else{analogWrite(3, 0);}
}
