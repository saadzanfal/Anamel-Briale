// animal tracks
#define music1  "i1.mp3"
#define music2  "i2.mp3"
#define music3  "i7.mp3"
#define music4  "i4.mp3"
#define music5  "i5.mp3"
#define music6  "i6.mp3"


// animal tracks
#define animal1  "goat.mp3"
#define animal2  "cat1.mp3"
#define animal3  "cow1.mp3"
#define animal4  "dog1.mp3"
#define animal5  "duck.mp3"
#define animal6  "horse1.mp3"

#define mode0 "mode1.mp3"
#define mode1 "mode2.mp3"
#define mode2 "mode3.mp3"
#define mode3 "mode4.mp3"
#define mode4 "mode5.mp3"
#define mode5 "mode6.mp3"
#define mode6 "mode7.mp3"
#define mode7 "mode8.mp3"

#define pos1 "11.mp3"
#define pos2 "12.mp3"
#define pos3 "13.mp3"
#define pos4 "14.mp3"
#define pos5 "15.mp3"
#define pos6 "16.mp3"



void music(){
  int x = get_bit();
  switch (x){
    case 0:
    break;
    case 1:   
    player.singlePlayName(music1);
    
    break;
    case 2:
    player.singlePlayName(music2);
    break;
    case 3:
    player.singlePlayName(music3);
    break;
    case 4:
    player.singlePlayName(music4);
    break;
    case 5:
    player.singlePlayName(music5);
    break;
    case 6: 
    player.singlePlayName(music6);
    break;
    default :
    LCD_Print("     ", 7);

}
}
void animal(){
  int x = get_bit();
  switch (x){
    case 0:
    break;
    case 1:   
    player.singlePlayName(animal1);
    break;
    case 2:
    player.singlePlayName(animal2);
    break;
    case 3:
    player.singlePlayName(animal3);
    break;
    case 4:
    player.singlePlayName(animal4);
    break;
    case 5:
    player.singlePlayName(animal5);
    break;
    case 6: 
    player.singlePlayName(animal6);
    break;
    default :
    LCD_Print("     ", 7);

}
}
void play_pos(unsigned int pos){
  switch (pos){
   case 1:
    player.singlePlayName(pos1);
    delay(150);
    break; 
   case 2:
    player.singlePlayName(pos2);
    delay(150);
    break; 
   case 3:
   delay(300);
    player.singlePlayName(pos3);
    delay(150);
    break; 
   case 4:
    player.singlePlayName(pos4);
    delay(150);
    break; 
   case 5:
    player.singlePlayName(pos5);
    delay(150);
    break; 
   case 6:
    player.singlePlayName(pos6);
    delay(150);
    break; 
   
  } 
}
void mode_track(){
  if (ms){ms = 0;
    gotoXY(10,20);
   LcdCharacter(255);
   LcdCharacter(255);
   clear_grp();
  switch (mode){
   case 0:
     player.singlePlayName(mode0);
    delay(150);
    break; 
   case 1:
    player.singlePlayName(mode1);
    delay(150);
    break;   
   case 2:
   delay(100);
    player.singlePlayName(mode2);
    delay(4000);
    break; 
   case 3:
   delay(300);
    player.singlePlayName(mode3);
    delay(150);
    break; 
   case 4:
    player.singlePlayName(mode4);
    delay(3200);
    break; 
   case 5:
    player.singlePlayName(mode5);
    delay(150);
    break; 
   case 6:
    player.singlePlayName(mode6);
    delay(150);
    break; 
   case 7:
    player.singlePlayName(mode7);
    delay(150);
    break; 
        
  } 
  delay(150);
  }}

