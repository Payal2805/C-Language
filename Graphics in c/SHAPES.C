#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
setbkcolor(CYAN);
printf("\n\n\n Line :");
line(62,53,190,53);
printf("\n\n\n\n Rectangal :");
rectangle(125,120,350,190);
printf("\n\n\n\n\n\n\n Arc :");
arc(120,224,180,0,40);
printf("\n\n\n\n\n\n\n Circle :");
circle(130,345,45);
getch();
}