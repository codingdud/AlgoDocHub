#include<bits/stdc++.h>
using namespace std;

class anagram
{
public:
    bool solution(string s1,string s2);
};

bool anagram::solution(string s1,string s2){
    int len=s1.size();
    if(len!=s2.size()) return false;
    unordered_map<char,int> dp;
    for (int i=0;i<len;i++){
        dp[s1[i]]++;
        dp[s2[i]]--;
    }
    for(auto i:dp){
        if(i.second!=0) return false;
    }
    return true;
}


int main(){
    anagram ob;
    cout<<ob.solution("CAT","ACT");
}