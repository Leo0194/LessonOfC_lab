#include<iostream>
#include<cmath>
#include "1.h"
//编写一个判别素数的函数
using namespace std;
int num,i;


void disp(){
    /*if(flag==0)
    {
        cout<<"输入的数不是素数"<<endl;
    }*/
    if(flag==1){
        cout<<"输入素数是"<<i<<endl;
    }
}


int main(){
    
    cout<<"------判别素数------"<<endl;
    cout<<"请输入一个非负整数："<<endl;;
    for(i=100;i<=200;i++){
        temp=(int)sqrt(i);
        panbiesushu(i);
        disp();
    }
    


    return 0;
}