#include<bits/stdc++.h>
using namespace std;
int k=4;
bool f(int i,vector<int> arr,vector<int> &dp){
    if(i==arr.size()){
        int sum=accumulate(dp.begin(),dp.end(),0);
        if(sum==k){
            for(int i:dp){
                cout<<i<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    dp.push_back(arr[i]);
    if(f(i+1,arr,dp)) return true;
    dp.pop_back();
    if(f(i+1,arr,dp)) return true;
    return false;
}
int main(){
    vector<int> arr={1,2,3,4};
    vector<int> dp;
    f(0,arr,dp);
    return 0;
}
    