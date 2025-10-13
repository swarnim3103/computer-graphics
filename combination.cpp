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
void scale(int x,int y,int x1,int y1,float sx,float sy){
    int x2 = x * sx;
    int y2 = y * sy;
    int x3 = x1 * sx;
    int y3 = y1 * sy;
    line(x2,y2,x3,y3);

}
void mirror(){

}
void og_rotate(){

}
void og_scale(){

}
void og_mirror(){

}
int main() {
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);

    getch();
    closegraph();
    return 0;
}