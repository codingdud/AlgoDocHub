#include<bits/stdc++.h>
using namespace std;

vector<int> f(vector<int> &arr,int q){
    int num,count=0;
    vector<int> ans;
    for(int i=0;i<q;i++){
        cin>>num;
        count=0;
        for(int it:arr){
            if(num>=it) count++;
           // cout<<count<<"]";
        }
        ans.push_back(count);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int q;
    cin>>q;
    vector<int> ans=f(arr,q);
    for(int it:ans) cout<<it<<"\n";
    return 0;
}