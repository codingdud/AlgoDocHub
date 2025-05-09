#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
vector<int> res;
//void creat all combination 
void fun(int i,int prev,vector<vector<int>> &arr,vector<int> ans){
    if(ans.size()==arr.size()){
        for(int it:ans) cout<<it<<",";
        auto it=accumulate(ans.begin(),ans.end(),0);
        res.push_back(it);
        cout<<endl;
        return;
    }
    if(i==arr.size()) return;
    for(int k=0;k<arr[0].size();k++){
        if(prev==k) continue;
        ans.push_back(arr[i][k]);
        fun(i+1,k,arr,ans);
        ans.pop_back();
    }
} 
int maxi;
int dpsolution(int i,int prev,vector<vector<int>> &arr){
    if(i<0) return 0;
    for(int k=0;k<3;k++){
        if(prev!=k) maxi=max(maxi,(arr[i][k]+dpsolution(i-1,k,arr)));
    }
    return maxi;
}
int main(){
    vector<vector<int>> arr={{1,2,5},{3,1,1},{3,3,3}};
    fun(0,-1,arr,ans);
    //cout<<*max_element(res.begin(),res.end());
    cout<<dpsolution(1,-1,arr);
    return 0;
}