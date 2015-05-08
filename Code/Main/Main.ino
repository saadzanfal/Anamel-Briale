
#include <Arduino.h>
#include <SoftwareSerial.h>
#include "Garan.h"

#if !defined(__MSP430_CPU__)
SoftwareSerial garanSerial(8, 9); // RX, TX
#else
SoftwareSerial garanSerial(P1_4, P1_5); // RX, TX
#endif

Garan player(garanSerial);

// start sound
#define startsound "1.mp3"

// set pin numbers:
const int mode_up   = A2;     // the number of the pushbutton pin
const int mode_down = A1;     // the number of the pushbutton pin
const int alpha     = A0;      // the number of the LED pin
const int gr_up     = A3;     // the number of the pushbutton pin
const int gr_down   = A4;     // the number of the pushbutton pin
const int enter     = A5;     // the number of the pushbutton pin

byte letter=0;
// variables will change:
unsigned int mode = 0;         // variable for reading the pushbutton status
unsigned int grp = 0;         // variable for reading the pushbutton status
unsigned int ms =1; 
unsigned int dir =0; 
unsigned int dir_test =0; 
unsigned int enlet =0; 
unsigned int arlet =0;  

int sleep=0;
int ps=1;
int mlet=0;
int pres=0;
int lp=0;


void setup() {
  
  LcdInitialise();
  LcdClear();
  mode = 0;
  delay(500);
  start_view();

  player.setVolume(15);
  delay(2000);
  player.singlePlayName("1.mp3");
  ms=1;
  delay(1500);



}


void modes(){
    if (digitalRead(mode_up)) { ms =1; sleep=0;delay(200); mode++;if(mode>7) mode=7; }
  else if (digitalRead(mode_down)) { ms=1;sleep=0; delay(200); mode--;if(mode>7) mode=0;}
}

void start(){
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
//  modes();
  switch (mode){
   case 0:
     word1();
    //lcd.setCursor(0, 1);
    //lcd.print("Mode 0");
    mode_track();
    mode0();
    break; 
    
   case 1:
     word2();
    //lcd.setCursor(0, 1);
    //lcd.print("Mode 1");
    mode_track();
    get_letter();
    if (letter){
      LCD_Print("X",12);
      mode1();}
    LCD_Print(" ",12);
    break; 
   case 2:
     word3();
    //lcd.setCursor(0, 1);
    //lcd.print("Mode 2");
    mode_track();
    delay(100);
      mode2();
    break; 
   case 3:
     word4();
    //lcd.setCursor(0, 1);
    //lcd.print("Mode 3");
    mode_track();
    get_letter();
    if (letter){
      LCD_Print("X",12);
      mode3();}
    LCD_Print(" ",12);
    break; 
   case 4:
     clear_grp();
     word5();
    //lcd.setCursor(0, 1);
    //lcd.print("Mode 4");
    mode_track();
    delay(150);
      mode4();
    break; 
   case 5:
     word6();
    //lcd.setCursor(0, 1);
    //lcd.print("Mode 5");
    mode_track();
    mode5();
    break; 
   case 6:
     clear_grp();
     word7();
    //lcd.setCursor(0, 1);
    //lcd.print("Mode 6");
    mode_track();
    mode6();
    break; 
    case 7:
     word8();
    //lcd.setCursor(0, 1);
    //lcd.print("Mode 7");
    mode_track();
    get_letter();
    if (letter){
      //LCD_Print("X",12);
      mode7();}
    //LCD_Print(" ",12);
    break; 
        
  }  
}
void loop() {

  while (sleep < 800){
  modes();
//  mode =7;
  start();
  //dir = random(1, 30)%2;
  //lcd.setCursor(7, 1);
  //Serial.println(analogRead(alpha)*7/1024);
 //mode7();
  delay(50);
  sleep++ ;
}
modes();
}


