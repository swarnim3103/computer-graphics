#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include<vector>
#include<iostream>
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
vector<int> scale(int x,int y,float sx,float sy){
    int x2 = x * sx;
    int y2 = y * sy;
    return {x2,y2};

}
int main() {
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm, path);
    //graph1
    //origin at 20,200
    outtextxy(10,10,(char*)"translate to orgin\n");
    line(20,20,20,210); //y axis
    line(10,200,200,200); //x axis

    line(100,100,130,130); //line 1
    line(100,100,70,130);  //line 2
    line(70,130,130,130);  //line 3

    //center of triangle is 100,120
    //translating center to origin will take factor -80,80
    vector<int> arr4=translate(100,100,130,130,-80,80);
    vector<int> arr5=translate(100,100,70,130,-80,80);
    vector<int> arr6=translate(70,130,130,130,-80,80);
    

    //graph2
   outtextxy(220,10,(char*)"scale at origin\n");
    //now origin at 220,200
    line(220,20,220,210); //y axis
    line(210,200,400,200); //x axis
    vector<int>arr1=translate(arr4[0],arr4[1],arr4[2],arr4[3],200,0);
    vector<int>arr2=translate(arr5[0],arr5[1],arr5[2],arr5[3],200,0);
    vector<int>arr3=translate(arr6[0],arr6[1],arr6[2],arr6[3],200,0);
    //scaling by a factor of 0.5
    vector<int> arr7=scale(arr1[0],arr1[1],0.5,0.5);
    vector<int> arr8=scale(arr1[2],arr1[3],0.5,0.5);
    vector<int> arr9=scale(arr2[2],arr2[3],0.5,0.5);
    //scale by 110,100
    vector<int> arr10=tr_pt(arr7[0],arr7[1],110,100);
    vector<int> arr11=tr_pt(arr8[0],arr8[1],110,100);
    vector<int> arr12=tr_pt(arr9[0],arr9[1],110,100);
    line(arr10[0],arr10[1],arr11[0],arr11[1]);
    line(arr10[0],arr10[1],arr12[0],arr12[1]);
    line(arr12[0],arr12[1],arr11[0],arr11[1]);
    //graph3
    //origin at 420,200
    outtextxy(430,10,(char*)"translate back from origin");
    line(420,20,420,210);//y axis
    line(410,200,600,200);//x axis
    vector<int> arr13=tr_pt(arr10[0],arr10[1],200,0);
    vector<int> arr14=tr_pt(arr11[0],arr11[1],200,0);
    vector<int> arr15=tr_pt(arr12[0],arr12[1],200,0);
    line(arr13[0],arr13[1],arr14[0],arr14[1]);
    line(arr13[0],arr13[1],arr15[0],arr15[1]);
    line(arr15[0],arr15[1],arr14[0],arr14[1]);

    //translat back
    vector<int> arr16=tr_pt(arr13[0],arr13[1],110,-100);
    vector<int> arr17=tr_pt(arr14[0],arr14[1],110,-100);
    vector<int> arr18=tr_pt(arr15[0],arr15[1],110,-100); 
    line(arr16[0],arr16[1],arr17[0],arr17[1]);
    line(arr16[0],arr16[1],arr18[0],arr18[1]);
    line(arr18[0],arr18[1],arr17[0],arr17[1]);
    getch();
    closegraph();
    return 0;
}