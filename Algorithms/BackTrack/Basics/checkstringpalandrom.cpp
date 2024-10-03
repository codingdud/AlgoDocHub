#include<iostream>
#include<string>
using namespace std;
bool isPalandrom(string s,int i,int j){
    if(i>=j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    return isPalandrom(s,i+1,j-1);
}
int main(){
    string s="abba";
    cout<<isPalandrom(s,0,s.size()-1);
}