#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
void translate(int x,int y,int x1,int y1,int tx,int ty){
    int x2 = x + tx;
    int y2 = y + ty;
    int x3 = x1 + tx;
    int y3 = y1 + ty;
    line(x2,y2,x3,y3);

}
void rotate(int x,int y,int x1,int y1,int d){
    float rad = d * 3.14 / 180;
    int x2 = x * cos(rad) - y * sin(rad);
    int y2 = x * sin(rad) + y * cos(rad);
    int x3 = x1 * cos(rad) - y1 * sin(rad);
    int y3 = x1 * sin(rad) + y1 * cos(rad);
    int f=x2-x;
    int g=y2-y;
    translate(x2,y2,x3,y3,-f,-g);  

}
void sheer(int x,int y,int x1,int y1,float shx,float shy){
    int x2 = x + shx * y;
    int y2 = y + shy * x;
    int x3 = x1 + shx * y1;
    int y3 = y1 + shy * x1;
    line(x2,y2,x3,y3);
}
void mirror(int x,int y,int x1,int y1){
    int x2 = y;
    int y2 = x;
    int x3 = y1;
    int y3 = x1;
    line(x2,y2,x3,y3);

}
void scale(int x,int y,int x1,int y1,float sx,float sy){
    int x2 = x * sx;
    int y2 = y * sy;
    int x3 = x1 * sx;
    int y3 = y1 * sy;
    line(x2,y2,x3,y3);

}

int main() {
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);


    outtextxy(10,10,(char*)"1. Translation \n");
    cout<<"enter the factor to translate x and y\n";
    int tx,ty;
    cin>>tx>>ty;
    line(50,50,150,50);
    translate(50,50,150,50,tx,ty);


    outtextxy(260,10,(char*)"2. Rotation \n");
    cout<<"enter the angle to rotate\n";
    int d;
    cin>>d;
    line(280,50,380,50);
    setcolor(RED);
    rotate(280,50,380,50,d);
    setcolor(WHITE);


    outtextxy(490,10,(char*)"3. Scaling \n");
    cout<<"enter the factor to scale x and y\n";
    float sx,sy;
    cin>>sx>>sy;
    line(490,50,590,50);
    scale(990,150,1090,150,sx,sy);


    outtextxy(10,160,(char*)"4. Sheering \n");
    cout<<"enter the factor to shear x and y\n";
    float shx,shy;
    cin>>shx>>shy;
    // rectangle(50,200,150,250);
    line(50,200,150,200);
    setcolor(RED);
    sheer(50,200,150,200,shx,shy);
    setcolor(WHITE);
    line(50,200,50,250);
    setcolor(RED);
    sheer(50,200,50,250,shx,shy);
    setcolor(WHITE);
    line(50,250,150,250);
    setcolor(RED);
    sheer(50,250,150,250,shx,shy);
    setcolor(WHITE);
    line(150,200,150,250);
    setcolor(RED);
    sheer(150,200,150,250,shx,shy);
    setcolor(WHITE);


    outtextxy(260,160,(char*)"5. Mirroring \n");
    line(280,200,380,200);
    mirror(280,200,380,200);
    line(280,200,280,250);
    mirror(280,200,280,250);
    line(280,250,380,250);
    mirror(280,250,380,250);
    line(380,200,380,250);
    mirror(380,200,380,250);
    getch();
    closegraph();
    return 0;
}