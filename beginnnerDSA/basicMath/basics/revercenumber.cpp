#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int rev=0;
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }
    cout<<rev;
    return 0;
}