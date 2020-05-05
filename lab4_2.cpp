#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int array[15]={13,32,43,54,56,76,78,89,13,25,36,37,75,86,90};//按照题意，这15个数按赋初值方法，我自己给出

int num,start=0,End=14,middle;
int boundDown=array[start],boundUp=array[End];
void reduceHalf(){
    sort(array,array+15); 
    cout<<"排序后的数是： ";            //利用STL库将乱序数值递增排序
    for(int i=0;i<15;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl<<"请输入您要查找的那个数："<<endl;
    scanf("%d",&num); //要求用scanf输入
    
    for(;start<=End;)
    {
        middle=(start+End)/2;
        if(num<array[middle]){
            End=middle-1;
        }else if(num>array[middle]){
            start=middle+1;
        }else if(array[middle]==num){
            cout<<"恭喜您，找到了！  待查找数就是"<<array[middle]<<endl;
            break;
        }

    }
    if(array[middle]!=num)
    {
        cout<<"没找到！";
    }
      if(num<boundDown){
        cout<<"您输入的数太小，请重新输入"<<endl;   
    }else if(num>boundUp){
        cout<<"您输入的数太大，请重新输入"<<endl;        
    }

}


int main(){

    reduceHalf();
    return 0;
}