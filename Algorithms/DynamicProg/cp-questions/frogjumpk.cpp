#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    unordered_map<int,int> mp;
  public:
    int recurcive(int n,int k,vector<int>& arr){
        if(n==0) return 0;
        if(mp.find(n)!=mp.end()) return mp[n];
        int minsteep=INT_MAX;
        for(int i=1;i<=k;i++){
            if(n-i>=0){
                int jump=recurcive(n-i,k,arr)+abs(arr[n]-arr[n-i]);
                minsteep=min(minsteep,jump);
            }
        }
        return mp[n]=minsteep;
    }
    int minimizeCost(int k, vector<int>& arr) {
        mp[0]=0;
       return recurcive(arr.size()-1,k,arr);
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code E