#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    
    
    line(10,20,10,420);
    line(5,400,410,400);
    rectangle(20, 20, 60, 400); // Bar 1
    rectangle(80, 100, 120, 400); // Bar 2
    rectangle(140, 50, 180, 400); // Bar 3
    rectangle(200, 150, 240, 400); // Bar 4
    rectangle(260, 200, 300, 400); // Bar 5
    outtextxy(150,420,(char*)"Bar Chart");
    getch();
    closegraph();
    
    return 0;
}