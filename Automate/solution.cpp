#include<bits/stdc++.h>
using namespace std;
int f(int n,int total_time){
    int count=0;
    for(int i=1;i<=n;i++){
        if((total_time-i*5)>=0) {
            total_time-=i*5;
            count++;
        }else return count;
    }
    return count;
}
int main(){
    int total_time=60*4;
    int n,k;
    cin>>n>>k;
    total_time-=k;
    int count=0;
    cout<<f(n,total_time);
    return 0;
}