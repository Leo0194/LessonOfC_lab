#include<iostream>

using namespace std;

void sixteen2ten(char i){
        //int a=i+'0';
        if('0'<=i && i<='9'){
            cout<<(char)i;
            return ;
        }
        switch (i){
        case 'A':
            {cout<<"10"<<endl;break;}
        case 'B':
            {cout<<"11"<<endl;break;}
        case 'C':
            {cout<<"12"<<endl;break;}
        case 'D':
            {cout<<"13"<<endl;break;}
        case 'E':
            {cout<<"14"<<endl;break;}
        case 'F':
            {cout<<"15"<<endl;break;}
        case 'a':
            {cout<<"10"<<endl;break;}
        case 'b':
            {cout<<"11"<<endl;break;}
        case 'c':
            {cout<<"12"<<endl;break;}
        case 'd':
            {cout<<"13"<<endl;break;}
        case 'e':
            {cout<<"14"<<endl;break;}
        case 'f':
            {cout<<"15"<<endl;break;}
        default :
            cout<<"输入的是无效值"<<endl;
        } 
}


int main(){
    char num;
    cout<<"请输入一个十六进制数："<<endl;
    cin>>num;
    cout<<"输出的十进制数是："<<endl;
    sixteen2ten(num);
    return 0;
}