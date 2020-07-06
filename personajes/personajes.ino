#include <Wire.h>
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27,16,2);
byte a[] = {
  
    B01110,
    B01010,
    B01110,
    B00100,
    B11111,
    B00100,
    B01010,
    B10001,
};

byte b[] = {
  
    B01110,
    B01010,
    B01110,
    B00101,
    B11111,
    B10100,
    B01010,
    B10001,
};

byte c[] = {
  
    B01110,
    B01010,
    B01110,
    B10100,
    B11111,
    B00101,
    B01010,
    B10001,
};
  
byte d[] = {
  
    B01110,
    B01010,
    B01110,
    B00100,
    B00111,
    B00100,
    B01010,
    B10001,
};

byte e[] = {
  
    B01110,
    B01010,
    B01110,
    B10100,
    B01111,
    B00100,
    B01010,
    B10001,
};

byte f[] = {
  
    B01110,
    B01010,
    B01110,
    B00101,
    B11110,
    B00100,
    B01010,
    B10001,
};


void setup() {
pinMode(12, INPUT);

  Serial.begin(9600);
  
  Wire.begin();
  lcd.begin(16, 2);
  lcd.backlight();

lcd.createChar(0, a);
lcd.createChar(1, b);
lcd.createChar(2, c);
lcd.createChar(3, d);
lcd.createChar(4, e);
lcd.createChar(5, f);

lcd.home();
}

void loop() { 
 
int v = digitalRead(12);  
  Serial.println(v);
/*
if(v==LOW){
lcd.clear();
 lcd.setCursor(0,0);
  lcd.write(p); 
}

if(v==HIGH){
  
lcd.clear();
lcd.setCursor(0,0);
lcd.write(1);  
  
  }
  */

    

baile();
  
delay(500);
      
}  


void baile(){
  

lcd.clear();
lcd.setCursor(0,0);
lcd.write(0);  
delay(500);

lcd.clear();
lcd.setCursor(0,0);
lcd.write(1);  
delay(500);

 lcd.clear();
lcd.setCursor(0,0);
lcd.write(2);  
delay(500);

lcd.clear();
lcd.setCursor(0,0);
lcd.write(0);  
delay(500);


lcd.clear();
lcd.setCursor(0,0);
lcd.write(3);  
delay(500);


lcd.clear();
lcd.setCursor(0,0);
lcd.write(0);  
delay(500);


lcd.clear();
lcd.setCursor(0,0);
lcd.write(4);  
delay(500);


lcd.clear();
lcd.setCursor(0,0);
lcd.write(5);  
delay(500);


lcd.clear();
lcd.setCursor(0,0);
lcd.write(4);  
delay(500);


lcd.clear();
lcd.setCursor(0,0);
lcd.write(5);  
delay(500);


lcd.clear();
lcd.setCursor(0,0);
lcd.write(4);  
delay(500);


lcd.clear();
lcd.setCursor(0,0);
lcd.write(5);  
delay(500);




 
  }
