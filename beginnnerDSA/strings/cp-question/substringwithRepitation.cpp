#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void substringnorepation(string s){
        int start,end;
        start=end=0;
        unordered_map<char,int> dp;
        int max_len=0;
        while(end<s.size()){
            if(dp.find(s[end])==dp.end()){
                dp[s[end]]=end;
            }else{
                start=max(start,dp[s[end]]+1);
                dp[s[end]]=end;
            }
            max_len=max(max_len,end-start+1);
            end++;
        }
        cout<<max_len;
    }

};
int main(){
    Solution ob;
    ob.substringnorepation("abcabcbb");
}