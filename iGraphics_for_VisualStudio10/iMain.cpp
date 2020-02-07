/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"


int menu=1,t,s,p;
bool gameon=false;
int fish_y=0;
int fish_x=496;
int food_1_x=46,food_1_y=1200,dy=5;
int food_2_x=376,food_2_y=600;
int food_3_x=526,food_3_y=1560;
int food_4_x=736,food_4_y=800;
int food_5_x=976,food_5_y=1100;
int food_6_x=1216,food_6_y=1900;
int life_x=496,life_y=2000;
int score=0,tym=90,life=10;
int bomb_1_x=106,bomb_1_y=2000;
int bomb_2_x=196,bomb_2_y=1500;
int bomb_3_x=466,bomb_3_y=3500;
int bomb_4_x=856,bomb_4_y=1000;
int bomb_5_x,bomb_5_y;
int bomb_6_x,bomb_6_y;
	




void NewGame()
{
	iSetColor(255,0,0);
	
    iShowBMP(0,0,"menu_1.bmp");
	////iFilledRectangle(350, 400, 150, 30);
	//iFilledRectangle(350, 293, 150, 30);
	//iFilledRectangle(350, 186, 150, 30);
	iSetColor(255,255,0);
	iText(355, 407, "Beginner", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(355, 300, "Medium", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(355, 193, "High", GLUT_BITMAP_TIMES_ROMAN_24);
		
}
void High_score()
{
	iShowBMP(0,0,"high.bmp");
}
void Help()
{
	iShowBMP(0,0,"help.bmp");
}
void eatCheck()
{
	if((fish_x>=food_1_x&&fish_x<=food_1_x+32)||(fish_x+32>=food_1_x&&fish_x+32<=food_1_x+32))
		if((fish_y>=food_1_y&&fish_y<=food_1_y+64)||(fish_y+64>=food_1_y&&fish_y+64<=food_1_y+64))
		{
			//food_creat=false;
			
        
			food_1_y=1200;
			score=score+10;
			
		}
			if((fish_x>=food_2_x&&fish_x<=food_2_x+32)||(fish_x+32>=food_2_x&&fish_x+32<=food_2_x+32))
		if((fish_y>=food_2_y&&fish_y<=food_2_y+64)||(fish_y+64>=food_2_y&&fish_y+64<=food_2_y+64))
		{
			//food_creat=false;
			
			food_2_y=600;
			score=score+10;
			
		}
			if((fish_x>=food_3_x&&fish_x<=food_3_x+32)||(fish_x+32>=food_3_x&&fish_x+32<=food_3_x+32))
		if((fish_y>=food_3_y&&fish_y<=food_3_y+64)||(fish_y+64>=food_3_y&&fish_y+64<=food_3_y+64))
		{
			//food_creat=false;
			food_3_y=1560;
			score=score+10;
			
		}
			if((fish_x>=food_4_x&&fish_x<=food_4_x+32)||(fish_x+32>=food_4_x&&fish_x+32<=food_4_x+32))
		if((fish_y>=food_4_y&&fish_y<=food_4_y+64)||(fish_y+64>=food_4_y&&fish_y+64<=food_4_y+64))
		{
			//food_creat=false;
			food_4_y=800;
			score=score+10;
			
		}
			if((fish_x>=food_5_x&&fish_x<=food_5_x+32)||(fish_x+32>=food_5_x&&fish_x+32<=food_5_x+32))
		if((fish_y>=food_5_y&&fish_y<=food_5_y+64)||(fish_y+64>=food_5_y&&fish_y+64<=food_5_y+64))
		{
             food_5_y=1100;
			//food_creat=false;
			score=score+10;
			
		}
			if((fish_x>=food_6_x&&fish_x<=food_6_x+32)||(fish_x+32>=food_6_x&&fish_x+32<=food_6_x+32))
		if((fish_y>=food_6_y&&fish_y<=food_6_y+64)||(fish_y+48>=food_6_y&&fish_y+64<=food_6_y+64))
		{
			//food_creat=false;
			food_6_y=1900;
			score=score+10;
			
		}
					if((fish_x>=life_x&&fish_x<=life_x+32)||(fish_x+32>=life_x&&fish_x+32<=life_x+32))
		if((fish_y>=life_y&&fish_y<=life_y+64)||(fish_y+48>=life_y&&fish_y+64<=life_y+64))
		{
			//food_creat=false;
			
			life_y=3000;
			life++;
			
		}
}		

void scoreShow()
{
	char str[11];
	iSetColor(220,20,60);
    sprintf(str,"Score: %d",score);
	iText(800,490,str,GLUT_BITMAP_TIMES_ROMAN_24);
}
void enemy()
{
	if((fish_x>=bomb_1_x&&fish_x<=bomb_1_x+32)||(fish_x+32>=bomb_1_x&&fish_x+32<=bomb_1_x+32))
		if((fish_y>=bomb_1_y&&fish_y<=bomb_1_y+64)||(fish_y+48>=bomb_1_y&&fish_y+64<=bomb_1_y+64))
		{
			
			bomb_1_y=2000;
			life--;
			score=score-10;
			
		}
			if((fish_x>=bomb_2_x&&fish_x<=bomb_2_x+32)||(fish_x+32>=bomb_2_x&&fish_x+32<=bomb_2_x+32))
		if((fish_y>=bomb_2_y&&fish_y<=bomb_2_y+64)||(fish_y+48>=bomb_2_y&&fish_y+64<=bomb_2_y+64))
		{
			
			bomb_1_y=1500;
			life--;
			score=score-10;
			
		}
	if((fish_x>=bomb_3_x&&fish_x<=bomb_3_x+32)||(fish_x+32>=bomb_3_x&&fish_x+32<=bomb_3_x+32))
		if((fish_y>=bomb_3_y&&fish_y<=bomb_3_y+64)||(fish_y+48>=bomb_3_y&&fish_y+64<=bomb_3_y+64))
		{
			//food_creat=false;
			
			bomb_1_y=3500;
			life--;
			score=score-10;
			
		}
			if((fish_x>=bomb_4_x&&fish_x<=bomb_4_x+32)||(fish_x+32>=bomb_4_x&&fish_x+32<=bomb_4_x+32))
		if((fish_y>=bomb_4_y&&fish_y<=bomb_4_y+64)||(fish_y+48>=bomb_4_y&&fish_y+64<=bomb_4_y+64))
		{
			//food_creat=false;
			
			bomb_4_y=2800;
			life--;
			score=score-10;
			
		}
}

void enemy_creat()
{

		bomb_1_y-=5;
	if(bomb_1_y<0)
	{
		bomb_1_y=2000;
		
	}
			bomb_2_y-=5;
	if(bomb_2_y<0)
	{
		bomb_2_y=1500;
		
	} 
			bomb_3_y-=5;
	if(bomb_3_y<0)
	{
		bomb_3_y=3500;
		
	} 
			bomb_4_y-=5;
	if(bomb_4_y<0)
	{
		bomb_4_y=1000;
		
	} 
}

void life_creat()
{
	
	life_y-=dy;
	if(life_y<0)
	{
		life_y=3000;
		
	}

}
void food_creat()
{
	
	food_1_y-=dy;
	if(food_1_y<0)
	{
		food_1_y=480;
		life--;
	}
   
	food_2_y-=dy;
	 if(food_2_y<0)
	{
		food_2_y=600;
		life--;
	}
	food_3_y-=dy;
	 if(food_3_y<0)
	{
		food_3_y=520;
		life--;
	}
	 	food_4_y-=dy;
	 if(food_4_y<0)
	{
		food_4_y=520;
		life--;
	}
	 	food_5_y-=dy;
	 if(food_5_y<0)
	{
		food_5_y=520;
		life--;
	}
	 	food_6_y-=dy;
	 if(food_6_y<0)
	{
		food_6_y=520;
		life--;
	}
	
}

void LifeShow()
{
	char str1[11];
	iSetColor(220,20,60);
    sprintf(str1,"Life: %d",life);
	iText(800,470,str1,GLUT_BITMAP_TIMES_ROMAN_24);
}
void game_over()
{
	if(life<0)
	{
		iPauseTimer(t);
		iPauseTimer(p);
		iShowBMP(300,200,"game_over.bmp");
		iText(90,50, "Press F1 for Home or 'END' for quit",GLUT_BITMAP_HELVETICA_18);

	}
}



/* 
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	iClear();
	
	//place your drawing codes here	
		if(menu==1)
	{
		iSetColor(0,139,139);
		iShowBMP(0,0,"cover.bmp");
		
		iFilledRectangle(898, 214, 120, 30);//newgm 
		iFilledRectangle(898, 158, 120, 30);//hgh
		iFilledRectangle(898, 100, 120, 30);//hlp
		iFilledRectangle(898, 45, 120, 30);
		
		iText(0,3, "Produced By Farzana Ahmed & Rashidul Haque Bappi", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255,255,0);
		iText(900, 221, "New Game", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(900, 107, "Help", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(900, 164, "High Score", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(900, 50, "Quit", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	
	else if(menu==2)
	{
		NewGame();
	}
	else if(menu==3)
		
		High_score();
	else if(menu==4)
		Help();
	else if(menu==5)
		{
		
				iClear();

	iShowBMP(0,0,"back.bmp");
	iShowBMP(food_1_x,food_1_y,"food_1.bmp");
	iShowBMP(food_2_x,food_2_y,"food_2.bmp");
	iShowBMP(food_3_x,food_3_y,"food_3.bmp");
	iShowBMP(food_4_x,food_4_y,"food_4.bmp");
	iShowBMP(food_5_x,food_5_y,"food_5.bmp");
	iShowBMP(food_6_x,food_6_y,"food_6.bmp");
	/*iShowBMP(bomb_1_x,bomb_1_y,"bomb1.bmp");
	iShowBMP(bomb_2_x,bomb_2_y,"bomb2.bmp");
	iShowBMP(bomb_3_x,bomb_3_y,"bomb3.bmp");
	iShowBMP(bomb_4_x,bomb_4_y,"bomb4.bmp");*/

	iShowBMP(fish_x,fish_y,"fish.bmp");
	scoreShow();
	eatCheck();
	LifeShow();
	game_over();
}
	else if(menu==6)
	{
	
			iClear();
	iShowBMP(0,0,"back.bmp");
	iShowBMP(food_1_x,food_1_y,"food_1.bmp");
	iShowBMP(food_2_x,food_2_y,"food_2.bmp");
	iShowBMP(food_3_x,food_3_y,"food_3.bmp");
	iShowBMP(food_4_x,food_4_y,"food_4.bmp");
	iShowBMP(food_5_x,food_5_y,"food_5.bmp");
	iShowBMP(food_6_x,food_6_y,"food_6.bmp");
	iShowBMP(bomb_1_x,bomb_1_y,"bomb1.bmp");
	iShowBMP(bomb_2_x,bomb_2_y,"bomb2.bmp");
	iShowBMP(bomb_3_x,bomb_3_y,"bomb3.bmp");
	iShowBMP(bomb_4_x,bomb_4_y,"bomb4.bmp");
	iShowBMP(life_x,life_y,"life.bmp");
	iShowBMP(fish_x,fish_y,"fish.bmp");
	scoreShow();
	eatCheck();
	LifeShow();
	game_over();

    

	}
    else if(menu==7)	
	{

			iClear();
	iShowBMP(0,0,"back.bmp");
	iShowBMP(food_1_x,food_1_y,"food_1.bmp");
	iShowBMP(food_2_x,food_2_y,"food_2.bmp");
	iShowBMP(food_3_x,food_3_y,"food_3.bmp");
	iShowBMP(food_4_x,food_4_y,"food_4.bmp");
	iShowBMP(food_5_x,food_5_y,"food_5.bmp");
	iShowBMP(food_6_x,food_6_y,"food_6.bmp");
	iShowBMP(bomb_1_x,bomb_1_y,"bomb1.bmp");
	iShowBMP(bomb_2_x,bomb_2_y,"bomb2.bmp");
	iShowBMP(bomb_3_x,bomb_3_y,"bomb3.bmp");
	iShowBMP(bomb_4_x,bomb_4_y,"bomb4.bmp");
	iShowBMP(fish_x,fish_y,"fish.bmp");
	iShowBMP(life_x,life_y,"life.bmp");
	scoreShow();
	eatCheck();
	LifeShow();
	game_over();
	enemy();

	}
	
	

}


