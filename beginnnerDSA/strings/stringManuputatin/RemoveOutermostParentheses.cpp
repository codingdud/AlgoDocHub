#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int b=0;
        for(char c:s){
            if(c=='('){
                if(b>0){
                    res.push_back(c);
                }
                b+=1;
            }else if(c==')'){
                b-=1;
                if(b>0){
                    res.push_back(c);
                }
            }
        }
        return res;
    }
};