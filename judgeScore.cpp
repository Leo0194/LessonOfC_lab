#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int score[6];
    int sum_score=0;
    cout<<"评委打分系统"<<endl;
    cout<<"*************"<<endl;

    cout<<"请输入恰当的分数，介于0到100的值："<<endl;
    for(int i=0;i<6;i++){
        
        cin>>score[i];
     
    }
    
    int max=*max_element(score,score+6);
    int min=*min_element(score,score+6);   //这里我利用了c++的STL库，减少了自己手动循环寻找最大值和最小值

    for(int i=0;i<6;i++){
        sum_score=sum_score+score[i];
    }

    cout<<"找到的最大值是："<<max<<endl;
    cout<<"找到的最小值是："<<min<<endl;
    double  average=(sum_score-max-min)/4.0;
    cout<<"去掉一个最大值，再去掉一个最小值"<<endl;
    cout<<"求取的平均数是"<<average;




    return 0;
}