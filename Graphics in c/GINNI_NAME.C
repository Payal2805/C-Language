#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
setbkcolor(9);
line(100,100,370,100);
line(120,100,120,170);
arc(147,100,0,180,27);
line(165,100,165,160);
arc(148,155,50,0,17);
line(180,100,180,170);
circle(210,140,13);
line(210,127,250,127);
circle(250,140,13);
line(250,127,300,127);
line(300,100,300,170);
line(330,100,330,170);
ellipse(315,100,0,180,15,25);
getch();
}