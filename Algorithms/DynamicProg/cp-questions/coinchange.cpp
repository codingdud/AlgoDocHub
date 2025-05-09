#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int recusive(int n,int target,vector<int>& coins,map<pair<int,int>,int> &dp){
            if(target==0) return 0;
            if(n==0){
                if(coins[0]==target) return 1;
                else if(target%coins[0]==0) return target/coins[0];
                else return INT_MAX-1;
            }
            if(dp.find({n,target})!=dp.end()) return dp[{n,target}];
            int notpick=0+recusive(n-1,target,coins,dp);
            int pick=INT_MAX-1;
            if(target>=coins[n]) pick=1+recusive(n,target-coins[n],coins,dp);
           
            return dp[{n,target}]=min(notpick,pick);;
        }
        int coinChange(vector<int>& coins, int amount) {
            map<pair<int,int>,int> dp;
            int temp=recusive(coins.size()-1,amount,coins,dp);
            if(temp==INT_MAX-1) return -1;
            return temp;
        }
    };
