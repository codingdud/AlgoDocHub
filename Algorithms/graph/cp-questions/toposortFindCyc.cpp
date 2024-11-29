#include<bits/stdc++.h>
using namespace std;

bool toposort(vector<vector<int>> &graph){
    vector<int> indg(graph.size(),0);
    queue<int> q;
    vector<int> topo;
    for(auto it:graph) for( int i:it) indg[i]++;
    for(int i=0;i<indg.size();i++) if(indg[i]==0) q.push(i);
    while(!q.empty()){
        int node=q.front();
        q.pop(); topo.push_back(node);
        for(int it:graph[node]){
            indg[it]--;
            if(indg[it]==0) q.push(it);
        }
    }
     return topo.size()!=graph.size();
     return true;
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
    cout<<toposort(graph);
}