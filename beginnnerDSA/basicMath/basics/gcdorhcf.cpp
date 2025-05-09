#include<bits/stdc++.h>
using namespace std;
//euclidean algo
int gcd(int a,int b){
    if(a==0) return b;
    if(a>b) return gcd(a-b,b);
    else return gcd(b-a,a);
}
int gcdm(int a,int b){
    if(a==0) return b;
    if(a>b) return gcd(a%b,b);
    else return gcd(b%a,a);
}
int gcds(int a,int b){
    if(a==0) return b;
    return gcds(b%a,a);
}
int main(){
    cout<<gcds(12,4);
    int a,b;
}