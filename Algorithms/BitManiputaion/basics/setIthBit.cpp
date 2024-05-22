//set the ith bit of a number
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    n|=1<<i;
    cout<<n;
}