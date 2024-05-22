//check ith bit is set or not
#include<iostream>
using namespace std;

int main(){
    int num,i;
    cin>>num>>i;
    cout<<(num&(1<<i));
}