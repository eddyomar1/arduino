const int f = A0;
 int v = 0;
int time = 3000;

void setup() {
  pinMode(f, INPUT);
  Serial.begin(9600);
}

void loop() {
v = analogRead(f);
Serial.print("valor del sensor: ");
Serial.println(v);

if(v>110){
    digitalWrite(13, LOW);
  analogWrite(11, 0);
  delay(500);  
  
  }
if(v<110){
  digitalWrite(13, HIGH);
  analogWrite(11, 50);
delay(time);
  digitalWrite(13, LOW);
  analogWrite(11, 0);
delay(time);
time-=50;
 if(time == 0){time = 3000;}
  }
}
