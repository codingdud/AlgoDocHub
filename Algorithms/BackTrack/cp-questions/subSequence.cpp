#include<iostream>
#include<vector>
std::vector<int> temp;
void f(std::vector<int> &arr,int i){
    if(i==arr.size()){
        for(int i:temp) std::cout<<i<<" ";
        std::cout<<"\n";
        return;
    }
    temp.push_back(arr[i]);
    f(arr,i+1);
    temp.pop_back();
    f(arr, i+1);
}

int main(){
    std::vector<int> arr = {1,2,3};
    f(arr, 0);
    // std::cout<<ans<<"\n";
    return 0;
}