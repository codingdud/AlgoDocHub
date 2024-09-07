#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    bool campareString(string s1,string s2){
        reduceString(s1);
        reduceString(s2);
        return s1==s2;
    }
    void reduceString(string &s){
        int i=0;
        while(i<s.size()){
            if(s[i]=='#'){
                if(i>0){
                    s.erase(i-1,1);
                    i--;
                }
                s.erase(i,1);
            }else i++;
        }
    }
};
int main(){
    solution ob;
    string s1="abb#c";
    string s2="ad#c";
    ob.reduceString(s1);
    ob.reduceString(s2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<ob.campareString(s1,s2);
}