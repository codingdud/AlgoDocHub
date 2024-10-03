#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    vector<int> v={5,6,44,2,66,8,7,8,1,1,1,1};
    sort(v.begin(),v.end(),[](int a,int b){return a<b;});
    for(int i:v){
        cout<<i<<" ";
    }
    stable_sort(v.begin(),v.end(),[](int a,int b){return b<a;});
    for(int i:v){
        cout<<i<<" ";
    }
    is_sorted(v.begin(),v.end(),[](int a,int b){return b<a;})?cout<<"sorted":cout<<"not sorted";
    return 0;
}