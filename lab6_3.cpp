#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
//  （4）有5个学生,每个学生数据包括：学号、姓名、三门课的成绩。编程将这5个学生的数据按总分降序排列后输出
using namespace std;
struct student{
    int StudentId;
    string StudentName;
    int StudentGrade;
};

struct student s[5];

void init(){        //初始化
    for(int i=0;i<5;i++){
        cout<<"请输入第"<<i+1<<"个学生的学号、姓名、成绩"<<endl;
        cin>>s[i].StudentId>>s[i].StudentName>>s[i].StudentGrade;
    }

}


void sortGrade(){    //按照总分降序排列
    int  max=s[0].StudentGrade;
    int temp;
    for(int i=1;i<5;i++){
        for(int j=i;j<5;j++){
            if(max<s[i].StudentGrade){
                temp=max;
                max=s[i].StudentGrade;
                s[i].StudentGrade=temp;
            }
        }
    }
}

bool jiangxu(const student &x,const student &y){
    return x.StudentGrade>y.StudentGrade;
}


void disp(){
    for(int i=0;i<5;i++){
        cout<<setw(5)<<s[i].StudentId<<setw(5)<<" ";
        cout<<setw(5)<<s[i].StudentName<<setw(5)<<" ";
        cout<<setw(5)<<s[i].StudentGrade<<setw(5)<<" ";
        cout<<endl;
    }
    
}


int main(){
    
    init();
    disp();
    //sortGrade();
    //bool flag=jiangxu();
    sort(s,s+5,jiangxu);     //利用STL模板简单
    cout<<"-----------排序后--------------"<<endl;
    disp();
    return 0;
}