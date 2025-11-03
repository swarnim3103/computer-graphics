#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
vector<int> tr_pt(int x,int y,int tx,int ty){
    int x2 = x + tx;
    int y2 = y + ty;
    return {x2,y2};
}
vector<int> translate(int x,int y,int x1,int y1,int tx,int ty){
    int x2 = x + tx;
    int y2 = y + ty;
    int x3 = x1 + tx;
    int y3 = y1 + ty;
    line(x2,y2,x3,y3);
    return {x2,y2,x3,y3};

}
void mirror(int x,int y,int x1,int y1){
    int x2 = y;
    int y2 = x;
    int x3 = y1;
    int y3 = x1;
    line(x2,y2,x3,y3);

}
//og line : y=-x+10;
//at x=0 ; y=10; we are at origin = 20,200
//so for x=20 ; y=210
//at y=0; x=10; so y=200;x=30;
int main() {
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);
    //graph1
    //origin at 20,200
    outtextxy(10,10,(char*)"translate to orgin\n");
    line(20,20,20,410); //y axis
    line(10,200,200,200); //x axis
    line(20,50,150,200); //og line
    //triangle
    
    line(150,100,180,130); //line 1
    line(150,100,120,130);  //line 2
    line(120,130,180,130);  //line 3
    //graph2

    // origin at 
    outtextxy(220,10,(char*)"mirror about x=y\n");
    line(220,20,220,410); //y axis
    line(210,200,400,200); //x axis
    //graph3
    outtextxy(430,10,(char*)"translate back to old origin\n");
    line(430,20,430,410); //y axis
    line(420,200,600,200); //x axis
    getch();
    closegraph();
    return 0;
}