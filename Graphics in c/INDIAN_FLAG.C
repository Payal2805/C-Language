#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
rectangle(200,100,450,250);
line(200,150,450,150);
line(200,200,450,200);

circle(325,175,20);

setfillstyle(1,1);
floodfill(322,173,WHITE);

circle(325,175,2);
line(325,175,325,165);
line(325,175,315,165);
line(325,175,325,185);
line(325,175,313,175);
line(325,175,315,185);
line(325,175,338,175);
line(325,175,335,185);
line(325,175,335,165);

//COLOR
setfillstyle(1,6);
floodfill(205,105,WHITE);
setfillstyle(1,15);
floodfill(205,155,WHITE);
setfillstyle(1,2);
floodfill(205,205,WHITE);
delay(2000);
cleardevice();
settextstyle(7,0,2);
outtextxy(220,173," HAPPY INDEPENDANCE DAY . . .");
outtextxy(220,190," JAY HIND . . ! ! !");

getch();
}