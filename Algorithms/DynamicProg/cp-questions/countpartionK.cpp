#include<bits/stdc++.h>
using namespace std;

int countsubset(int n,int k,vector<int> &arr,map<pair<int,int>,int> &dp){
    if (n == 0) {
        if(k==0&&arr[0]==0) return 2;
        if(k==0&&k==arr[0]) return 1;
        return 0;
    }
    //if(k==0) return 1;
    if(dp.find({n,k})!=dp.end()) return dp[{n,k}];
    int notpick=countsubset(n-1,k,arr,dp);
    int pick=0;
    if(arr[n]<=k) pick=countsubset(n-1,k-arr[n],arr,dp);
    return dp[{n,k}]=pick+notpick;
}
int countsubsettable(int n,int k,vector<int> &arr,map<pair<int,int>,int> &dp){
    dp[{0,0}]=1;
    for(int i=1;i<=n;i++){
        dp[{i,0}]=1;
        for(int j=0;j<=k;j++){
            if(arr[0]==j)
            dp[{0,j}]=1;
        }
    }
    for(int i=1;i<=n;i++){
        dp[{i,0}]=1;
        for(int j=0;j<=k;j++){
            int notpick=dp[{i-1,j}];
            int pick=0;
            if(arr[i]<=j) pick=dp[{i-1,j-arr[i]}];
            dp[{i,j}]=pick+notpick;
        }
    }
    return dp[{n,k}];
}
int findWays(vector<int>& arr, int k)
{
    map<pair<int,int>,int> dp;
	return countsubsettable(arr.size()-1,k,arr,dp);
}
