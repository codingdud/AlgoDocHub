//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends


class Solution {
  public:
    int validQueries(string text, string pattern, int q, vector<vector<int>> &queries) {
        // code here
        string temp;
        int count=0;
        for(auto i:queries){
            temp=text;
            for(int j=i[0];j<=i[1];j++){
                temp[j]='*';
            }
            cout<<temp<<endl;
            for(int i=0;i<pattern.size();i++){
                size_t found=temp.find(pattern[i]);
                if(found==string::npos){
                    break; 
                }else{
                    temp[found]='*';
                    //temp.replace(found,"*");
                }
                cout<<temp<<endl;
                if(i==pattern.size()-1){
                    count++;
                }
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    Solution obj;
    string text="abacaba";
    string pattern="abc";
    int q=2;
    vector<vector<int>> queries={{0,2},{1,3}};
    int ans = obj.validQueries(text, pattern, q, queries);
    cout<<ans<<endl;
}

// } Driver Code Ends