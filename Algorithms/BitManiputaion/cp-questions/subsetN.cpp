#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<vector<int>> ans;
    vector<int> temp;
    for(int i=0;i<(1<<num);i++){
        temp.clear();
        for(int j=0;j<num;j++){
            if((i&1<<j)!=0) temp.push_back(j+1);
        }
        ans.push_back(temp);
    }
    for(vector<int> i:ans){
        for(int j:i) cout<<j<<",";
        cout<<endl;
    }
    return 0;
}