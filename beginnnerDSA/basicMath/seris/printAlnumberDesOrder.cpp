#include<bits/stdc++.h>
using namespace std;

int main(){
    int temp,temp2,temp3,flag=1;

    for(int i=0;i<1000;i++){
        flag=1;
        temp=i;
        while(temp!=0){
            temp2=temp%10;
           //cout<<temp2<<"->2 ";
            temp=temp/10;
            if(temp!=0&&temp2>temp%10){
                flag=0;
                break;
            }
        }
        if(flag==1){
           cout<<i<<" ";
        }
    }
}