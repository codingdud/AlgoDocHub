#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    for(int i:s){
        cout<<i<<" ";
    }
    auto k=s.find(1);
    cout<<s.count(1);
    if(k!=s.end()){
        cout<<*k<<endl;
    }
    return 0;
}
