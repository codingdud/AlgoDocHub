#include<iostream>
using namespace std;
void summ(int n,int &s){
    if(n==0)
        return;
    summ(n-1,s+=n);
}
int main(){ 
    int n=4;
    int sum=0;
    summ(n,sum);
    cout<<sum;
}