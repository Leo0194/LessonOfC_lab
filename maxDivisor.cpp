#include<iostream>

using namespace std;
int num1,num2;
int maxDivisir(int a,int b){
    int rest;
    while(a>b)
    {
        rest=a%b;
        a=b;
        b=rest;
        if(rest==0)
        {
            cout<<"最大公约数是 "<<a<<endl;
            return a;
        }
        if(a%b==0){
            cout<<"最大公约数是 "<<b<<endl;
            return b;
        }
        

    }
    return 1;
}

int minmultiple(int a,int b){
    int ans=a*b/maxDivisir(a,b);
    cout<<"最小公倍数是 "<<ans<<endl;
    return ans;
}

int main(){

    cout<<"请输入待求解的两个数："<<endl;
    cin>>num1>>num2;
    //maxDivisir(num1,num2);
    minmultiple(num1,num2);
    return 0;

}