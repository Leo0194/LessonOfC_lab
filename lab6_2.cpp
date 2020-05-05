//定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年问题。
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
struct DATE
{   
    int year;
    int month;
    int day;
    
};


void computeDate(int year,int month,int day){

    int monthMaxday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sumday=day;
    for(int i=month-1;i>0;i--){
        sumday=sumday+monthMaxday[i];
    }
    
    if(year%4==0&&year%100!=0 || year%400==0){
        cout<<year<<" 是闰年，该日是第 "<<sumday+1<<endl;
    }else{
        cout<<year<<"不是闰年，该日是第 "<<sumday<<endl;
    }



}





int main(){

    struct DATE mydate;
    cin>>mydate.year>>mydate.month>>mydate.day;
    computeDate(mydate.year,mydate.month,mydate.day);
    return 0;
}