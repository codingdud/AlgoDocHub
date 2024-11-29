#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<pair<int,int>>> &graph,int src=0){
    vector<int> dist(graph.size(),1e9);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    dist[src]=0;
    pq.push({dist[src],src});
    while(!pq.empty()){
        pair<int,int> temp=pq.top();
        pq.pop();
        int node=temp.second;
        int path=temp.first;
        for(auto it:graph[node]){
            if(it.second+path<dist[it.first]){
                dist[it.first]=it.second+path;
                pq.push({dist[it.first],it.first});
            }
        }
    }
    return dist;
}

int main(){
    vector<vector<pair<int,int>>> graph={
        {{1,4},{2,4}},
        {{0,4},{2,2}},
        {{0,4},{1,2},{3,3},{4,1},{5,6}},
        {{2,3},{5,2}},
        {{2,1},{5,3}},
        {{3,2},{2,6},{4,5}}
    };
    for(auto it:dijkstra(graph)) cout<<it<<" ";
}