#include<iostream>
using namespace std;
int fibonaki(int n){
    if(n<=1){
        return n;
    }
    return fibonaki(n-1)+fibonaki(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonaki(n);
}