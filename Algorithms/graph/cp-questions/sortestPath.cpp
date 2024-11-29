#include<bits/stdc++.h>
using namespace std;
void dfs(int i,vector<vector<pair<int,int>>> &graph,vector<int> &vist,stack<int> &st){
    vist[i]=1;
    for(auto it:graph[i]) if(!vist[it.first]) dfs(it.first,graph,vist,st);
    st.push(i);
}
stack<int> toposort(vector<vector<pair<int,int>>> &graph){
    vector<int> vist(graph.size(),0);
    stack<int> st;
    for(int i=0;i<vist.size();i++) if(!vist[i]) dfs(i,graph,vist,st);
    return st;
}
vector<int> shortestPath(vector<vector<pair<int,int>>> &graph){
    stack<int> st=toposort(graph);
    vector<int> dist(st.size(),INT_MAX);
    dist[st.top()]=0;
    while(!st.empty()){
        int node=st.top();
        st.pop();
        for(auto it:graph[node]) if(dist[it.first]>dist[node]+it.second) dist[it.first]=dist[node]+it.second;
    }
    return dist;
}
int main(){
    vector<vector<pair<int,int>>> graph={
        {{1,2}},
        {{3,1}},
        {{3,3}},
        {},
        {{0,3},{2,1}},
        {{4,1}},
        {{4,2},{5,3}}
    };
    for(int i:shortestPath(graph)) cout<<i<<" ";
    return 0;
}