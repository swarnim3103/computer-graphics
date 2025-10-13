#include<stdlib.h>
#include<stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    
    circle(50,50,50); //x,y,radius
    outtextxy(30,110,(char*)"Circle"); //x,y,text
    rectangle(110,30,220,80);//left,top,right,bottom
    outtextxy(125,110,(char*)"Rectangle");
    line(230,50,430,50);//from x1,y1 to x2,y2
    outtextxy(300,110,(char*)"Line");
    getch();
    closegraph();
    

    return 0;
}