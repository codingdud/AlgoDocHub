#include<bits/stdc++.h>
int count=0;
std::vector<std::vector<int>> ans;
void unique(int ind,std::vector<int> &arr,int targ,std ::vector<int> &dp){
    if(ind==arr.size()) return;
    if(targ==0){
        ans.push_back(dp);
        count++;
    }
    for(int i=0;i<arr.size();i++){
        if(i>ind&&arr[i]==arr[i-1]) continue;
        if (targ<arr[i]) break;
        dp.push_back(arr[i]);
        unique(i,arr,targ-arr[i],dp);
        dp.pop_back();
    }

}
int main(){
    std::vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    std::vector<int> dp;
    unique(0, arr, 10, dp);
    std::cout<<count<<std::endl;
    for(auto i: ans){
        for(auto j: i){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}