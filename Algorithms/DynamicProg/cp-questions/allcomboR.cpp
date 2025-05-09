#include<bits/stdc++.h>
using namespace std;
class Solution{
    vector<string> ans;
    public:
    void allcombinationRepeate(string s,string r){
        if(r.size()==s.size()){
            ans.push_back(r);
            return;
        }
        for(char ch:s){
            r.push_back(ch);
            allcombinationRepeate(s,r);
            r.pop_back();
        }
    }
    void print(){
        for(auto it:ans) cout<<it<<endl;
    }
};
int main(){
    Solution *ob=new Solution();
    ob->allcombinationRepeate("123","");
    ob->print();
    delete ob;
}