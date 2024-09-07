#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<int> &A, int B) {
        int count=0;
        unordered_map<int,int> mpp;
        int xr=0;
        mpp[xr]=1;
        for(int i=0;i<A.size();i++){
            xr=xr^A[i];
            int x=xr^B;
            count+=mpp[x];
            mpp[xr]++;
        }
        return count;
    }

};
int main(){
    Solution s;
    vector<int> A={4,2,2,6,4};
    cout<<s.solve(A,6);
    return 0;
}