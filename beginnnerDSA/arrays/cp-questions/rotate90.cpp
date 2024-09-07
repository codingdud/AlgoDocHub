#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void tanspose(vector<vector<int>>& m){
        int n=m.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j){
                    swap(m[i][j],m[j][i]);
                }
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        tanspose(matrix);
        int i=0,n=matrix.size();
        int j=n-1;
        while(i<j){
            for(int k=0;k<n;k++){
                swap(matrix[k][j],matrix[k][i]);
            }
            i++;
            j--;
        }
    }
};
int main(){
    Solution s;
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    s.rotate(matrix);
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}