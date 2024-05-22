#include<bits/stdc++.h>
using namespace std;
int main(){
    int div,dvo;
    cin>>div>>dvo;
    int sign=div>=0&&dvo>=0||div<0&&dvo<0?1:-1;
    long n=abs(div);
    long d=abs(dvo);
    int count;
    long ans=0;
    while(n>=d){
        count=0;
        while(n>=(d<<count+1)) count++;
        ans+=1<<count;
        n-=d<<count;
    }
    if(ans>=pow(2,31)&&(sign==-1)) cout<<"2147483648";
    if(ans>=pow(2,31)&&(sign==1)) cout<<"2147483648";
    cout<<sign*ans;
}