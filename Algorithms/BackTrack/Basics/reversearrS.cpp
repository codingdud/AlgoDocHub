#include<iostream>
#include<vector>
using namespace std;
void f(vector<int> &arr,int i){
    if(i>=arr.size()/2){
        return;
    }
    swap(arr[i],arr[arr.size()-1-i]);
    
}     
main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    f(arr,0);
    for(auto i:arr){
        cout<<i<<" ";
    }
}