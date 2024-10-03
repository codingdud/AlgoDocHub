#include<bits/stdc++.h>
using namespace std;
void graphundirectedM(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(n,0));
    int j,k;
    for(int i=0;i<m;i++){
        cin>>j>>k;
        arr[j][k]=1;
    }
    for(auto i:arr){
        for(int j:i) cout<<j<<" ";
        cout<<"\n";
    }
}
int main(){
    graphundirectedM();
    return 0;
}