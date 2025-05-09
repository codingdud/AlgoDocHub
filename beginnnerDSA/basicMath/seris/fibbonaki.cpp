#include<bits/stdc++.h>
using namespace std;
void memosolution(int n){
    unordered_map<int,int> mp;
    mp[0]=1;mp[1]=1;
    for(int i=2;i<n;i++){
        mp[i]=mp[i-1]+mp[i-2];
    }
    cout<<mp[n-1];
}
int main(){
    int n;
    cin>>n;
    memosolution(n);
    return 0;
}