#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int recursive(int n,int target,vector<int>& coins,map<pair<int,int>,int> &dp){
            if(target==0) return 1;
            if(n==0){
                if(target%coins[0]==0) return 1;
                else return 0;
            }
            if(dp.find({n,target})!=dp.end()) return dp[{n,target}];
            int notpick=recursive(n-1,target,coins,dp);
            int pick=0;
            if(target>=coins[n]) pick=recursive(n,target-coins[n],coins,dp);
            return dp[{n,target}]=notpick+pick;
        }
        int change(int amount, vector<int>& coins) {
            map<pair<int,int>,int> dp;
            return recursive(coins.size()-1,amount,coins,dp);
        }
    };