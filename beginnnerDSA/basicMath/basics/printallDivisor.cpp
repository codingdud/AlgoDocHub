#include<bits/stdc++.h>
using namespace std;

void factorial(int num){
    vector<int> v;
    int root=sqrt(num);
    for(int i=1;i<root;i++){
        if(num%i==0){
            v.push_back(i);
            v.push_back(num/i);
        }
    }
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
}
int main(){
    int num;
    cin>>num;
    for(int i=1;i<num/2;i++){
        if(num%i==0) cout<<i<<" ";
    }
    cout<<num<<"\n";
    factorial(num);
}