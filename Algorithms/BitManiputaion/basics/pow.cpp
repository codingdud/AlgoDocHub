
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,ans=0,p=0;
    cin>>num;
    while(num){
        ans+=num%2*pow(10,p);
        p++;
        num=num/2;
    }
    cout<<ans;
}