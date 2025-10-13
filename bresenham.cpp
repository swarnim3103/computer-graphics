#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include<iostream>
using namespace std;
void slope1(int x0,int y0,int x1, int y1){
    cout<<"Line 1 with positive slope where x0<x1"<<"\n";
    int dx=x1-x0;
    int dy=y1-y0;
    cout<<"dx :"<<dx<<"\n";
    cout<<"dy :"<<dy<<"\n";
    cout<<"slope :"<<(float)dy/dx<<"\n";
    int p= 2*(dy-dx);
    int k=1;
    while(x0<=x1){
        cout<<"k :"<<k<<"\n";
        cout<<"("<<x0<<","<<y0<<")"<<"\n";
        putpixel(x0, y0, YELLOW);
        k++;
        if(p<0){
            x0+=1;
            p+=2*dy;
        }else{
            x0+=1;
            y0+=1;
            p+=2*(dy-dx);
        }
        delay(10);
    }
    cout<<"("<<x0<<","<<y0<<")";

}
void slope2(int x0,int y0,int x1, int y1){
    cout<<"Line 2 with negative slope where y0>y1"<<"\n";
    int dx=x1-x0;
    int dy=y1-y0;
    cout<<"dx :"<<dx<<"\n";
    cout<<"dy :"<<dy<<"\n";
    cout<<"slope :"<<(float)dy/dx<<"\n";
    int p=2*(dy-dx);
    int k=1;
    while(y0>=y1){
        cout<<"k :"<<k<<"\n";
        cout<<"("<<x0<<","<<y0<<")"<<"\n";
        putpixel(x0, y0, YELLOW);
        k++;
        if(p<0){
            y0+=1;
            p+=2*dx;
        }else{
            x0+=1;
            y0-=1;
            p+=2*(dx-dy);
        }
        delay(10);
    }
}
void slope3(int x0,int y0,int x1, int y1){
    cout<<"Line 3 with positive slope where x0>x1"<<"\n";
    int dx=x1-x0;
    int dy=y1-y0;
    cout<<"dx :"<<dx<<"\n";
    cout<<"dy :"<<dy<<"\n";
    cout<<"slope :"<<(float)dy/dx<<"\n";
    int p=2*(dy-dx);
    int k=1;
    while(x0>=x1){
        cout<<"k :"<<k<<"\n";
        cout<<"("<<x0<<","<<y0<<")"<<"\n";
        k++;   
        putpixel(x0, y0, WHITE);
        if(p<0){
            x0+=1;
            p+=2*dx;
        }else{
            x0-=1;
            y0-=1;
            p+=2*(dy-dx);
        }
        delay(10);
    }
}
void slope4(int x0,int y0,int x1, int y1){
    cout<<"Line 4 with negative slope where y0<y1"<<"\n";
    int dx=x1-x0;
    int dy=y1-y0;
    cout<<"dx :"<<dx<<"\n";
    cout<<"dy :"<<dy<<"\n";
    cout<<"slope :"<<(float)dy/dx<<"\n";
    int p=2*(dy-dx);
    int k=1;
    while(y0<=y1){
        cout<<"k :"<<k<<"\n";
        cout<<"("<<x0<<","<<y0<<")"<<"\n";
        k++;
        putpixel(x0, y0, WHITE);
        if(p<0){
            y0+=1;
            p+=2*dy;
        }else{
            x0-=1;
            y0+=1;
            p+=2*(-dx+dy);
        }
        delay(10);
    }
}
int main() {
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);
    slope1(10,10,210,210);
    slope2(230,210,430,10);
    slope3(220,210,20,10);
    slope4(440,10,240,210);
    getch();
    closegraph();
    return 0;
}