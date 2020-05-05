#include<iostream>
using namespace std;
int greatDivsor(int a,int b){ 
    //利用辗转相除法求解
    int c;
    while(c!=0){
        c=a%b;
        a=b;
        b=c;
    }
    return a;

}

int leastMultiple(int a,int b){
    //求最小公倍数利用最大公约数求解        这里体现的素数的原子性

     return (a*b)/greatDivsor(a,b);
}



int main(){

    int m,n;
    cout<<"请输入两个正整数m和n（m>n）:"<<endl;
    cin>>m>>n;

    cout<<"输入值的最大公约数是：" <<greatDivsor(m,n)<<endl;
    cout<<"输入值的最小公倍数是：" <<leastMultiple(m,n);
    return 0;
}