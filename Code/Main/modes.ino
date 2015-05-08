#define En_letter_length sizeof(english_letter)
#define Ar_letter_length sizeof(arabic_letter)

#define hehehe  "yee.mp3"
#define yeyeye  "haha.mp3"


char english_letter[]= {1,3,9,25,17,11,27,19,10,26,5,7,13,29,21,15,31,23,14,30,37,39,58,45,61,53};
char arabic_letter []= {1,3,5,13,29,45,53,31,23,47,43,55,11,19,35,25,41,49,57,14,30,46,62,26,58,10,63,39,21,33,4,51,61,28};


void LCD_Print(char txt[], char x){
  //lcd.setCursor(7, 1);
  //lcd.print("        ");   
  //lcd.setCursor(x, 1);
  //lcd.print(txt);
}
void sound(){
  if (ms){ms = 0;    
  player.singlePlayName("a.mp3");
  }
}
void mode0(){
  play_pos(get_bit());
}

void mode1(){
  //sound();
  for(int i=0; i<700; i++){
  get_letter();
 modes(); if (mode != 1){break;}
 //  play sound of every push
  delay(10);
  sleep++;
  }
  arabic_let(letter);
  ////LCD_Print(letter, 7);
  delay(100);letter=0;

}
void mode2(){
  //LCD_Print("        ",7);

  int  letter_test = arabic_letter[arlet];
  arabic_let(letter_test); 
  delay(150); 
  for(int i=0; i<550; i++){
      modes();
      if (mode == 2){
  get_letter();
  if (digitalRead(gr_up)) {  sleep=0;delay(200); arlet++;if(arlet>=Ar_letter_length) arlet=0;break; }
  else if (digitalRead(gr_down)) {sleep=0; delay(200); arlet--;if(arlet>=Ar_letter_length) arlet=Ar_letter_length-1;break;}
  delay(25);
  }
  else {break;}
  sleep++;}
  if (letter_test==letter){
    arlet++;
  ////LCD_Print(letter, 13);
  player.singlePlayName(hehehe);
  delay(1000);
  }
  else if (letter){player.singlePlayName(yeyeye);
  delay(1000);  }
  //delay(100);
letter =0;
}
void mode3(){
  for(int i=0; i<500; i++){
 modes(); if (mode != 3){break;}   
  get_letter();
  delay(25);
 
//  play sound of every push
  sleep++;  
}
  english_let(letter);
  ////LCD_Print(letter,7);
  delay(100);letter=0;
}
void mode4(){
  
  //LCD_Print("        ",7);
  char  letter_test = english_letter[enlet];
  delay(100);
  english_let(letter_test);
  delay(200);
  ////LCD_Print(letter_test, 10);
  for(int i=0; i<450; i++){
    modes();
if (digitalRead(gr_up)) {  sleep=0;delay(200); enlet++;  if(enlet >=En_letter_length) enlet=0; break;}
else if (digitalRead(gr_down)) { sleep=0;delay(200); enlet--; if(enlet>=En_letter_length) enlet=En_letter_length-1; break;} 
if (mode == 4){
  get_letter();
  delay(20);
  }
  else {break;}
  sleep++;}
  if (letter_test==letter){
    enlet ++;
  ////LCD_Print(letter, 13);
  player.singlePlayName(hehehe);
  delay(1000);
  }
  else if (letter){player.singlePlayName(yeyeye);
  delay(1000);  }
  //delay(100);
letter =0;
}

void mode5(){
  //LCD_Print("        ",7);
  if (digitalRead(gr_up)) { grp++;if(grp>2) grp=2; group_mode5(); sleep=0;delay(200); }
  else if (digitalRead(gr_down)) {grp--;if(grp<1) grp=1;group_mode5();sleep=0; delay(200); }
  switch (grp){
   case 1:
   //LCD_Print("animal",7);
    animal();
    break;
   case 2:
   //LCD_Print("music", 7);
    music();
    break;
  }
}
void mode6(){
  ////LCD_Print("        ",7);
  delay(100);
  ////LCD_Print(letter_test, 10);
  if (digitalRead(gr_up)) { sleep=0; delay(200); dir_test=0;  }
  if (digitalRead(gr_down)) {sleep=0;delay(200); dir_test=1; }


  if (digitalRead(enter)) {
  sleep=0;delay(200);
  if (dir==dir_test){player.singlePlayName(hehehe);delay(900);dir = random(1, 30)%2;
                      delay(100);selectD(dir);sleep=0;} 
  else if (dir!=dir_test){player.singlePlayName(yeyeye);delay(900);dir = random(1, 30)%2;
                      delay(100);selectD(dir);sleep=0;}
  
  delay(300);
  }
}


void mode7(){
  
  mlet = get_bit();
  if (mlet){
  sleep =0;
  delay(10);
  playsound(mlet);
  delay(150);
}
 if (digitalRead(enter) == 1){sleep =0; list_group();}
  sleep++;

}

void changenlet(){
if (digitalRead(gr_up)) {  sleep=0;delay(200); enlet++;if(grp>En_letter_length) grp=0; }
  else if (digitalRead(gr_down)) {sleep=0; delay(200); enlet--;if(grp<0) grp=En_letter_length;}
}

void changarlet(){
if (digitalRead(gr_up)) {  sleep=0;delay(200); arlet++;if(grp>Ar_letter_length) grp=0; }
  else if (digitalRead(gr_down)) { sleep=0;delay(200); arlet--;if(grp<0) grp=Ar_letter_length;}
}

void get_letter(){
unsigned int letter_bit =get_bit();
////LCD_Print(letter_bit);
if(letter_bit) {sleep=0; bitSet(letter,letter_bit-1); }}
unsigned int get_bit()
{ unsigned int bb= analogRead(alpha);//*7/1024;;
      if (bb<40) {bb=0;}
     else if (bb < 180){bb = 4;sleep=0;}
     else if ((bb> 195)&&(bb < 360)){sleep=0;bb = 5;}
     else if (bb < 510){bb = 6;sleep=0;}
     else if( bb > 590 ) {bb = bb*7/1024;sleep=0; bb=bb-3;}
  //if (bb ==0)      {bb= 0;}
  //else if (bb > 3) {bb= bb-3;sleep=0;}
  //else if (bb < 4) {bb= bb+3;sleep=0;}
  if ((mode==2 )|| (mode ==4 )||(mode==3 )|| (mode ==1 )){play_pos(bb);}
  return bb;
  }

