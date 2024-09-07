#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void twosum(vector<int> &arr,int target){
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            if(mp.find(target-arr[i])!=mp.end()){
                cout<<mp[target-arr[i]]<<" "<<i;
                return;
            }
            else{
                mp[arr[i]]=i;
            }
        }
    }
};
int main(){
    Solution s;
    vector<int> arr={2,7,11,15};
    s.twosum(arr,9);
    return 0;
}