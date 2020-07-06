#include <Wire.h>
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27,16,2);
int a = 0;
int vb = 0;//coneecta el boton!

void setup() {
  
  Wire.begin();
  lcd.begin(16, 2);
  lcd.backlight();
  
  
}

void loop() { 
lcd.clear();
 lcd.setCursor(a,0);
  lcd.print("hola"); 
delay(200);
vb=digitalRead(12);
a++;
if(a>16){a=0;}
//if(vb==HIGH){a++; if(a>14){a=0;}}
  
}
