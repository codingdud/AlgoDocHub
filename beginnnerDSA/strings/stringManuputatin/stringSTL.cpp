#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hello world";
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    cout<<s.front()<<endl;
    cout<<s.back()<<endl;
    s.pop_back();
    s.push_back('w');
    cout<<s.back()<<endl;
    s.insert(0,"AKanoob ");
    cout<<s<<endl;
    //transform the to upper case to lower
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin()+3,::tolower);
    cout<<s<<endl;
}