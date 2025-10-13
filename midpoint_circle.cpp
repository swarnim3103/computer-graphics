#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void plot(int x,int y){
    putpixel(x+200,y+200,YELLOW);}
void quad1(){
    int r=100;
    int x=0,y=r;
    int d=1-r;
    while(x<=y){
        plot(x,y);
        plot(y,x);
        delay(10);
        if(d<0){
            d+=2*x+3;
        }else{
            d+=2*x-2*y+5;
            y--;}
        x++;}}
void quad2(){
    int r=100;
    int x=0,y=r;
    int d=1-r;
    while(x<=y){
        plot(-x,y);
        plot(y,-x);
        delay(10);
        if(d<0){
            d+=2*x+3;
        }else{
            d+=2*x-2*y+5;
            y--;}
        x++;}}
void quad3(){
    int r=100;
    int x=0,y=r;
    int d=1-r;
    while(x<=y){
        plot(-x,-y);
        plot(-y,-x);
        delay(10);
        if(d<0){
            d+=2*x+3;
        }else{
            d+=2*x-2*y+5;
            y--;}
        x++;}}
void quad4(){
    int r=100;
    int x=0,y=r;
    int d=1-r;
    while(x<=y){
        plot(x,-y);
        plot(-y,x);
        delay(10);
        if(d<0){
            d+=2*x+3;
        }else{
            d+=2*x-2*y+5;
            y--;}
        x++;}}
int main() {
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);
    quad1();
    quad2();
    quad3();
    quad4();
    getch();
    closegraph();
    return 0;
}