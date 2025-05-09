#include<bits/stdc++.h>
using namespace std;
bool subsetk(int n,int k,vector<int> &arr,map<pair<int,int>,bool> &dp){
	if(k==0) return 0;
	if(n==0) return arr[0]==k;
	if(dp.find({n,k})!=dp.end()) return dp[{n,k}];
	bool notpick=subsetk(n-1,k,arr,dp);
	bool pick=false;
	if(arr[n]<=k) pick=subsetk(n-1,k-arr[n],arr,dp);
	return dp[{n,k}]=pick|notpick;
}
bool canPartition(vector<int> &arr, int n)
{
	map<pair<int,int>,bool> dp;
	int total =accumulate(arr.begin(),arr.end(),0);
	if(total%2==0) return subsetk(arr.size()-1,total/2,arr,dp);
	return false;
}
