#include<bits/stdc++.h>

std::vector<std::vector<int>> ans;
void allArrayCombination(std::vector<int> &arr,std::vector<int> &freq,std::vector<int> &dp){
    if(arr.size()==dp.size()){
        ans.push_back(dp);
        return;
    }
    for(int i=0;i<arr.size();i++){
        if(!freq[i]){
            freq[i]=true;
            dp.push_back(arr[i]);
            allArrayCombination(arr,freq,dp);
            dp.pop_back();
            freq[i]=false;
        }
    }
}
int main(){
    std::vector<int> arr={1,2,3};
    std::vector<int> freq(arr.size(), false);
    std::vector<int> dp;
    allArrayCombination(arr, freq, dp);
    for(auto i:ans){
        for(auto j:i){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}