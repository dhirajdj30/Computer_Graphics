#include<stdio.h>
#include<graphics.h>
#include<math.h>

void trans();
int maxx,maxy,midx,midy;
void main(){
            int ch;
            int gd=DETECT,gm;

            detectgraph(&gd,&gm);

            initgraph(&gd,&gm,"C://TC//BGI");
           
            trans();
return 0;
}

//function for translation of a 3d object
void trans()

{

            int x,y,z,o,x1,x2,y1,y2;

            midx=200;

            midy=200;

            //function to draw 3D rectangular box  
            bar3d(midx+50,midy-100,midx+100,midy-50,20,1);
  delay(1000);
            printf("Enter translation factor");

            scanf("%d%d",&x,&y);

            printf("After translation:");

            bar3d(midx+x+50,midy-(y+100),midx+x+100,midy-(y+50),20,1);

}