#include<bits/stdc++.h>
using namespace std;
int longestIncreasingSubsequence(int arr[], int n)
{
    vector<int> dp(n,1);
    int mux=0;
    for(int i=1;i<n;i++){
        mux=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]) mux=max(mux,dp[j]);
        }
        dp[i]=max(dp[i],1+mux);
    }
    for(int it:dp) mux=max(mux,it);
    return mux;
}

int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Length of lis is %d\n", longestIncreasingSubsequence(arr, n));
    return 0;
}