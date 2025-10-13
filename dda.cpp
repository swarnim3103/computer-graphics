#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

void dda_slope1(int x0, int y0, int x1, int y1) {
    cout << "DDA Line 1 with positive slope where x0<x1" << "\n";
    int dx = x1 - x0;
    int dy = y1 - y0;
    cout << "dx :" << dx << "\n";
    cout << "dy :" << dy << "\n";
    cout << "slope :" << (float)dy/dx << "\n";
    
    int steps = max(abs(dx), abs(dy));
    cout << "steps :" << steps << "\n";
    
    float x_inc = (float)dx / steps;
    float y_inc = (float)dy / steps;
    cout << "x_inc :" << x_inc << "\n";
    cout << "y_inc :" << y_inc << "\n";
    
    float x = x0;
    float y = y0;
    int k = 1;
    
    for(int i = 0; i <= steps; i++) {
        cout << "k :" << k << "\n";
        cout << "(" << (int)(x + 0.5) << "," << (int)(y + 0.5) << ")" << "\n";
        putpixel((int)(x + 0.5), (int)(y + 0.5), YELLOW);
        k++;
        x += x_inc;
        y += y_inc;
        delay(50);
    }
}

void dda_slope2(int x0, int y0, int x1, int y1) {
    cout << "DDA Line 2 with negative slope where y0>y1" << "\n";
    int dx = x1 - x0;
    int dy = y1 - y0;
    cout << "dx :" << dx << "\n";
    cout << "dy :" << dy << "\n";
    cout << "slope :" << (float)dy/dx << "\n";
    
    int steps = max(abs(dx), abs(dy));
    cout << "steps :" << steps << "\n";
    
    float x_inc = (float)dx / steps;
    float y_inc = (float)dy / steps;
    cout << "x_inc :" << x_inc << "\n";
    cout << "y_inc :" << y_inc << "\n";
    
    float x = x0;
    float y = y0;
    int k = 1;
    
    for(int i = 0; i <= steps; i++) {
        cout << "k :" << k << "\n";
        cout << "(" << (int)(x + 0.5) << "," << (int)(y + 0.5) << ")" << "\n";
        putpixel((int)(x + 0.5), (int)(y + 0.5), YELLOW);
        k++;
        x += x_inc;
        y += y_inc;
        delay(50);
    }
}

void dda_slope3(int x0, int y0, int x1, int y1) {
    cout << "DDA Line 3 with positive slope where x0>x1" << "\n";
    int dx = x1 - x0;
    int dy = y1 - y0;
    cout << "dx :" << dx << "\n";
    cout << "dy :" << dy << "\n";
    cout << "slope :" << (float)dy/dx << "\n";
    
    int steps = max(abs(dx), abs(dy));
    cout << "steps :" << steps << "\n";
    
    float x_inc = (float)dx / steps;
    float y_inc = (float)dy / steps;
    cout << "x_inc :" << x_inc << "\n";
    cout << "y_inc :" << y_inc << "\n";
    
    float x = x0;
    float y = y0;
    int k = 1;
    
    for(int i = 0; i <= steps; i++) {
        cout << "k :" << k << "\n";
        cout << "(" << (int)(x + 0.5) << "," << (int)(y + 0.5) << ")" << "\n";
        putpixel((int)(x + 0.5), (int)(y + 0.5), WHITE);
        k++;
        x += x_inc;
        y += y_inc;
        delay(50);
    }
}

void dda_slope4(int x0, int y0, int x1, int y1) {
    cout << "DDA Line 4 with negative slope where y0<y1" << "\n";
    int dx = x1 - x0;
    int dy = y1 - y0;
    cout << "dx :" << dx << "\n";
    cout << "dy :" << dy << "\n";
    cout << "slope :" << (float)dy/dx << "\n";
    
    int steps = max(abs(dx), abs(dy));
    cout << "steps :" << steps << "\n";
    
    float x_inc = (float)dx / steps;
    float y_inc = (float)dy / steps;
    cout << "x_inc :" << x_inc << "\n";
    cout << "y_inc :" << y_inc << "\n";
    
    float x = x0;
    float y = y0;
    int k = 1;
    
    for(int i = 0; i <= steps; i++) {
        cout << "k :" << k << "\n";
        cout << "(" << (int)(x + 0.5) << "," << (int)(y + 0.5) << ")" << "\n";
        putpixel((int)(x + 0.5), (int)(y + 0.5), WHITE);
        k++;
        x += x_inc;
        y += y_inc;
        delay(50);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int errorcode = graphresult();
    if (errorcode != grOk) {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        getch();
        exit(1);
    }
    
    dda_slope1(10, 10, 210, 210);
    dda_slope2(230, 210, 430, 10);
    dda_slope3(220, 210, 20, 10);
    dda_slope4(440, 10, 240, 210);
    
    getch();
    closegraph();
    return 0;
}
