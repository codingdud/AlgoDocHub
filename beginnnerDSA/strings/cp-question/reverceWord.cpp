#include<bits/stdc++.h>
using namespace std;

class solution
{
public:
    void reverceWord(string s){
        string temp="";
        string ans="";
        for(char c:s){
            if(c!=' '){
                temp=c+temp;
            }else{
                ans+=temp+' ';
                temp.clear();
            }
        }
        ans+=temp;
        cout<<ans;
    }
};

int main(){
    solution ob;
    ob.reverceWord("hello wolrd");
}