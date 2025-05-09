#include <bits/stdc++.h> 
using namespace std;
int f(int n, vector<int> &heights,unordered_map<int,int> &mp){
    if(n==0) return 0;
    if(mp.find(n)!=mp.end()) return mp[n];
    int left=f(n-1,heights,mp)+abs(heights[n]-heights[n-1]);
    int right=INT_MAX;
    if(n>1) right=f(n-2,heights,mp)+abs(heights[n]-heights[n-2]);
    return mp[n]=min(left,right);
}
int f2(int n, vector<int> &heights,unordered_map<int,int> &mp){
    mp[0]=0;
    for(int i=1;i<=n;i++){
        int ff=mp[i-1]+abs(heights[n]-heights[n-1]);
        int ss=INT_MAX;
        if(i>1) ss=mp[i-2]+abs(heights[n]-heights[n-2]);
        mp[i]=min(ff,ss);
    }
    return mp[n];
}
int f3(int n,vector<int> &heights){
    int prev1=0,prev2=0,curr=0;
    for(int i=1;i<=n;i++){
        int ff=prev1+abs(heights[i]-heights[i-1]);
        int ss=INT_MAX;
        if(i>1) ss=prev2+abs(heights[i]-heights[i-2]);
        curr=min(ss,ff);
        prev2=prev1;
        prev1=curr;
    }
    return curr;
}
int frogJump(int n, vector<int> &heights){
    unordered_map<int,int> mp;
    return f(n-1,heights,mp);
}
int main(){
    vector<int> heights={30,10,60,10,60,50};
    cout<<frogJump(heights.size(), heights);
    return 0;
}