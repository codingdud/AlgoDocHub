#include<bits/stdc++.h>

int n;
std::unordered_map<int,std::unordered_set<int>> graph;
std::vector<int> color;
bool isSafe(int node,std::unordered_map<int,std::unordered_set<int>> &graph,int col){
    for(int i:graph[node]){
        //std::cout<<i<<";"<<color[i]<<";";
        if(color[i]==col) return false;
    }
    return true;
}
bool solve(int node,std::unordered_map<int,std::unordered_set<int>> &graph,int M){
    if(node==n) return true;
    for(int i=0;i<M;i++){
        if(isSafe(node,graph,i)){
            color[node]=i;
            if (solve(node+1,graph,M)==true) return true;
            color[node]=-1;
        }
    }
    return false;
}

int main(){
    int link;
    std::cin>>n;
    color = std::vector<int>(n, -1);
    for(int i=0;i<n;i++){
        std::cout<<i<<"=\n";
        for(int j=0;j<n;j++){
            if(i==j) continue;
            //std::cout<<j<<"=>";
            std::cin>>link;
            if(link==1) graph[i].insert(j);
        }
    }
    for(auto i:graph) {
        std::cout<<i.first<<":";
        for(int j:i.second) std::cout<<j<<" ";
        std::cout<<"\n";
    }
    std::cout<<solve(0,graph,3);
    return 0;
}
/*
4
1 1 1
1 1 1
1 1 0
1 1 0
*/