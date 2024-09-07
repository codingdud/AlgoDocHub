#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0,sum=0,i=0,j=0;
        int n=nums.size();
        while(i>=j){
            if(i<=n-1){
                sum+=nums[i];
                i++;
            }
            if(sum==k){
                count++;
                sum-=nums[j];
                j++;
            }else if(sum>k){
                sum-=nums[j];
                j++;
            }else if(i==n) j++;
        }
        return count;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,1,1};
    cout<<s.subarraySum(nums,2);
    return 0;
}