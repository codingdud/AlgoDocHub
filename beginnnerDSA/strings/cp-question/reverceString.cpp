#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    void reverceString(string s){
        string ans="";
        string temp="";
        for(char c:s){
            if(c!=' '){
                temp.push_back(c);
            }else{
                ans=temp+' '+ans;
                temp.clear();
            }
        }
        ans=temp+' '+ans;
        cout<<ans;
    }
};

int main(){
    solution ob;
    ob.reverceString("hello wolrd allu kaju katli");
}