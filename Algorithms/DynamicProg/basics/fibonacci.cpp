#include<bits/stdc++.h>
using namespace std;

int fun(int n,unordered_map<int,int> &mp){
    if(n<=2) return 1;
    if(mp.find(n)!=mp.end()) return mp[n];
    return mp[n]=fun(n-1,mp)+fun(n-2,mp);
}
int fun2(int n,unordered_map<int,int> &mp){
    mp[0]=1;
    mp[1]=1;
    for(int i=2; i<n; i++){
        mp[i]=mp[i-1]+mp[i-2];
    }
    return mp[n-1];
}
int fun3(int n){
    int var1=1,var2=1;
    int temp;
    for(int i=2;i<n;i++){
        temp=var1+var2;
        var1=var2;
        var2=temp;
    }
    return temp;   
}
int main(){
    unordered_map<int,int> mp;
    cout<<fun3(10)<<endl;
}