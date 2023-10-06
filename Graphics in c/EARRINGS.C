#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int i;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
setbkcolor(i);   //background colour
for(i=0;i<=100;i++)
{
setcolor(i);     //setcolor(RED/Any colour)
//circle(319,219-i,20+i);
circle(419,200+i,20+i);
//circle(299-i,239,20+i);
//circle(339+i,239,20+i);
circle(150,200+i,20+i);
delay(100);
}
getch();
}