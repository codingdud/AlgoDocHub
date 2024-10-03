#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    char ch;
    cin>>ch;
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            cout<<i+1<<",";
        }
    }
    return 0;
}