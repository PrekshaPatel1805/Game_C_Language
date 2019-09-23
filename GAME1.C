#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int flag[10]={0,0,0,0,0,0,0,0,0,0};

void setflag(int x,int y,int setval,int j,int x1,int y1)
  {
	if(flag[setval]==1) //when ball touches the tray(flag[setval]=1)
	  {
	     setfillstyle(1,BLACK);
	     setcolor(BLACK);
	     fillellipse(x,y,10,10);
	     setfillstyle(SOLID_FILL,11);
	     setcolor(WHITE);
	     fillellipse(x1,y1,40,5);
	  }
	else //if ball don't touch the tray
	  {
	    setfillstyle(1,j);
	    setcolor(WHITE);
	    fillellipse(x,y,10,10);
	  }

  }
main()
  {
    int r,x1,y1,k,gd=DETECT,gm,ctr,x[10],y[10]={0,0,0,0,0,0,0,0,0,0},temp1,temp2,z;
    time_t a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
    char ch,ctr1[20],c;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    setviewport(0,0,getmaxx(),getmaxy(),1);//sets the viewport
    ctr = 0;
    x1 = 280,y1 = 430;
    settextstyle(1,HORIZ_DIR,2);
    outtextxy(getmaxx()/2-150,getmaxy()/2,"Press ENTER KEY to play game."); //enter key starts the game
    c = getch();
    srand((unsigned) time(&a0));
    a0 = rand() % 20;
    srand((unsigned) time(&a1));
    a1 = rand() % 25;
    srand((unsigned) time(&a2));
    a2 = rand() % 27;
    srand((unsigned) time(&a3));
    a3 = rand() % 24;
    srand((unsigned) time(&a4));
    a4 = rand() % 20;
    srand((unsigned) time(&a5));
    a5 = rand() % 25;
    srand((unsigned) time(&a6));
    a6 = rand() % 23;
    srand((unsigned) time(&a7));
    a7 = rand() % 22;
    srand((unsigned) time(&a8));
    a8 = rand() % 25;
    srand((unsigned) time(&a9));
    a9 = rand() % 20;
    if(a0 <= 10)
	 a0+=10;
    if(a1 <= 10)
	 a1+=10;
    if(a2 <= 10)
	 a2+=10;
    if(a3 <= 10)
	 a3+=10;
    if(a4 <= 10)
	 a4+=10;
    if(a5 <= 10)
	 a5+=10;
    if(a6 <= 10)
	 a6+=10;
    if(a7 <= 10)
	 a7+=10;
    if(a8 <= 10)
	 a8+=10;
    if(a9 <= 10)
	 a9+=10;
    if(c == 13)  // user press enter key or not
    {
    for(z=0;(ch != 27),(z<=400);z+=10) //main loop
      {

	    rectangle(0,0,getmaxx(),getmaxy());  //border
	    settextstyle(0,HORIZ_DIR,1);
	    rectangle(getmaxx()-50,10,getmaxx()-20,40);  //scoreboard
	    sprintf(ctr1,"%d",ctr);
	    outtextxy(getmaxx()-40,20,ctr1);
	    outtextxy(getmaxx()-50,3,"Score");
	    if(kbhit())  //tray moves or not!!
		 {
			 ch = getch();
			 if(ch == 75)
			      {
					x1-=70;
			      }
			 if(ch == 77)
			      {
					x1+=70;
			      }
			 setfillstyle(SOLID_FILL,11);
			 fillellipse(x1,y1,40,5);
		 }
	    setfillstyle(SOLID_FILL,11);
	    fillellipse(x1,y1,40,5);
	x[0]=17,y[0]+=a0;
	setfillstyle(SOLID_FILL,BLUE);
	fillellipse(x[0],y[0],10,10);
	if(flag[0] != 1)
	{
	 if(((y[0]-10) == y1) || (y1 == (y[0]+10)) || (y1 == y[0]))
		{
			if((x[0] == x1) || (x[0] == (x1+40)) || (x[0] == (x1-40)))
				{
					ctr++;
					flag[0] = 1;
				}
		}
	}

	setflag(x[0],y[0],0,BLUE,x1,y1);
	x[1]=70,y[1]+=a1;
	setfillstyle(SOLID_FILL,GREEN);
	fillellipse(x[1],y[1],10,10);
	if(flag[1] != 1)
	{
	  if(((y[1]-10) == y1) || (y1 == (y[1]+10)) || (y1 == y[1]))
		{
			if((x[1] == x1) || (x[1] == (x1+40)) || (x[1] == (x1-40)))
				{
					ctr++;
					flag[1] = 1;
				}
		}
	}
	setflag(x[1],y[1],1,GREEN,x1,y1);
	x[2]=140,y[2]+=a2;
	setfillstyle(SOLID_FILL,YELLOW);
	fillellipse(x[2],y[2],10,10);
	if(flag[2] != 1)
	{
	  if(((y[2]-10) == y1) || (y1 == (y[2]+10)) || (y1 == y[2]))
		{
			if((x[2] == x1) || (x[2] == (x1+40)) || (x[2] == (x1-40)))
				{
					ctr++;
					flag[2] = 1;
				}
		}
	}
	setflag(x[2],y[2],2,YELLOW,x1,y1);
	x[3]=210,y[3]+=a3;
	setfillstyle(SOLID_FILL,BLUE);
	fillellipse(x[3],y[3],10,10);
	if(flag[3] != 1)
	{
	  if(((y[3]-10) == y1) || (y1 == (y[3]+10)) || (y1 == y[3]))
		{
			if((x[3] == x1) || (x[3] == (x1+40)) || (x[3] == (x1-40)))
				{
					ctr++;
					flag[3] = 1;
				}
		}
	}
	setflag(x[3],y[3],3,BLUE,x1,y1);
	x[4]=280,y[4]+=a4;
	setfillstyle(SOLID_FILL,GREEN);
	fillellipse(x[4],y[4],10,10);
	if(flag[4] != 1)
	{
	  if(((y[4]-10) == y1) || (y1 == (y[4]+10)) || (y1 == y[4]))
		{
			if((x[4] == x1) || (x[4] == (x1+40)) || (x[4] == (x1-40)))
				{
					ctr++;
					flag[4] = 1;
				}
		}
	}

	setflag(x[4],y[4],4,GREEN,x1,y1);
	x[5]=350,y[5]+=a5;
	setfillstyle(SOLID_FILL,YELLOW);
	fillellipse(x[5],y[5],10,10);
	if(flag[5] != 1)
	{
	  if(((y[5]-10) == y1) || (y1 == (y[5]+10)) || (y1 == y[5]))
		{
			if((x[5] == x1) || (x[5] == (x1+40)) || (x[5] == (x1-40)))
				{
					ctr++;
					flag[5] = 1;
				}
		}
	}
	setflag(x[5],y[5],5,YELLOW,x1,y1);
	x[6]=420,y[6]+=a6;
	setfillstyle(SOLID_FILL,BLUE);
	fillellipse(x[6],y[6],10,10);
	if(flag[6] != 1)
	{
	  if(((y[6]-10) == y1) || (y1 == (y[6]+10)) || (y1 == y[6]))
		{
			if((x[6] == x1) || (x[6] == (x1+40)) || (x[6] == (x1-40)))
				{
					ctr++;
					flag[6] = 1;
				}
		}
	}
	setflag(x[6],y[6],6,BLUE,x1,y1);
	x[7]=490,y[7]+=a7;
	setfillstyle(SOLID_FILL,GREEN);
	fillellipse(x[7],y[7],10,10);
	if(flag[7] != 1)
	{
	  if(((y[7]-10) == y1) || (y1 == (y[7]+10)) || (y1 == y[7]))
		{
			if((x[7] == x1) || (x[7] == (x1+40)) || (x[7] == (x1-40)))
				{
					ctr++;
					flag[7] = 1;
				}
		}
	}
	setflag(x[7],y[7],7,GREEN,x1,y1);
	x[8]=560,y[8]+=a8;
	setfillstyle(SOLID_FILL,YELLOW);
	fillellipse(x[8],y[8],10,10);
	if(flag[8] != 1)
	{
	  if(((y[8]-10) == y1) || (y1 == (y[8]+10)) || (y1 == y[8]))
		{
			if((x[8] == x1) || (x[8] == (x1+40)) || (x[8] == (x1-40)))
				{
					ctr++;
					flag[8] = 1;
				}
		}
	}
	setflag(x[8],y[8],8,YELLOW,x1,y1);
	x[9]=630,y[9]+=a9;
	setfillstyle(SOLID_FILL,BLUE);
	fillellipse(x[9],y[9],10,10);
	if(flag[9] != 1)
	{
	  if(((y[9]-10) == y1) || (y1 == (y[9]+10)) || (y1 == y[9]))
		{
			if((x[9] == x1) || (x[9] == (x1+40)) || (x[9] == (x1-40)))
				{
					ctr++;
					flag[9] = 1;
				}
		}
	}

	setflag(x[9],y[9],9,BLUE,x1,y1);

	delay(400);
	clearviewport();
	if(z == 300)
	  {
	    exit;
	  }
/*	p++;
	if(p == 10)
	  {
			   exit;
	  }  */
      }
      }
   // printf("\n press enter to go out");
    //getch();
    cleardevice();
    closegraph();
    return 0;
  }