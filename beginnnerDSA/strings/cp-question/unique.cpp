#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
    unordered_set<char> dp;
public:
    void unique(string s){
        for (char c: s){
            dp.insert(c);
        }
        cout<<dp.size();
    }
};

int main(){
    Solution ob;
    ob.unique("ababababa");
}