#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string smallestSubstring(string str, int k) {
        // code here
        int n = str.length();
        int temp=0;
        for(int i=0;i<k;i++){
            temp+=(int)str[i];
            cout<<(int)str[i]<<":"<<temp<<endl;
        }
        int max=temp;
        int index=0;
        for(int i=k;i<n;i++){
            temp+=(int)str[i];
            temp-=(int)str[i-k];
            if(temp<max){
                max=temp;
                index=i-k+1;
            }
            cout<<(int)str[i]<<":"<<temp<<endl;
        }
        cout<<index<<":"<<k<<endl;
        return str.substr(index,k);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string str;
        cin >> str;

        int k;
        scanf("%d", &k);

        Solution obj;
        string res = obj.smallestSubstring(str, k);

        cout << res << "\n";
    }
}