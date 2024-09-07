#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1="ahello";
    string s2="lolo";
    int l1=s1.length(),l2=s2.length();
    int len =min(l1,l2);
    int pov =0;
    for(int i=1;i<len;i++){
        cout<<s1.substr(l1-i,i)<<":"<<s2.substr(0,i)<<endl;
        if(s1.substr(l1-i,i)==s2.substr(0,i)) pov=i;
    }
    cout<<s1+s2.substr(pov);
}
