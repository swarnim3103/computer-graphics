#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;

void clip(int x1, int y1, int x2, int y2, int x, int y)
{
    if (x <= x2 && x >= x1 && y <= y2 && y >= y1)
    {
        putpixel(x, y, RED);
        putpixel(x + 1, y + 1, RED);
        putpixel(x + 1, y, RED);
        putpixel(x + 1, y - 1, RED);
        putpixel(x - 1, y - 1, RED);
        putpixel(x - 1, y, RED);
        putpixel(x - 1, y + 1, RED);
        putpixel(x, y - 1, RED);
        putpixel(x, y + 1, RED);
    }
    else
    {
        putpixel(x, y, WHITE);
        putpixel(x + 1, y + 1, WHITE);
        putpixel(x + 1, y, WHITE);
        putpixel(x + 1, y - 1, WHITE);
        putpixel(x - 1, y - 1, WHITE);
        putpixel(x - 1, y, WHITE);
        putpixel(x - 1, y + 1, WHITE);
        putpixel(x, y - 1, WHITE);
        putpixel(x, y + 1, WHITE);
    }
}
int main()
{
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);
    cout << "enter the points \n";
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int m, n, x, y;
    m = 100;
    n = 100;
    x = 400;
    y = 400;
    rectangle(m, n, x, y);

    for (int j = 0; j < 10; j += 2)
    {
        clip(m, n, x, y, arr[j], arr[j + 1]);
    }
    getch();
    closegraph();
    return 0;
}