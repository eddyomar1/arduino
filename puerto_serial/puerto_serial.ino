char n;

void setup() {
  Serial.begin(9600);

}

void loop() {


while(Serial.available()==0){}

n = Serial.read();

if(n=='\n'){}else{
 Serial.print(n);
 
}

delay(300);

}
