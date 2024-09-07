#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int length,longest=0;
        unordered_set<int> se(nums.begin(),nums.end());
        for(int i:nums){
            if(se.find(i-1)==se.end()){
                length=1;
                while(se.find(i+length)!=se.end()) length++;
                longest=max(longest,length);
            }
        }
        return longest;
    }
};
int main(){
    Solution s;
    vector<int> nums={100,4,200,1,3,2};
    cout<<s.longestConsecutive(nums);
    return 0;
}