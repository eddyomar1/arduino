#include <Wire.h>
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27,16,2);
int x = 0;
char n;

void setup() {
  Serial.begin(9600);
  pinMode(12,OUTPUT);
lcd.init();
 lcd.backlight();
 lcd.setCursor(0,0);
 lcd.clear();
lcd.home();
}

void loop() {
while(Serial.available()==0){}

n = Serial.read();

if(n=='\n'){}else{
 lcd.setCursor(x,0);
 lcd.write(n);
 lcd.write('_');
 x++;
if(n=='H'){
  digitalWrite(12, HIGH);
  }
if(n=='L'){
  digitalWrite(12, LOW);
  }
 
 delay(500);
}

}
