#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void threeColor(vector<int> &arr){
        int low=0,mid=0,high=arr.size()-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==1) mid++;
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
}; 
int main(){
    Solution s;
    vector<int> arr={0,1,2,0,1,2};
    s.threeColor(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}