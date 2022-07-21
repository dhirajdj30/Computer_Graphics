// microproject sinking ship
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void animateShip();
void drawShip(int x);
void draw_sinkShip(int x,int y,int z,int v);
void draw_sinkShip2(int x,int y,int z,int v);
void drawStable();
void rectangles(int x,int y,int x1,int y1,int n);
void rectangles2(int x,int y,int x1,int y1,int n);


void main(){

int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
animateShip();
getch();
}

void animateShip(){

    int mv=0;
    int my=0;
    int my1=0;
    int y;
    int k;
    for(y=0;y<45;y++){
	mv=(y*5);
	cleardevice();
	drawShip(mv);
	delay(100);
    }

    for(k=0;k<5;k++){
	cleardevice();
	my=k*-1;
	my1=k*1;
	draw_sinkShip(mv,my,mv,my1);
	delay(100);
    }


    for(y=0;y<8;y++){
	my=5+(y*10);
	cleardevice();
	draw_sinkShip2(mv,my,mv,my1);
	delay(50);
    }


}


void draw_sinkShip(int mv,int my,int mv1,int my1){
    int div=4;
    int b;
    drawStable();

    //ships start
   line(50+mv,315+my,150+mv1,315+my1);
    line(37+mv,290+my,163+mv1,290+my1);
    line(45+mv,305+my,155+mv1,305+my1);

    line(50+mv,315+my,37+mv1,290+my);
    line(150+mv,315-my,163+mv1,290-my);


    rectangles(50+mv,277,150+mv1,290,my1/div);
    rectangles(43+mv,270,155+mv1,277,my1/div);

    for(b=1;b<5;b++){
	    rectangles(42+(b*20)+mv,281,52+(b*20)+mv1,285,my1/div);

	    if(b<=3){
	    rectangles(40+(b*25)+mv,255,55+(b*25)+mv1,270,my1/div);
	    rectangles(40+(b*25)+mv,255,55+(b*25)+mv1,258,my1/div);
	    }     //if

	}//for
	//ship ends
    }


void rectangles(int x,int y,int x1,int y1,int n){

line(x,y-n,x1,y+n);
line(x,y1-n,x1,y1+n);
line(x,y-n,x,y1-n);
line(x1,y+n,x1,y1+n);
}

void rectangles2(int x,int y,int x1,int y1,int n){
int div=n/8;
line(x,y+n-div,x1,y+n+div);
line(x,y1+n-div,x1,y1+n+div);

line(x1,y+n+div,x1,y1+n+div);
}


void draw_sinkShip2(int mv,int my,int mv1,int my1){
int b;
drawStable();

//ships start
line(50+mv,315+my-my1,150+mv1,315+my1+my);
line(37+mv,290+my-my1,163+mv1,290+my1+my);
line(45+mv,305+my-my1,155+mv1,305+my1+my);

line(50+mv,315+my-my1,37+mv1,290+my-my1);
line(150+mv,315+my+my1,163+mv1,290+my+my1);


rectangles2(50+mv,277,150+mv1,290,my);
rectangles2(43+mv,270,155+mv1,277,my);

for(b=1;b<5;b++){
rectangles2(42+(b*20)+mv,281,52+(b*20)+mv1,285,my);

if(b<=3){
rectangles2(40+(b*25)+mv,255,55+(b*25)+mv1,270,my);
rectangles2(40+(b*25)+mv,255,55+(b*25)+mv1,258,my);
}     //if

}//for
//ship ends
}




void drawShip(int mv){
int a;
int b;
drawStable();

//ships start
line(50+mv,315,150+mv,315);
line(50+mv,315,37+mv,290);
line(150+mv,315,163+mv,290);
line(37+mv,290,163+mv,290);
line(45+mv,305,155+mv,305);

for(a=1;a<6;a++){
circle(40+(a*20)+mv,297,3);
}

rectangle(50+mv,277,150+mv,290);
rectangle(43+mv,270,155+mv,277);

for(b=1;b<5;b++){
rectangle(42+(b*20)+mv,281,52+(b*20)+mv,285);

if(b<=3){
rectangle(40+(b*25)+mv,255,55+(b*25)+mv,270);
rectangle(40+(b*25)+mv,255,55+(b*25)+mv,258);
}     //if

}//for
//ship ends
}




void drawStable(){ // stone and sea
int adjust=0;
int m;
int n;
//stone
line(400,280,690,600);
line(370,300,400,280);
line(350,350,370,300);
line(350,350,320,400);
line(320,400,360,800);
for(m=1;m<50;m++){

if(adjust==0){
adjust=10;
}else{
adjust=0;
}

for(n=1;n<30;n++){
line(10+(n*20)+adjust,305+(m*5),15+(n*20)+adjust,305+(m*5));
}

}
}

