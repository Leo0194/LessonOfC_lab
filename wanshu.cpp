#include<iostream>
#include<vector>
using namespace std;


int main(){
    cout<<"判断一个数是不是完数！"<<endl;
    cout<<"********************"<<endl;
    cout<<"请输入一个数："<<endl;

    vector<int> digitPlace;
    int sumDigit=0;
    //int num;
    int i;
    //cin>>num;
    for(i=0;i<1000;i++){
    for(int j=1;j<i;j++){
        if(i%j==0){
            digitPlace.push_back(j);
        }
    }
    
   for(int i=0;i<digitPlace.size();i++)
   {
       sumDigit=sumDigit+digitPlace[i];
   }

   if(i==sumDigit){
       cout<<i<<"是完数";
   }
}

    return 0;
}