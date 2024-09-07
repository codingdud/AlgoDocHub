#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size()-1;
        int i=0,j=n-1;
        vector<int> ans;
        while(i<=j){
            cout<<i<<"\n";
            for(int k=i;k<=m;k++){
                cout<<matrix[i][k]<<" ";
                ans.push_back(matrix[i][k]);
            }
            for(int k=i+1;k<=j;k++){
                cout<<matrix[k][m]<<" ";
                ans.push_back(matrix[k][m]);
            }
            for(int k=m-1;k>=i;k--){
                cout<<matrix[j][k]<<" ";
                ans.push_back(matrix[j][k]);
            }
            for(int k=m-1;k>i;k--){
                cout<<matrix[k][i]<<" ";
                ans.push_back(matrix[k][i]);
            }
            i++;
            j--;
            m--;
            cout<<"\n";
        }
    }
};

int main(){
    Solution ob;
    vector<vector<int>> arr={{1,2,3},{5,6,7},{9,10,11}};
    ob.spiralOrder(arr);
}