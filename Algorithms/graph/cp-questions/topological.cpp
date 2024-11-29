#include<bits/stdc++.h>
using namespace std;

void dfs(int i,vector<int> &vis,vector<vector<int>> &graph,stack<int> &st){
    vis[i]=1;
    for(auto it:graph[i]){
        if(!vis[it]) dfs(it,vis,graph,st);
    }
    st.push(i);
}
void topologicalsort(vector<vector<int>> &graph){
    vector<int> vis(graph.size(),0);
    stack<int> st;
    for(int i=0;i<vis.size();i++){
        if(!vis[i]){
            dfs(i,vis,graph,st);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
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
    topologicalsort(graph);
}