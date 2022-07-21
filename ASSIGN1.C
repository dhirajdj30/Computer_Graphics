#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm,"C:\\TC\\BGI" );
	setcolor(RED);
	outtextxy(300,300,"Polytechnic");
	getch();
}