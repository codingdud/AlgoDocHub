#include<iostream>
#include<vector>

void f(std::vector<int> &arr,int i,int j){
    if(i>=j){
        return;
    }
    std::swap(arr[i],arr[j]);
    f(arr,i+1,j-1);
    
}
void reverse(std::vector<int> &arr){
    int n=arr.size();
    f(arr,0,n-1);
}

int main(){
    std::vector<int> arr={1,2,3,4,5};
    reverse(arr);
    for(auto i:arr){
        std::cout<<i<<" ";
    }
}