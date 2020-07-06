int a = 12;
int b = 8;
int c = 7;

int p = A0;
int v = 0;

void setup() {
pinMode(p, INPUT);
Serial.begin(9600);
}

void loop() {
v = analogRead(p);
Serial.print("valor: ");
Serial.println(v);
brillo();
}

void brillo(){
  if(v>10 && v<125){
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);  
     analogWrite(3, 0);
      }
    
    else if(v>=125 && v<250){
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);  
    analogWrite(3, 0);
    }

    else if(v>=250 && v<375){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);  
    analogWrite(3, 0);
    }

else{
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);  
    analogWrite(3, 150);
    }
  
  }
