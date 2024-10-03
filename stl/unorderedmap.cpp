#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> m;
    m[1]=2;
    m.insert({2,3});
    pair<int,int> p={3,4};
    m.insert(p);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.erase(1);
    cout<<"\n";
    for(auto i:m){
        auto temp=m.find(2);
        cout<<++m[0]<<endl;
        cout<<i.first<<" "<<i.second<<endl;
    }
}