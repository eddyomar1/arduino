#include <Wire.h>
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27,16,2);

int x = 0;
int y = 0;
char n;

void setup() {
  Serial.begin(9600);
  
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
 lcd.setCursor(x,y);
 lcd.write(n);
 x++;
 if(x>15){
  x=0;
  y=1;
  }
 delay(500);
}

}
