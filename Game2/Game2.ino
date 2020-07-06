#include <Wire.h>
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27,16,2);


int yo = 10;
int L = 0;
int boton = 0;
int p = 15;
int d = 0;
int pd = 0;
int as = 16;
int afd = random(2);;


void setup() {
  
  Wire.begin();
  lcd.begin(16, 2);
  lcd.backlight();
  
  
}

void loop() { 
  lcd.clear();
 
 lcd.setCursor(d,L);
  lcd.print("#"); 
  
  lcd.setCursor(p,pd);
   lcd.print("|");

 
  lcd.setCursor(as,afd);
   lcd.print("|");

delay(100);



boton=digitalRead(12);
if(boton==HIGH){L=boton;}
if(boton==LOW){L=boton;}
  p--;
  as--;
  if(p<0){p=30;}
    if(as<0){as=19;}
       if(p==as){as--;}  
      if(d==p && L==pd || d==as && L==afd){GameOver();}


      
}  

void GameOver(){
  lcd.clear();
  lcd.print("GameOver");
  delay(5000);
  }
