#include<iostream>
#include "1.h"
void panbiesushu(int num){
    if(num==0){
        flag==1;
    }
    if(num==1){
        flag==1;
    }
    if(num==2){
            flag=1;   
        }
    if(num==3){
            flag=1;    
        }
    for(int i=2;i<=temp;i++){
        
        if(num%i==0){
            //cout<<"输入的数不是素数！"<<endl;
            flag=0;
            break;
        }
        else{
            //cout<<"输入的数是素数";
            flag=1;
        }
    }
}