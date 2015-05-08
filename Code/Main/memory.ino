int mgroup [] ={6,1,5,4,2,3};



unsigned int get_index (unsigned int x)
{
  for (int i=0; i<6; i++){
    if ( x == mgroup[i] ){i=i+1; return i;}
    delay (50);
  }
  return 0;
}

void playsound(unsigned int let){
  let = get_index (let);
  
switch (let){
  case 1:
  player.singlePlayName("i11.mp3");
  break;
  case 2:
  player.singlePlayName("i12.mp3");
  break;
  case 3:
  player.singlePlayName("i13.mp3");
  break;
  case 4:
  player.singlePlayName("i11.mp3");
  break;
  case 5:
  player.singlePlayName("i12.mp3");
  break;
  case 6:
  player.singlePlayName("i13.mp3");
  break;
}
  delay(300);
  pres ++;
  if (pres ==1){ lp = let; }
  else if (pres ==2 ){ pres =0; delay(700); check_press_equality(let, lp); pres =0; lp=0;}
}

void check_press_equality(int x, int y){
  
    if ((x == 1)&&(y==4))     {delay(300); player.singlePlayName("yee.mp3");}
    else if ((x == 2)&&(y==5)){delay(300); player.singlePlayName("yee.mp3");}
    else if ((x == 3)&&(y==6)){delay(300); player.singlePlayName("yee.mp3");}
    else if ((x == 4)&&(y==1)){delay(300); player.singlePlayName("yee.mp3");}
    else if ((x == 5)&&(y==2)){delay(300); player.singlePlayName("yee.mp3");}
    else if ((x == 6)&&(y==3)){delay(300); player.singlePlayName("yee.mp3");}
    else  {player.singlePlayName("haha.mp3");}
  
  
  delay(300);
}

void list_group()
{ pres =0 ; lp =0;
  int xx =0;
  int yy =0;
  int zz =0;
  for (i =0; i<4; i++){
  xx =random (0,6);
  yy =random (0,6);
  while (xx==yy){
  yy =random (0,6);
  }
  
zz = mgroup [xx];
mgroup [xx] = mgroup [yy];
mgroup [yy] = zz;
zz=0;}
}

