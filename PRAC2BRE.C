#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void DrawBreLine(int x1, int y1, int x2, int y2)
{
	int dx,dy,x,y,p;
	dx= x2-x1;
	dy= y2-y1;
	x= x1;
	y= y1;
	p=2*dy-dx;
	while(x<=x2)
	{
		if (p>0)
		{     delay(5000);
			putpixel(x,y,7);
			y=y+1;
			p=p+2*dy-2*dx;
		}
		else
		{
			putpixel(x,y,7);
			p=p+2*dy;
			}
		x=x+1;

		}

}
void main()
{
	int gd=DETECT, gm , x1,y1,x2,y2;
	initgraph(&gd,&gm,"C://TC//BGI");
	DrawBreLine(100,100,300,300);

	getch();


}