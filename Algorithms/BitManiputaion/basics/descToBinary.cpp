//convert decimal to binary
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="";
    int n;
    cin>>n;
    while(n){
        s=to_string(n%2)+s;
        n/=2;
    }
    cout<<s;
    return 0;
}