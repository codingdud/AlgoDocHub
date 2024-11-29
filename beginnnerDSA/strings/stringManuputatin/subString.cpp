#include<bits/stdc++.h>
using namespace std;

int main(){
    string sne="Hy, I am react developer!";
    string s=sne.substr(4,4);
    cout<<s<<"\n";
    size_t pos=sne.find("re");
    if(pos==string::npos) cout<<"Not found"<<endl;
    //cout<<sne.find("jsjfsdfg")<<endl;
    cout<<sne.substr(pos);
}