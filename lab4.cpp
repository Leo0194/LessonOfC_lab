#include<iostream>

using namespace std;

//初始化8个整数
int array[8];
int temp_max;
int temp;
void initializeArray(){
    cout<<"请输入8个整数："<<endl;
    for(int i=0;i<8;i++){
        cin>>array[i];
    }
}

void sort(){
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            temp_max=i;
            if(array[temp_max]>array[j])
            {
                temp_max=j;
            }

            if(temp_max!=i){      //上述是找到最大值的索引值，下面要让索引值对应的数值交换
                temp=array[i];
                array[i]=array[temp_max];
                array[temp_max]=temp;
            }
        }
    }
}

void display(){
    cout<<"排序后的结果是："<<endl;
    for(int i=0;i<8;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

}

int main(){

    initializeArray();
    sort();
    display();


    return 0;
}