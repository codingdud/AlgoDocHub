#include<bits/stdc++.h>
using namespace std;

bool ispirade(vector<vector<int>> &graph){
    queue<int> qe;
    qe.push(0);
    vector<int> color(graph.size(),-1);
    color[0]=0;
    while(!qe.empty()){
        int node=qe.front();
        cout<<node<<" ";
        qe.pop();
        for(int it:graph[node]){
            if(color[it]==-1){
                color[it]=!color[node];
                qe.push(it);
            }else if(color[it]==color[node]) return false;
        }
    }
    return true;
}

 int main(){
    vector<vector<int>> graph={
        {1},
        {0,2,5},
        {1,3},
        {2,6,4},
        {3},
        {1,6},
        {3,5}
    };
    cout<<ispirade(graph);
 }