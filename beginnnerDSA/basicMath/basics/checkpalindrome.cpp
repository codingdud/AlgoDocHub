#include<iostream>
using namespace std;

int main(){
    int num,rev=0;
    cin>>num;
    int og=num;
    while(num>0){
        rev=rev*10+num%10;
        num/=10;
    }
    if(og==rev){
        cout<<"paillendrom";
    }else{
        cout<<"not palandrom";
    }
    return 0;
}