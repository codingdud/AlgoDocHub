#include<bits/stdc++.h>
using namespace std;

bool toposort(vector<vector<int>> &graph){
    vector<int> indg(graph.size(),0);
    for(auto it:graph) for(int i:it) indg[i]++;
    queue<int> q;
    for(int i=0;i<indg.size();i++) if(indg[i]==0) q.push(i);
    vector<int> topo;
    while(!q.empty()){
        int node=q.front();
        topo.push_back(node);
        q.pop();
        for(int it:graph[node]){
            indg[it]--;
            if(indg[it]==0) q.push(it);
        }
    }
    for(int i:topo) cout<<i<<" ";
    return true;
}

int main(){
    vector<vector<int>> graph={
        {},
        {},
        {3},
        {1},
        {0,1},
        {0,2}
    };
    toposort(graph);
}