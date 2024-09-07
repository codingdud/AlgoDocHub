#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        unordered_set<int> row,col;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i:row){
            for(int j=0;j<matrix[0].size();j++) matrix[i][j]=0;
        }
        for(int i:col){
            for(int j=0;j<matrix.size();j++) matrix[j][i]=0;
        }
    }
};
int main(){
    Solution s;
    vector<vector<int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
    s.setZeroes(matrix);
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}