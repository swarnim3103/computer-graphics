#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void four_con(int bon_col,int fill_col, int old_col, int x, int y)
{
    if (getpixel(x, y) == old_col || getpixel(x, y) != fill_col && getpixel(x,y)!=bon_col)
    {
        putpixel(x, y, fill_col);
        delay(2);
        four_con(bon_col,fill_col, old_col, x + 1, y);
        four_con(bon_col,fill_col, old_col, x, y + 1);
        four_con(bon_col,fill_col, old_col, x, y - 1);
        four_con(bon_col,fill_col, old_col, x - 1, y);
    }
}
void eight_con(int fill_col, int old_col, int x, int y)
{
    if (getpixel(x, y) == old_col || getpixel(x, y) != fill_col)
    {
        putpixel(x, y, fill_col);
        delay(2);
        eight_con(fill_col, old_col, x + 1, y);
        eight_con(fill_col, old_col, x + 1, y + 1);
        eight_con(fill_col, old_col, x + 1, y - 1);
        eight_con(fill_col, old_col, x, y + 1);
        eight_con(fill_col, old_col, x - 1, y + 1);
        eight_con(fill_col, old_col, x - 1, y - 1);
        eight_con(fill_col, old_col, x, y - 1);
        eight_con(fill_col, old_col, x - 1, y);
    }
}
int main()
{
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);

    int x = 250, y = 200;
    setcolor(WHITE);
    rectangle(250,200,350,300);
    four_con(1,1, 15, x+1, y+1);

    int x2 = 110, y2 = 30;
    setcolor(WHITE);
    rectangle(110, 30, 220, 80);
    eight_con(1, 15, x2 + 1, y2 + 1);
    getch();
    closegraph();
    return 0;
}