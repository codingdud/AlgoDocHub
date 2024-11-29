#include<bits/stdc++.h>
using namespace std;

bool dfs(int i,vector<int> &vis,vector<int> &pvis,vector<vector<int>> &graph){
    vis[i]=1;
    pvis[i]=1;
    cout<<i<<"->";
    for(auto it:graph[i]){
        if(!vis[it]){
            if(dfs(it,vis,pvis,graph)==true) {
                //cout<<it<<" ";
                return true;}
        }else if(pvis[it]) return true;
    }
    pvis[i]=0;
    return false;
}

bool cycle(vector<vector<int>> &graph){
    vector<int> vis(graph.size(),0);
    vector<int> pvis(graph.size(),0);
    for(int i=1;i<vis.size();i++){
        if(dfs(i,vis,pvis,graph)==true) return true;
    }
    return false;

}

int main(){
    vector<vector<int>> graph ={
        {},
        {2},
        {3},
        {7,4},
        {5},
        {6},
        {},
        {5},
        {2,9},
        {10},
        {8}
    };
    cout<<cycle(graph);

}