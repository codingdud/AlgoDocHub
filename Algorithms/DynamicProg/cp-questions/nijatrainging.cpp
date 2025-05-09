#include<bits/stdc++.h>
using namespace std;

map<pair<int,int>,int> mp;
int bc(int index,int prev,vector<vector<int>> &arr){
    if(index==0){
        int maxi=0;
        for(int i=0;i<3;i++){
            if(i!=prev){
                maxi=max(maxi,arr[index][i]);
            }
        }
        return maxi;
    }
    if(mp.find({index,prev})!=mp.end()) return mp[{index,prev}];
    int maxi=0;
    for(int i=0;i<3;i++){
        if(i!=prev){
            maxi=max(maxi,arr[index][i]+bc(index-1,i,arr));
            //cout<<maxi<<":";
        }
    }
    return mp[{index,prev}]=maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    mp.clear();
    return bc(n-1,-1,points);
}
int main(){
    vector<vector<int>> arr={{1,2,3},{4,3,2},{5,6,7}};
    cout<<ninjaTraining(3,arr);
    return 0;
}