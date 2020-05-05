#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

const string wordMy;
int num;
vector<int> a_num;
vector<string> a_string;       

void swapNum(int *p1,int *p2){
    int temp;
    temp=*p2;
    *p2=*p1;
    *p1=temp;
}

void sortNum(){
   int a,b,c;
   int *a_add,*b_add,*c_add;
   a_add=&a;
   b_add=&b;
   c_add=&c;
   cin>>a>>b>>c;
   //按照从大到小的顺序排
   if(a<b){
       swapNum(a_add,b_add);
   }
   if(a<c){
       swapNum(a_add,c_add);
   }
   if(b<c){
       swapNum(b_add,c_add);
   }
    cout<<a<<" "<<b<<" "<<c;
}
/*void disp(){
    for(int i=0;i<3;i++){
        cout<<a_num[i]<<" ";
    }
}*/
void swapstring(char *p1,char *p2){
    char temp[50];
    strcpy(temp,p2);
    strcpy(p2,p1);
    strcpy(p1,temp);
}
//将字符串排序---字典序  必须用指针，不能用迭代器
void sortString(){
    cout<<"----------字符串比较-------------"<<endl;
    //cout<<"输入3个字符串"<<endl；
    char word1[50]={"anhui university"};
    char word2[50]={"bnhui university"};
    char word3[50]={"university of science and technology of china"};
    cout<<word1<<"---"<<word2<<"---"<<word3<<endl;
    if(strcmp(word1,word2)<0)   //相等条件
    {
        swapstring(word1,word2);
    }
    if(strcmp(word2,word3)<0){
        swapstring(word2,word3);
    }
    if(strcmp(word1,word2)<0)
    {
        swapstring(word1,word2);
    }
    cout<<word1<<"---"<<word2<<"---"<<word3<<endl;

}
void maxNum(){
    int num;
    int sum=0;
    cout<<"Please input 10 nums："<<endl;
    for(int i=0;i<10;i++){
        cin>>num;
        a_num.push_back(num);
    }   //这里已经把数放进堆栈 


    int maxMy=a_num[0]; //默认0使最大
    int temp;
    for(int i=1;i<10;i++){    //需要一个简单排序
       if(maxMy<a_num[i]){     //交换
            temp=maxMy;
            maxMy=a_num[i];
            a_num[i]=temp;
    }  
    }
    cout<<"The max num is "<<maxMy<<endl;

    //for(int j=0;)

    cout<<"mean of the the 10 nums is :   ";
    for(int i=0;i<10;i++){
        sum=sum+a_num[i];
    }
    cout<<sum/10.0;
}

int main(){
    //sortNum();
    //sortString();
    maxNum();
    return 0;
    }