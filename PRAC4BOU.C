/* Aim: Program to demonstrate boundary fill algorithm */
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void b_fill(int x, int y, int f, int b)
{
	int c;
	c = getpixel(x,y);
	if((c!=b)&&(c!=f))
	{
		putpixel(x,y,f);
		delay(8);
		b_fill(x+1,y,f,b);
		b_fill(x,y+1,f,b);
		b_fill(x-1,y,f,b);
		b_fill(x,y-1,f,b);
	}
}
//getpixel(x,y) gives the color of specified pixel

void main()
{
int gm,gd=DETECT,radius;
initgraph(&gd,&gm,"c:\\TC\\BGI");
rectangle(50,50,100,100);
b_fill(55,55,4,15);
delay(10);
getch();
}