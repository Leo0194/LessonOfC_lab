#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
    int upperLetter=0,lowerLetter=0,blank=0,num=0,otherChar=0;
    char words[999];
    cout<<"请输入一串字符串："<<endl;
    gets(words);
    //cout<<letter<<endl;
    int len=strlen(words);
    cout<<"输入的字符数组个数有："<<strlen(words)<<endl;
    for(int i=0;i<len;i++){

        if('A'<=words[i] && words[i]<='Z')
           { upperLetter++;
            
           }
        else if('a'<=words[i]&& words[i]<='z')
        {
            lowerLetter++;
            
        }
        else if(words[i]==' ')
        {
            blank++;
            
        }
        else if('0'<=words[i] && words[i]<='9'){
            num++;
            
        }else{
            otherChar++;   
        }
    }

    cout<<"大写字母有："<<upperLetter<<endl;
    cout<<"小写字母有："<<lowerLetter<<endl;
    cout<<"空格数有："<<blank<<endl;
    cout<<"数字有："<<num<<endl;
    cout<<"其他字符有："<<otherChar<<endl;
   


    return 0;
}