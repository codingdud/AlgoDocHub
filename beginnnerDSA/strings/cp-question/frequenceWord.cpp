#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void frequencyWord(string s){
        unordered_map<string,int> mp;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                mp[temp]++;
                temp.erase();
            }else temp+=s[i];
        }
        for(auto x:mp){
            cout<<x.first<<":"<<x.second<<endl;
        }
    }
};
int main(){
    solution ob;
    string s="I am a good lol animal I am a good animal";
    ob.frequencyWord(s);
}