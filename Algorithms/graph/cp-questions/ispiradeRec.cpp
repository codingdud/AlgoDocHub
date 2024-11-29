#include<bits/stdc++.h>
using namespace std;


bool dfs(int node,int col,vector<int> &color,vector<vector<int>> &graph){
    color[node]=col;
    for(auto it:graph[node]){
        if(color[it]==-1){
            if(dfs(it,!col,color,graph)==false) return false;
        }else if(color[it]==col) return false;
    }
    return true;
}
bool ispirade(vector<vector<int>> &graph){
    vector<int> color(graph.size(),-1);
    for(int i=0;i<color.size();i++){
        if(color[i]==-1) if(dfs(i, 0, color, graph)==false) return false;
    }
    return true;
}

 int main(){
    vector<vector<int>> graph={
        {1},
        {0,2,5},
        {1,3},
        {2,5,4},
        {3},
        {1,3}
    };
    cout<<ispirade(graph);
 }