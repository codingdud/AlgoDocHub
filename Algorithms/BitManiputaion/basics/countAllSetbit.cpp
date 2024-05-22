//count number of sett bits in a number
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count=0;
    while(num){
        num&=num-1;
        count++;
    }
    cout<<count;
}