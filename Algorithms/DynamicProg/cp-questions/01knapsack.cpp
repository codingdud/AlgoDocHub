#include <bits/stdc++.h> 
using namespace std;
int recusive(int n,int mw,vector<int> weight,vector<int> value,map<pair<int,int>,int> &dp){
	if(n==0){
		if(weight[0]<=mw) return value[0];
		return 0;
	}
	if(dp.find({n,mw})!=dp.end()) return dp[{n,mw}];
	int notpick=0+recusive(n-1,mw,weight,value,dp);
	int pick=0;
	if(weight[n]<=mw) pick=value[n]+recusive(n-1,mw-weight[n],weight,value,dp);
	return dp[{n,mw}]=max(pick,notpick);
}
int iterativeKnapsack(int n, int mw, vector<int> &weight, vector<int> &value, map<pair<int,int>,int> &dp) {
     for (int j = weight[0]; j <= mw; j++)
        dp[{0,j}] = value[0];

    // DP table filling
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= mw; j++) {
            int notpick = dp[{i - 1, j}];
            int pick = 0;
            if (weight[i - 1] <= j) // use i-1 for 0-indexed vectors
                pick = value[i - 1] + dp[{i - 1, j - weight[i - 1]}];
            dp[{i, j}] = max(notpick, pick);
        }
    }

    return dp[{n, mw}];
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	map<pair<int,int>,int> dp;
	return iterativeKnapsack(n-1,maxWeight,weight,value,dp);
}