#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> pos,neg;
        for(int i:nums){
            if(i>0) pos.push(i);
            else neg.push(i);
        }
        vector<int> ans;
        while(!pos.empty()){
            ans.push_back(pos.front());
            pos.pop();
            ans.push_back(neg.front());
            neg.pop();
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums={-1,2,-3,4,-5};
    vector<int> ans=s.rearrangeArray(nums);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}