/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (mx>=898&&mx<=1018 && my>=214&&my<=234 && menu==1)
			menu=2;
		else if (mx>=898&&mx<=1018 && my>=45&&my<=75 && menu==1)
			exit(1);
		else if (mx>=898&&mx<=1018 && my>=158&&my<=188 && menu==1)
			menu=3;
		else if (mx>=898&&mx<=1018 && my>=100&&my<=130 && menu==1)
			menu=4;
		else if (mx>=350&&mx<=500 && my>=400&&my<=430 && menu==2)
			menu=5;
		else if (mx>=350&&mx<=500 && my>=239&&my<=323 && menu==2)
			menu=6;
		else if (mx>=350&&mx<=500 && my>=186&&my<=216 && menu==2)
		    menu=7;
		
		
		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	printf(" *** Welcome to your 1st Program!!!");

	if(key == 'p')
	{
		iPauseTimer(t);
		iPauseTimer(s);
		iPauseTimer(p);

	}
	if(key == 'r')
	{
		iResumeTimer(t);
		iResumeTimer(s);
		iResumeTimer(p);
	}

	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{
	if(key==GLUT_KEY_F1)
	{
		menu=1;
	}



	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	/*if(key == GLUT_KEY_UP)
	{
		y=y+10;
	}*/
		if(key == GLUT_KEY_RIGHT)
	{
		
		if(fish_x<966
			)
		{
		fish_x=fish_x+30;
		}
	}
	if(key == GLUT_KEY_LEFT)
	{
		
		if(fish_x>16)
		{
		fish_x=fish_x-30;
		}

	}
	/*if(key == GLUT_KEY_DOWN)
	{
		y=y-10;
	}*/
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here. 

	t=iSetTimer(100,food_creat);
	s=iSetTimer(100, life_creat);
	p=iSetTimer(110, enemy_creat);
	
	
	//s=iSetTimer(100,eatCheck);


	iInitialize(1024,512, "Fishing Game");

	
	
	printf(" *** Welcome to your 1st Program!!!");  
	return 0;
}	