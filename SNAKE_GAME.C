#include<stdio.h>
#include<stdlib.h>     // rand function
#include<conio.h>
int width=20,height=20,gameOver;
int x,y,fruitX,fruitY,score,flag;
int tailX[100],tailY[100];
int CountTail=0;
void setup()       // set snake and fruit
{
  gameOver=0;
  x=width/2;
  y=height/2;

  label1:                    // fruit generated on boundary
  fruitX=rand()%20;          // rand function return large value
  if (fruitX==0)
     goto label1;
  label2:
  fruitY=rand()%20;
  if (fruitY==0)
     goto label2;
  score=0;                // initially score
}
void draw()      //draw boundary
{
  int i,j,k;
  system("cls");                // clear screen
  for(i=0;i<width;i++)
  {
    for(j=0;j<height;j++)
     {
       if(i==0||i==height-1||j==0||j==width-1)
       {
	  printf("*");
       }
       else             // print snake and fruit
       {
	  if(i==x && j==y)                              // O head of snake
	     printf("O");
	  else if(i==fruitX && j==fruitY)
	     printf("$");                               // $ is fruit
	  else
	  {  int ch=0;
	     for(k=0;k<CountTail;k++ )        // follow O
	     {
	       if(i==tailX[k] && j==tailY[k])
	       {
	       printf("o");
	       ch=1;
	       }
	     }
	   if(ch==0)
	     printf(" ");
	  }
       }
     }
     printf("\n");
  }
  printf("SCORE = %d",score);
}
void input()
{
  if(kbhit())    // keyboard hit functon
  {
    switch(getch())
    {
      case 'a':    //aswz (a=left,s=right,w=up,z=down)
	flag=1;
	break;
      case 's':
	flag=2;
	break;
      case 'w':
	flag=3;
	break;
      case 'z':
	flag=4;
	break;
      case 'x':
	gameOver=1;
	break;
    }
  }
}
void MakeLogic()
{
  int i;
  int prevX=tailX[0];              // use array
  int prevY=tailY[0];
  int prev2X,prev2Y;
  tailX[0]=x;
  tailY[0]=y;

  for(i=1;i<CountTail;i++)
  {
   prev2X=tailX[i];
   prev2Y=tailY[i];
   tailX[i]=prevX;
   tailY[i]=prevY;
   prevX=prev2X;
   prevY=prev2Y;
  }

  switch(flag)            // direction of snake
  {
    case 1:
	y--;
	break;
    case 2:
	y++;
	break;
    case 3:
	x--;
	break;
    case 4:
	x++;
	break;
    default:
	  break;
  }
  if(x<0||x>width||y<0||y>height)              // hit boundary  game over
    gameOver=1;

  for(i=0;i<CountTail;i++)             // head of snake hit to body game over
  {
    if(x==tailX[i] && y==tailY[i])
      gameOver=1;
  }

  if(x==fruitX && y==fruitY)                    // new fruit generated
  {
  label3:
  fruitX=rand()%20;
  if (fruitX==0)
     goto label3;
  label4:
  fruitY=rand()%20;
  if (fruitY==0)
     goto label4;
   score+=1;
   CountTail++;             // number of fruit eat
  }
}
int main()
{
 int m,n;
 char c;
   label5:
 clrscr();
   setup();
   while(!gameOver)
   {
    draw();
    input();
    MakeLogic();

    for(m=0;m<1000;m++){         // slow speed
      for(n=0;n<1000;n++){
      }
    }
    for(m=0;m<1000;m++){
       for(n=0;n<1000;n++){
       }
    }
   }
   printf("\nPress Y to continue again :");       // restart game
   scanf("%c",&c);
   if(c=='y'||c=='Y')
    goto label5;
 getch();
 return 0;
}