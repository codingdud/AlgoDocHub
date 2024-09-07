#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    void anagramPattern(string s1,string s2){
        int n=s1.size();
        int m=s2.size();
        int start=0;
        int end=m;
        while(end<=n){
            string temp=s1.substr(start,end-start);
            cout<<temp<<">"<<endl;
            sort(temp.begin(),temp.end());
            sort(s2.begin(),s2.end());
            if(temp==s2){
                cout<<start<<" ";
                break;
            }
            start++;
            end++;
        }
    }
};
int main(){
    solution ob;
    string s1="abbcdffhabc";
    string s2="abc";
    ob.anagramPattern(s1,s2);
}