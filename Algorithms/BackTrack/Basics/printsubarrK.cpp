#include<bits/stdc++.h>
using namespace std;
int k=4;
void f(int i,vector<int> arr,vector<int> &dp){
    if(i==arr.size()){
        int sum=accumulate(dp.begin(),dp.end(),0);
        if(sum==k){
            for(int i:dp){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }
    dp.push_back(arr[i]);
    f(i+1,arr,dp);
    dp.pop_back();
    f(i+1,arr,dp);
}
int main(){
    vector<int> arr={1,2,3,4};
    vector<int> dp;
    f(0,arr,dp);
    return 0;
}