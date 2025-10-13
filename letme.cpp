#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);

    getch();
    closegraph();
    return 0;
}