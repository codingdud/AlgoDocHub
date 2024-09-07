#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void maxsamesubstring(string s ,int k){
        int start,end;
        start=end=0;
        int maxLen=0;
        int maxfreq=0;
        unordered_map<char,int> mp;
        while(end<s.size()){
            mp[s[end]]++;
            maxfreq=max(maxfreq,mp[s[end]]);
            if(end-start+1-maxfreq>k){
                mp[s[start]]--;
                start++;
            }
            maxLen=max(maxLen,end-start+1);
            end++;
        }
        cout<<maxLen<<endl;
    }
};
int main(){
    Solution s;
    string str;
    int k;
    cin>>str>>k;
    s.maxsamesubstring(str,k);
    return 0;
}