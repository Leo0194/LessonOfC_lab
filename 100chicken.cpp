#include<iostream>

using namespace std;

int main(){

    int henNum,cockNum,chickNum;
    int henNumCost=3,cockNumCost=2,chickNumCost=1;
    for(henNum=0;henNum<100;henNum++){
        for(cockNum=0;cockNum<100;cockNum++){
            for(chickNum=0;chickNum<100;chickNum++)
            {
                if((henNum+cockNum+chickNum)==100 && (henNum*3+cockNum*2+chickNum*0.5)==100)
                {
                    cout<<"母鸡的数量是："<<henNum<<"  ";
                    cout<<"公鸡的数量是："<<cockNum<<"  ";
                    cout<<"小鸡的数量是："<<chickNum<<endl;
                }
               
            }
        }
    }

    //cout<<henNum<<" "<<cockNum<<" "<<chickNum<<endl;
    return 0;
}