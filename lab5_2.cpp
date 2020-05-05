#include<iostream>
#include<stdio.h>
#include<string>   //用作验证

using namespace std;
int inputNum;
void transformMy(int a){
    int i=a/10;
    if(i!=0){      //两位数以上
        transformMy(i);
    }
    putchar(a%10 +'0');     //要显示十进制数字 需要先加上'0'

}


//用递归法将一个整数转换成字符串
int main(){
    cin>>inputNum;
    cout<<to_string(inputNum)<<endl;    //用c++ to_string()函数验证
    cout<<"-----使用transformMy----------"<<endl;
    transformMy(inputNum);
    //putchar(4+'0');


    return 0;
}