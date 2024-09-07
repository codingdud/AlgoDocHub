#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void substringk(string s,int k){
        int n=s.size();
        int start,end;
        start=end=0;
        unordered_map<char,int> dp;
        int max_len=0;
        while(end<n){
            dp[s[end]]++;
            while(dp.size()>k){
                dp[s[start]]--;
                if(dp[s[start]]==0){
                    dp.erase(s[start]);
                }
                start++;
            }
            max_len=max(max_len,end-start+1);
            end++;
        }
        cout<<max_len;
    }
};

int main(){
    Solution ob;
    ob.substringk("abcabcbb",2);
}