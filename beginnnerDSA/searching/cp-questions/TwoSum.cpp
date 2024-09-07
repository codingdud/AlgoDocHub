#include "heap.h"

vector<int> twosum(vector<int>& nums, int target){
    minheap(nums,0,nums.size());
    heapsort(nums);
    //print num
    for(int i:nums) cout<<i<<" ";
    cout<<endl;
    int l=0,r=nums.size()-1;
    while(l<r){
        if((nums[l]+nums[r])>target) r--;
        else if((nums[l]+nums[r])<target) l++;
        else return {l,r};
    }
    return {};
}

int main(){
    vector<int> nums = {2,7,11,4,6,66,88,2,43,15};
    int target = 49;
    vector<int> res = twosum(nums, target);
    for(int i:res) cout<<i+1<<" ";
}