#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,re=0,og;
    cin>>num;
    og=num;
    while(num>0){
        re=re+pow(num%10,3);
        num/=10;
    }
    if(og==re) cout<<"amstrong niumber";
    else cout<<"not amstrong number";
    return 0;
}