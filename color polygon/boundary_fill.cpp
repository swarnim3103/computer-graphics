#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void four_con(int bon_col, int fill_col, int x, int y)
{
    if (getpixel(x, y) != bon_col &&
        getpixel(x, y) != fill_col)
    {
        putpixel(x, y, fill_col);
        delay(5);
        four_con(bon_col, fill_col, x + 1, y);
        four_con(bon_col, fill_col, x, y + 1);
        four_con(bon_col, fill_col, x - 1, y);
        four_con(bon_col, fill_col, x, y - 1);
    }
}

void eight_con(int bon_col, int fill_col, int x, int y)
{
    if (getpixel(x, y) != bon_col &&
        getpixel(x, y) != fill_col)
    {
        putpixel(x, y, fill_col);
        delay(5);
        eight_con(bon_col, fill_col, x + 1, y);
        eight_con(bon_col, fill_col, x, y + 1);
        eight_con(bon_col, fill_col, x - 1, y);
        eight_con(bon_col, fill_col, x, y - 1);
        eight_con(bon_col, fill_col, x - 1, y - 1);
        eight_con(bon_col, fill_col, x - 1, y + 1);
        eight_con(bon_col, fill_col, x + 1, y + 1);
        eight_con(bon_col, fill_col, x + 1, y - 1);
    }
}

int main()
{
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);

    int x = 250, y = 200, radius = 20;
    setcolor(WHITE);
    circle(x, y, radius);
    four_con(15, 1, x, y);

    int x2 = 110, y2 = 30;
    setcolor(WHITE);
    rectangle(110,30,220,80);
    eight_con(15, 1, x2+1, y2+1);

    getch();
    closegraph();
    return 0;
}