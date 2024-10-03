#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(3,1);
    //asiment of values
    v.insert(v.begin(),2);
    v.insert(v.begin(),2,69);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.erase(v.begin());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    for( int i:v){
        cout<<i<<" ";
    }
    v.clear();
    cout<<v.size()<<endl;
    return 0;
}