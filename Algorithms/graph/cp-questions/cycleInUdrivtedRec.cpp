#include<bits/stdc++.h>
using namespace std;

bool cycle(int node,int parent,vector<int> &vis,vector<vector<int>> &graph){
    vis[node]=1;
    for(int i:graph[node]){
        if(!vis[i]){
            if(cycle(i,node,vis,graph)==true) return true;
        }else if(i!=parent) return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n);
    vector<int> vis(n,0);
    int edges;
    //cout<<"edges:";
    cin>>edges;
    int i,j;
    for(int x=0;x<edges;x++){
        cin>>i>>j;
        arr[i].push_back(j);
        arr[j].push_back(i);
    }
    for(int i=0;i<vis.size();i++){
        if(vis[i]==0) if(cycle(i,-1,vis,arr)==true){
            cout<<"found"<<i;
            exit(0);
        }
    }
    cout<<"not found";

    return 0;
}