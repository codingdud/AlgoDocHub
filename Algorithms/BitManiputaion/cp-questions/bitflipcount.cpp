//number of bits to be flipped to convert a to b
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans=a^b,count=0;
    while(ans){
        ans&=ans-1;
        count++;
    }
    cout<<count;
    
}