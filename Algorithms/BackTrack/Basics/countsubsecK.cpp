#include<bits/stdc++.h>
using namespace std;
int k=4;
int f(int i,vector<int> arr,vector<int> &res){
    if(i==arr.size()){
        int sum=accumulate(res.begin(),res.end(),0);
        if(sum==k){
            return 1;
        }
        return 0;
    }
    res.push_back(arr[i]);
    int l=f(i+1,arr,res);
    res.pop_back();
    int r=f(i+1,arr,res);
    return l+r;
}
int main(){
    vector<int> arr={1,2,3,4};
    vector<int> res;
    cout<<f(0,arr,res);
    return 0;
}