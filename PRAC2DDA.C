#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>

void main( )
{
float x,y,x1,y1,x2,y2,dx,dy,step;
int i,gd=DETECT,gm;

initgraph(&gd,&gm,"c:\\TC\\BGI");

	printf("Enter the value of x1: ");
	scanf("%f",&x1);
	printf("Enter the value of y1: ");
	scanf("%f",&y1);
	printf("Enter the value of x2: ");
	scanf("%f",&x2);
	printf("Enter the value of y2: ");
	scanf("%f",&y2)

	dx=abs(x2-x1);
	dy=abs(y2-y1);

	if(dx>=dy)
	step=dx;
	else
	step=dy;

	dx=dx/step;
	dy=dy/step;

	x=x1;
	y=y1;

	i=1;
	while(i<=step)
	{
	putpixel(x,y,5);
	x=x+dx;
	y=y+dy;
	i=i+1;
	delay(100);
	}

	closegraph();
}