#include<bits/stdc++.h>

std::vector<std::vector<int>> ans;
void unique(int ind,std::vector<int> &arr,std ::vector<int> &dp){
    if(ind==arr.size()){
        ans.push_back(dp);
    };
    
    for(int i=ind;i<arr.size();i++){
        if(i!=ind&&arr[i]==arr[i-1]) continue;
        dp.push_back(arr[i]);
        unique(i+1,arr,dp);
        dp.pop_back();
    }

}
int main(){
    std::vector<int> arr={1,1,1,2,3,3};
    std::vector<int> dp;
    unique(0, arr, dp);
    for(auto i: ans){
        for(auto j: i){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}