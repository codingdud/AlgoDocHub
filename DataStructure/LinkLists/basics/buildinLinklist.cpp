#include<bits/stdc++.h>
using namespace std;
int main(){
    forward_list<int> l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    //print elements
    for(auto i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
}