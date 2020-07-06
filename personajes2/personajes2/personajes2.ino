#include <Wire.h>
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27,16,2);
byte a[] = {
  B01110,
  B01111,
  B11111,
  B11111,
  B01111,
  B00111,
  B00111,
  B00111
};

byte b[] = {
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111,
  B00000,
  B00000
};


byte c[] = {
  B00000,
  B10000,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};


byte d[] = {
  B10011,
  B11011,
  B00011,
  B11111,
  B11110,
  B00000,
  B00000,
  B00000
};


byte e[] = {
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111,
  B11110,
  B11000
};


byte f[] = {
  B00000,
  B00000,
  B10000,
  B11111,
  B11111,
  B11111,
  B10000,
  B00000
};


byte g[] = {
  B00000,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

byte h[] = {
  B01110,
  B01010,
  B01110,
  B00100,
  B11111,
  B00100,
  B01010,
  B10001
};



void setup()
{
 lcd.init();
 lcd.backlight();
 lcd.setCursor(0,0);



lcd.createChar(0, a);
lcd.createChar(1, b);
lcd.createChar(2, c);
lcd.createChar(3, d);
lcd.createChar(4, e);
lcd.createChar(5, f);
lcd.createChar(6, g);
lcd.createChar(7, h);
lcd.home();
}
 

void loop() 
{
lcd.setCursor(8,0);
lcd.write(0);

lcd.setCursor(12,0);
lcd.write(1);

lcd.setCursor(9,0);
lcd.write(6);

lcd.setCursor(9,1);
lcd.write(7);




lcd.setCursor(10,0);
lcd.write(2);

lcd.setCursor(10,1);
lcd.write(3);

lcd.setCursor(11,0);
lcd.write(4);

lcd.setCursor(11,0);
lcd.write(5);

//lcd.setCursor(8,0);
//lcd.write(2);

}
