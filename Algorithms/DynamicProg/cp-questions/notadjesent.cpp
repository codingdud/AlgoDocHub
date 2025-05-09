#include<bits/stdc++.h>
using namespace std;

class Solution {
    unordered_map<int,int> mp;
public:
    int picknotpick(int n,vector<int>& nums){
        if(n==0) return nums[0];
        if(n<0) return 0;
        if(mp.find(n)!=mp.end()) return mp[n];
        int pick=nums[n]+picknotpick(n-2,nums);
        int notpick=0+picknotpick(n-1,nums);
        return mp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        return picknotpick(nums.size()-1,nums);
    }
};

int main(){
    Solution *ob=new Solution();
    vector<int> nums = {2,4,5,7,8,9};
    cout<<ob->rob(nums);

}