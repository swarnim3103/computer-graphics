#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(200,200,200,200);  
    
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(200,200,100,100);  
    
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(200,200,50,50);    

    outtextxy(150,420,(char*)"Concentric Circles");
    getch();
    closegraph();
    
    return 0;
}