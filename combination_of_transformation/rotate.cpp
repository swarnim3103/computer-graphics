#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<int> tr_pt(int x,int y,int tx,int ty){
    int x2 = x + tx;
    int y2 = y + ty;
    return {x2,y2};
}
vector<int> translate(int x,int y,int x1,int y1,int tx,int ty){
    int x2 = x + tx;
    int y2 = y + ty;
    int x3 = x1 + tx;
    int y3 = y1 + ty;
    line(x2,y2,x3,y3);
    return {x2,y2,x3,y3};

}
vector<int> rotate(int x,int y,int d){
    float rad = d * 3.14 / 180;
    int x2 = x * cos(rad) - y * sin(rad);
    int y2 = x * sin(rad) + y * cos(rad);
    return {x2,y2};

}
//origin assuming at 20,200;
int main() {
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);
    outtextxy(10,10,(char*)"translate to orgin\n");
    line(20,20,20,210); //y axis
    line(10,200,200,200); //x axis
    line(100,100,130,130); //line 1
    line(100,100,70,130);  //line 2
    line(70,130,130,130);  //line 3
    //center of triangle is 100,120
    //translating center to origin will take factor -80,80
    vector<int> arr1=translate(100,100,130,130,-80,80);
    vector<int> arr2=translate(100,100,70,130,-80,80);
    vector<int> arr3=translate(70,130,130,130,-80,80);



    //2nd graph 
    outtextxy(220,10,(char*)"rotate at origin by 45 degrees\n");
    //now origin at 220,200
    line(220,20,220,210); //y axis
    line(210,200,400,200); //x axis
    //now translating to origin will take factor 200,0
    vector<int> arr4=translate(arr1[0],arr1[1],arr1[2],arr1[3],200,0); 
    vector<int> arr5=translate(arr2[0],arr2[1],arr2[2],arr2[3],200,0); 
    vector<int> arr6=translate(arr3[0],arr3[1],arr3[2],arr3[3],200,0); 
    //now rotating the triangle by 45 degrees
    vector<int> arr7=rotate(arr4[0],arr4[1],45);
    vector<int> arr8=rotate(arr5[2],arr5[3],45);
    vector<int> arr9=rotate(arr6[2],arr6[3],45);
    //center at 14,296 -->translate by 206,-96
    vector<int> arr10=tr_pt(arr7[0],arr7[1],206,-96);
    vector<int> arr11=tr_pt(arr8[0],arr8[1],206,-96);
    vector<int> arr12=tr_pt(arr9[0],arr9[1],206,-96);
    //drawing the rotated triangle
    line(arr10[0],arr10[1],arr12[0],arr12[1]);
    line(arr10[0],arr10[1],arr11[0],arr11[1]);
    line(arr11[0],arr11[1],arr12[0],arr12[1]);


    //now the final translate back 
    //3rd graph 
    //origin at 420,200
    outtextxy(430,10,(char*)"translate back from origin");
    line(420,20,420,210);//y axis
    line(410,200,600,200);//x axis
    vector<int> arr13=translate(arr10[0],arr10[1],arr12[0],arr12[1],200,0);
    vector<int> arr14=translate(arr10[0],arr10[1],arr11[0],arr11[1],200,0);
    vector<int> arr15=translate(arr11[0],arr11[1],arr12[0],arr12[1],200,0);

    //translate back to factor 80,-80
    translate(arr13[0],arr13[1],arr13[2],arr13[3],80,-80);
    translate(arr14[0],arr14[1],arr14[2],arr14[3],80,-80);
    translate(arr15[0],arr15[1],arr15[2],arr15[3],80,-80);
    getch();
    closegraph();
    return 0;
}