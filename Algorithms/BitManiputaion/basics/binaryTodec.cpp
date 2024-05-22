//binary to decimal conversion
//input: 100
//output: 4

#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int ans=0,p=0;
    string bin="100";
    while(!bin.empty()){
        ans+=(bin.back()-'0')*pow(2,p);
        p++;
        bin.pop_back();
    }
    cout<<ans;
}