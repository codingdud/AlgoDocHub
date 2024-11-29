#include<bits/stdc++.h>
using namespace std;

vector<int> shortestPath(vector<vector<int>> &graph,int src){
    vector<int> dist(graph.size(),INT_MAX);
    queue<int> q;
    dist[src]=0;
    q.push(src);
    while(!q.empty()){
        int node =q.front();
        //cout<<node<<"<";
        q.pop();
        for(int it:graph[node]) 
            if(dist[node]+1<dist[it]){
            dist[it]=dist[node]+1; 
            q.push(it);
            }
    }
    return dist;
}

int main(){
    vector<vector<int>> graph={
        {1,3},
        {0,2,3},
        {1,6},
        {1,0,4},
        {3,5},
        {4,6},
        {2,5,7,8},
        {6,8},
        {6,7}
    };
    for(auto it:shortestPath(graph,0)) cout<<it<<" ";
}