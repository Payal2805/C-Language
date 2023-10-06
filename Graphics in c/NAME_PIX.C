#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
for(int x=0;x<=5;x++)
{
setcolor(x);
cleardevice();
for(int i=0;i<=350;i++)
{
putpixel(100+i,100,14);
putpixel(100,100+i,14);
delay(3);
}
for(i=450;i>=100;i--)
{
putpixel(i,450,14);
putpixel(450,i,14);
delay(3);
}
settextstyle(1,0,7);

outtextxy(130,210,"P");
delay(300);
outtextxy(165,210,"A");
delay(300);
outtextxy(205,210,"Y");
delay(300);
outtextxy(240,210,"A");
delay(300);
outtextxy(280,210,"L");
delay(300);
outtextxy(315,210,"-");
delay(300);
outtextxy(353,210,"G");
delay(300);
}

getch();
closegraph();
}