void english_let (unsigned int let){
  gotoXY(10,20);
   LcdCharacter(255);
   LcdCharacter(255);
  switch (let){
   case 1:
   //LCD_Print("a", 7);
   player.singlePlayName("a.mp3");
   gotoXY(10,20);
   LcdCharacter(128);
     break;
   case 3:
   //LCD_Print("b", 7);
   player.singlePlayName("b.mp3");
   gotoXY(10,20);
   LcdCharacter(129);
     break;
   case 9:
   //LCD_Print("c", 7);
   player.singlePlayName("c.mp3");
   gotoXY(10,20);
   LcdCharacter(130);
     break;
   case 25:
   //LCD_Print("d", 7);
   player.singlePlayName("d.mp3");
   gotoXY(10,20);
   LcdCharacter(131);
     break;
   case 17:
   //LCD_Print("e", 7);
   player.singlePlayName("e.mp3");
   gotoXY(10,20);
   LcdCharacter(132);
     break;
   case 11:
   //LCD_Print("f", 7);
   player.singlePlayName("f.mp3");
   gotoXY(10,20);
   LcdCharacter(133);
     break;
   case 27:
   //LCD_Print("g", 7);
   player.singlePlayName("g.mp3");
   gotoXY(10,20);
   LcdCharacter(134);
     break;
   case 19:
   //LCD_Print("h", 7);
   player.singlePlayName("h.mp3");
   gotoXY(10,20);
   LcdCharacter(135);
     break;
   case 10:
   //LCD_Print("i", 7);
   player.singlePlayName("i.mp3");
   gotoXY(10,20);
   LcdCharacter(136);
     break;
   case 26:
   //LCD_Print("j", 7);
   player.singlePlayName("j.mp3");
   gotoXY(10,20);
   LcdCharacter(137);
     break;
   case 5:
   //LCD_Print("k", 7);
   player.singlePlayName("k.mp3");
   gotoXY(10,20);
   LcdCharacter(138);
     break;
   case 7:
   //LCD_Print("l", 7);
   player.singlePlayName("l.mp3");
   gotoXY(10,20);
   LcdCharacter(139);
     break;
   case 13:
   //LCD_Print("m", 7);
   player.singlePlayName("m.mp3");
   gotoXY(10,20);
   LcdCharacter(140);
     break;
   case 29:
   //LCD_Print("n", 7);
   player.singlePlayName("n.mp3");
   gotoXY(10,20);
   LcdCharacter(141);
     break;
   case 21:
   //LCD_Print("o", 7);
   player.singlePlayName("o.mp3");
   gotoXY(10,20);
   LcdCharacter(142);
     break;
   case 15:
   //LCD_Print("p", 7);
   player.singlePlayName("p.mp3");
   gotoXY(10,20);
   LcdCharacter(143);
     break;
   case 31:
   //LCD_Print("q", 7);
   player.singlePlayName("q.mp3");
   gotoXY(10,20);
   LcdCharacter(144);
     break;
   case 23:
   //LCD_Print("r", 7);
   player.singlePlayName("r.mp3");
   gotoXY(10,20);
   LcdCharacter(145);
     break;
   case 14:
   //LCD_Print("s", 7);
   player.singlePlayName("s.mp3");
   gotoXY(10,20);
   LcdCharacter(1146);
     break; 
   case 30:
   //LCD_Print("t", 7);
   player.singlePlayName("t.mp3");
   gotoXY(10,20);
   LcdCharacter(147);
     break;
   case 37:
   //LCD_Print("u", 7);
   player.singlePlayName("u.mp3");
   gotoXY(10,20);
   LcdCharacter(148);
     break;
   case 39:
   //LCD_Print("v", 7);
   player.singlePlayName("v.mp3");
   gotoXY(10,20);
   LcdCharacter(149);
     break;
   case 58:
   //LCD_Print("e", 7);
   player.singlePlayName("w.mp3");
   gotoXY(10,20);
   LcdCharacter(150);
     break;
   case 45:
   //LCD_Print("x", 7);
   player.singlePlayName("x.mp3");
   gotoXY(10,20);
   LcdCharacter(151);
     break;
   case 61:
   //LCD_Print("y", 7);
   player.singlePlayName("y.mp3");
   gotoXY(10,20);
   LcdCharacter(152);
     break;
   case 53:
   //LCD_Print("z", 7);
   player.singlePlayName("z.mp3");
   gotoXY(10,20);
   LcdCharacter(153);
     break;
 
  }
}


