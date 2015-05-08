#define right1  "right.mp3"
#define left1   "left.mp3"
#define right2  "right2.mp3"
#define left2   "left2.mp3"
#define right3  "right3.mp3"
#define left3   "left3.mp3"

unsigned int xx=0;
void selectD(unsigned int di){
 xx++; if  (xx==4) {xx=1;}
 switch (di){
   case 0:
   //LCD_Print("R", 7);
        if (xx==1){player.singlePlayName(right1);}
   else if (xx==2){player.singlePlayName(right2);}
   else if (xx==3){player.singlePlayName(right3);}
   break;
   case 1:
   //LCD_Print("L", 7);
        if (xx==1) {player.singlePlayName(left1);}
   else if (xx==2) {player.singlePlayName(left2);}
   else if (xx==3) {player.singlePlayName(left3);}
   break;
 } 
}
