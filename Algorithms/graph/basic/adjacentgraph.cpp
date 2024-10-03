#include<bits/stdc++.h>
using namespace std;
void adjasentgraph(){
    int n,m;
    cin>>n>>m;
    vector<unordered_set<int>> arr(n);
    int k,j;
    for(int i=0;i<m;i++){
        cin>>k>>j;
        //cout<<k<<" "<<j;
        arr[k].insert(j);
        arr[j].insert(k);
    }
    int count=0;
    for(auto i:arr){
        cout<<count++<<":";
        for(int j:i) cout<<j<<" ";
        cout<<"\n";
    }
}
int main(){
    adjasentgraph();
    return 0;
}