void arabic_let(unsigned int let){
  gotoXY(10,20);
   LcdCharacter(255);
   LcdCharacter(255);
switch(let){
case 1:
   gotoXY(10,20);
   LcdCharacter(195);
   delay(50);
   player.singlePlayName("alf.mp3");
   
     break;
case 3:
   player.singlePlayName("ba2.mp3");
   gotoXY(10,20);
   LcdCharacter(200);

     break;
case 30:
   player.singlePlayName("ta2.mp3");
   gotoXY(10,20);
   LcdCharacter(202);

     break;
case 57:
   //LCD_Print("tha2", 7);
   player.singlePlayName("tha2.mp3");
   gotoXY(10,20);
   LcdCharacter(203);

     break;
case 26:
   //LCD_Print("gem", 7);
   player.singlePlayName("gem.mp3");
   gotoXY(10,20);
   LcdCharacter(204);

     break;
case 49:
   //LCD_Print("ha2", 7);
   player.singlePlayName("ha2.mp3");
   gotoXY(10,20);
   LcdCharacter(205);

     break;
case 45:
   //LCD_Print("5a2", 7);
   player.singlePlayName("5a2.mp3");
   gotoXY(10,20);
   LcdCharacter(206);

     break;
case 25:
   //LCD_Print("dal", 7);
   player.singlePlayName("dal.mp3");
   gotoXY(10,20);
   LcdCharacter(207);

     break;
case 46:
   //LCD_Print("zal", 7);
   player.singlePlayName("zal.mp3");
   gotoXY(10,20);
   LcdCharacter(208);

     break;
case 23:
   //LCD_Print("ra2", 7);
   player.singlePlayName("ra2.mp3");
   gotoXY(10,20);
   LcdCharacter(209);

     break;
case 53:
   //LCD_Print("zen", 7);
   player.singlePlayName("zen.mp3");
   gotoXY(10,20);
   LcdCharacter(210);

     break;
case 14:
   //LCD_Print("sen", 7);
   player.singlePlayName("sen.mp3");
   gotoXY(10,20);
   LcdCharacter(242);
   LcdCharacter(238);

     break;
case 41:
   //LCD_Print("sheen", 7);
   player.singlePlayName("shen.mp3");
   gotoXY(10,20);
   LcdCharacter(242);
   LcdCharacter(239);

     break;
case 47:
   //LCD_Print("sad", 7);
   player.singlePlayName("sad.mp3");
   gotoXY(10,20);
   LcdCharacter(242);
   LcdCharacter(240);

     break;
case 43:
   //LCD_Print("dad", 7);
   player.singlePlayName("dad.mp3");
   gotoXY(10,20);
   LcdCharacter(242);
   LcdCharacter(241);

     break;
case 62:
   //LCD_Print("taa2", 7);
   player.singlePlayName("taa2.mp3");
   gotoXY(10,20);
   LcdCharacter(216);

     break;
case 63:
   //LCD_Print("zaa2", 7);
   player.singlePlayName("zaa2.mp3");
   gotoXY(10,20);
   LcdCharacter(217);

     break;
case 55:
   //LCD_Print("3en", 7);
   player.singlePlayName("3en.mp3");
   gotoXY(10,20);
   LcdCharacter(218);

     break;
case 35:
   //LCD_Print("3.en", 7);
   player.singlePlayName("3'en.mp3");
   gotoXY(10,20);
   LcdCharacter(219);

     break;
case 11:
   //LCD_Print("fa2", 7);
   player.singlePlayName("fa2.mp3");
   gotoXY(10,20);
   LcdCharacter(221);

     break;
case 31:
   //LCD_Print("qaf", 7);
   player.singlePlayName("qaf.mp3");
   gotoXY(10,20);
   LcdCharacter(222);

     break;
case 5:
   //LCD_Print("kaf", 7);
   player.singlePlayName("kaf.mp3");
   gotoXY(10,20);
   LcdCharacter(223);

     break;
case 7:
   //LCD_Print("lam", 7);
   player.singlePlayName("lam.mp3");
   gotoXY(10,20);
   LcdCharacter(225);

     break;
case 13:
   //LCD_Print("mem", 7);
   player.singlePlayName("mem.mp3");
   gotoXY(10,20);
   LcdCharacter(227);

     break;
case 29:
   //LCD_Print("non", 7);
   player.singlePlayName("non.mp3");
   gotoXY(10,20);
   LcdCharacter(228);

     break;
case 19:
   //LCD_Print("haa2", 7);
   player.singlePlayName("haa2.mp3");
   gotoXY(10,20);
   LcdCharacter(229);

     break;
case 58:
   //LCD_Print("wow", 7);
   player.singlePlayName("wow.mp3");
   gotoXY(10,20);
   LcdCharacter(230);

     break;
case 10:
   //LCD_Print("ya2", 7);
   player.singlePlayName("ya2.mp3");
   gotoXY(10,20);
   LcdCharacter(237);

     break;
case 21:
   //LCD_Print("Alf_maqsoura", 7);
   player.singlePlayName("Alfms.mp3");
   gotoXY(10,20);
   LcdCharacter(236);
     break;
case 33:
   //LCD_Print("ta_marbouta", 7);
   player.singlePlayName("tamr.mp3");
   gotoXY(10,20);
   LcdCharacter(244);
     break;
case 39:
   //LCD_Print("lam_alf", 7);
   player.singlePlayName("la.mp3");
   gotoXY(10,20);
   LcdCharacter(243);
     break;
case 4:
   //LCD_Print("hamza", 7);
   player.singlePlayName("hamza.mp3");
   gotoXY(10,20);
   LcdCharacter(245);
     break;
case 51:
   //LCD_Print("waw_mahmouza", 7);
   player.singlePlayName("whamz.mp3");
   gotoXY(10,20);
   LcdCharacter(245);
   LcdCharacter(230);
     break;
case 61:
   //LCD_Print("yaa_hamza", 7);
   player.singlePlayName("yhamz.mp3");
   gotoXY(10,20);
   LcdCharacter(245);
   LcdCharacter(237);
   
     break;
case 28:
   //LCD_Print("alf_mad", 7);
   player.singlePlayName("alfmd.mp3");
   gotoXY(10,20);
   LcdCharacter(246);   
     break;

}
}
