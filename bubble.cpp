#include<iostream>

using namespace std;

int num[8];
int temp;

void inputNum(){        //初始化数组
    cout<<"请输入8个整数："<<endl;

    for(int i=0;i<8;i++){
        cin>>num[i];
    }
}

void bubbleSort(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(num[j]>num[j+1]){
                temp=num[j+1];
                num[j+1]=num[j];
                num[j]=temp;
            }
        }
    }

    cout<<"冒泡排序完成:"<<endl;
    for(int i=0;i<8;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
int main(){

    inputNum();
    bubbleSort();

    return 0;
}