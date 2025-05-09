#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
void allcombo(string s,string res,vector<int> &dp){
    if(s.size()==res.size()){
        cout<<res<<" ";
        ans.push_back(res);
        return;
    }
    for(int i=0;i<s.size();i++){
        if(dp[i]==0){
            dp[i]=1;
            res.push_back(s[i]);
            allcombo(s,res,dp);
            res.pop_back();
            dp[i]=0;
        }
    }
}
int main(){
    vector<int> dp(3,0);
    allcombo("123","",dp);
    return 0;
}