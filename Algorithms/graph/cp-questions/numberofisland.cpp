#include<bits/stdc++.h>
using namespace std;

int n,m;
void dfs(int i,int j,vector<pair<int,int>> &vec,vector<vector<int>> &visted,vector<vector<int>> &graph,int r, int c){
    visted[i][j]=1;
    cout<<i-r<<" "<<j-c<<endl;
    vec.push_back({i-r,j-c});
    int drow[]={+1,0,-1,0};
    int dcol[]={0,-1,0,+1};
    for(int k=0;k<4;k++){
        int nrow=i+drow[k];
        int ncol=j+dcol[k];
        if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&visted[nrow][ncol]==0&&graph[nrow][ncol]==1){
            dfs(nrow,ncol,vec,visted,graph,r,c);
        }
    }
}
countUniqueIsland(vector<vector<int>> &graph){
    n=graph.size();
    m=graph[0].size();
    set<vector<pair<int,int>>> st;
    vector<vector<int>> visted(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visted[i][j]&&graph[i][j]==1){
                cout<<"start"<<"\n";
                vector<pair<int,int>> vec;
                dfs(i,j,vec,visted,graph,i,j);
                st.insert(vec);
                cout<<"end"<<"\n";
            }
        }
    }
    return st.size();
}
int main(){
    vector<vector<int>> graph={
        {1,1,0,1,1},
        {1,0,0,0,0},
        {0,0,0,0,1},
        {1,1,0,1,1}
    };
    cout<<countUniqueIsland(graph);

}