
int e = 0;

void setup() {
  pinMode(12, INPUT);
  pinMode(8, OUTPUT);
 Serial.begin(9600);
}

void loop() {

e = digitalRead(12);
if(e==HIGH){digitalWrite(8, HIGH); Serial.println(e);}
else{digitalWrite(8, LOW);Serial.println(e);}
}
