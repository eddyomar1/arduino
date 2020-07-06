
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
int afd = random(2);

int puntos = 0;


byte a[] = {
  
    B01110,
    B01010,
    B01110,
    B10100,
    B01111,
    B00100,
    B01010,
    B10010,
};

byte b[] = {
  
    B01110,
    B01010,
    B01110,
    B00101,
    B11110,
    B10100,
    B01010,
    B01001,
};

void setup() {
  
  Wire.begin();
  lcd.begin(16, 2);
  lcd.backlight();
  
  lcd.createChar(0, a);
  lcd.createChar(1, b);
}

void loop() { 
  lcd.clear();
noTone(9); 
 lcd.setCursor(d,L);
  corre(); 
  
  lcd.setCursor(p,pd);
   lcd.print("|");

 
  lcd.setCursor(as,afd);
   lcd.print("|");

puntos++;
delay(190);



boton=digitalRead(12);
if(boton==HIGH){L=boton;}
if(boton==LOW){L=boton;}
  p--;
  as--;
  if(p<0){p=16;}
    if(as<0){as=18;}
       if(p==as){as--;}  
      if(d==p && L==pd || d==as && L==afd){GameOver();}


      
}  

void GameOver(){
  lcd.clear();
  lcd.print("GameOver");
  
  lcd.setCursor(5,1);
   lcd.print("scr = ");
  lcd.print(puntos);
puntos=0;
   tone(9, 4440, 500
   );
  delay(5000);
  
  
 
   
  }

  void corre(){
   
     if(as%2==0){
     lcd.setCursor(d,L);
  lcd.write(0); 
      }else{
     
   lcd.setCursor(d,L);
    lcd.write(1);
  }
    }
