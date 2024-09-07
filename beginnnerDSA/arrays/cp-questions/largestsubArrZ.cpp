#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        unordered_map<int,int> mp;
        int maxlen=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                maxlen=i+1;
            }
            if(mp.find(sum)!=mp.end()){
                maxlen=max(maxlen,i-mp[sum]);
            }else{
                mp[sum]=i;
            }
        }
        return maxlen;
    }
};
int main(){
    Solution s;
    vector<int> arr={15,-2,2,-8,1,7,10,23};
    cout<<s.maxLen(arr,8);
    return 0;
}