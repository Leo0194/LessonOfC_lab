#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;


//指定二维数组的行数和列数
int arrayA[3][4];
int arrayB[4][4];
//int arrayA[3][4]={{9,80,205,40},{90,-60,96,1},{210,-3,101,89} };
//int arrayB[4][4]={{9,80,205,40},{90,-60,96,1},{210,-3,101,89},{45,54,156,7}};
//int tempmaxA[3],tempminA[4],tempmaxB[4],tempminB[4];
int flag=1,tempfindmax[3],tempfindmin[4];

void inputArray(){

    

    cout<<"请输入矩阵A："<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",& arrayA[i][j]);
        }
    }

    cout<<"请输入矩阵B："<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arrayB[i][j]);
        }
    }



}


void findMaxvalue(){
        cout<<"-------------------------------矩阵A----------------------------"<<endl;
        cout<<"arrayA:"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cout<<setw(4)<<arrayA[i][j];
            }
            cout<<endl;
        }
        int temp_max;
        //int tempSaddle;
        
        for(int i=0;i<3;i++){
            temp_max=arrayA[i][0];
            for(int j=1;j<4;j++){
            
            if(temp_max<arrayA[i][j])
                {
                    temp_max=arrayA[i][j];
                }

            //tempmaxA[i]=temp_max;
            }

            cout<<i+1<<"行的最大值分别是："<<temp_max<<"  "<<endl;
        }
        cout<<endl;
        for(int i=0;i<4;i++){
            temp_max=arrayA[0][i];
            for(int j=1;j<3;j++){
                if(temp_max<arrayA[j][i])
                {
                    temp_max=arrayA[j][i];
                }
            }
            //tempminA[i]=temp_max;
            cout<<i+1<<"列的最大值分别是："<<temp_max<<"  "<<endl;
        }


       
        
        cout<<endl;

        cout<<"-------------------------------矩阵B----------------------------";
        cout<<endl;
        cout<<endl<<"arrayB:"<<endl;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<setw(4)<<arrayB[i][j];
            }
            cout<<endl;
        }
         for(int i=0;i<4;i++){
            temp_max=arrayB[i][0];
            for(int j=1;j<4;j++){
            
            if(temp_max<arrayB[i][j])
                {
                    temp_max=arrayB[i][j];
                }
            }
            //tempmaxB[i]=temp_max;   //tempmaxB存储的是每一行的最大值
            cout<<i+1<<"行的最大值分别是："<<temp_max<<"  "<<endl;
        }

        cout<<endl;

        for(int i=0;i<4;i++){
            temp_max=arrayB[0][i];
            for(int j=1;j<4;j++){
                if(temp_max<arrayB[j][i])
                {
                    temp_max=arrayB[j][i];
                }
            }
            //tempminB[i]=temp_max;   
            cout<<i+1<<"列的最大值分别是："<<temp_max<<"  "<<endl;
        }
       
}





void findSaddle(){

        cout<<"----------------------找鞍点-----------------------------------"<<endl;
         for(int i=0;i<3;i++){
             tempfindmax[i]=arrayA[i][0];
            for(int j=0;j<4;j++){
                if(tempfindmax[i]<arrayA[i][j]){
                    tempfindmax[i]=arrayA[i][j];      //最大值放在tempfindmax  3
                }
            }
         }

          for(int i=0;i<4;i++){
             tempfindmin[i]=arrayA[0][i];
            for(int j=0;j<3;j++){
                if(tempfindmin[i]>arrayA[j][i]){     //最小值放在tempfindmin数组中  4
                    tempfindmin[i]=arrayA[j][i];
                }
            }
         }
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                if(arrayA[i][j]==tempfindmax[i] && arrayA[i][j]==tempfindmin[j])
                {cout<<" 鞍点已经找到： "<<arrayA[i][j];
                flag=1;
                break;
                }
            }
        }

        if (flag==0)
            cout<<"鞍点没找到";

}



int main(){

    inputArray();
    findMaxvalue();
    findSaddle();
    return 0;
}