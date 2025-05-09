#include <bits/stdc++.h> 
using namespace std; 
map<pair<int,int>,bool> dp;
bool subsetSumToK(int n, int k, vector<int> &arr) {
    if(k==0) return true;
    if(n==0) return arr[0]==k;
    if(dp.find({n,k})!=dp.end()) return dp[{n,k}];
    bool notpick=subsetSumToK( n-1,k,arr);
    bool pick=false;
    if(arr[n]<=k){
        pick=subsetSumToK( n-1,k-arr[n],arr);
    }
    return dp[{n,k}]=pick|notpick;
}
bool subsetSumToKloop(int n, int k, vector<int> &arr) {
    dp[{0,0}]=true;
    for(int i=1;i<=n;i++){
        dp[{i,0}]=true;
        for(int j=0;j<=k;j++){
            bool take=dp[{i-1,j}];
            bool nottake=false;
            if(arr[i]<=j) nottake=dp[{i-1,j-arr[i]}];
            dp[{i,j}]=take|nottake;
        }
    }
    return dp[{n,k}];
}
//main code
int main(){
    //2 5 1 6 7
    vector<int> arr={6,1,2,1};
    int n=arr.size();
    int k=4;
    cout<<subsetSumToKloop(n-1, k, arr);
}