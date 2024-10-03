#include<bits/stdc++.h>

std::vector<std::vector<int>> result;
void findallcombination(std::vector<int> &arr,int i,std::vector<int> &dp,int k){
    int sum=std::accumulate(dp.begin(),dp.end(),0);
    //std::cout<<sum<<" ";
    if (i>=arr.size()||sum>=k){
        if(sum==k) result.push_back(dp);
        return;
    }
    dp.push_back(arr[i]);
    findallcombination(arr,i,dp,k);
    dp.pop_back();
    findallcombination(arr,i+1,dp,k);

}

int main(){
    std::vector<int> arr={1,2,3,4,5};
    int k=5;
    std::vector<int> dp;
    findallcombination(arr, 0, dp, k);
    std::cout<<std::endl;
    for(auto i:result){
        for(auto j:i){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}