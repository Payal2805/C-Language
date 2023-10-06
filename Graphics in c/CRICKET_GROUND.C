#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i=0;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
setcolor(15);
circle(300,250,200);
setfillstyle(1,GREEN);
floodfill(402,350,15);
circle(300,250,130);
rectangle(280,165,325,335);
setcolor(15);
rectangle(295,165,310,335);
setfillstyle(1,BROWN);
floodfill(300,200,15);
line(283,180,321,180);
line(283,315,321,315);
while(!kbhit())
{
setcolor(i);
outtextxy(233,150,"T20 World Cup 2023 ..!");
i++;
delay(400);
}
getch();
closegraph();
}