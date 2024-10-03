#include<bits/stdc++.h>

std::vector<int> temp;
void subsequencesumK(std::vector<int> &arr,int i,int k){
    if(i>=arr.size()){
        int sum=std::accumulate(temp.begin(),temp.end(),0);
        if(sum==k){
            for(int i:temp) std::cout<<i<<" ";
            std::cout<<"\n";
        }
        return;
    }
    temp.push_back(arr[i]);
    subsequencesumK(arr,i+1,k);
    temp.pop_back();
    subsequencesumK(arr,i+1,k);
}
int main(){
    std::vector<int> arr={1,2,3,4};
    subsequencesumK(arr,0,4);
    return 0;
}