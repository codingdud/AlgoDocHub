#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt=(int)log10(n)+1;
    cout<<cnt;
}
int main(){
    int num;
    cin>>num;
    int cnt=0;
    count(num);
    while(num>0){
        cnt++;
        num/=10;
    }
    cout<<cnt;
    
    return 0;
}

//depens on division like div 2 time complexcity willbe log2(number)
