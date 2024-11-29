#include<bits/stdc++.h>
using namespace std;

bool cycle(vector<int> &vis,vector<vector<int>> &graph){
    stack<pair<int,int>> stk;
    for(int i=0;i<vis.size();i++){
        if(!vis[i]){
            vis[i]=1;
            stk.push({i,-1});
            ++count;
            while(!stk.empty()){
                int node=stk.top().first;
                int parent=stk.top().second;
                cout<<node<<" "<<parent<<endl;
                stk.pop();
                for(int i:graph[node]){
                    if(!vis[i]){
                        vis[i]=1;
                        stk.push({i,node});
                    }else if(i!=parent) return true;
                }
            }
        }

    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n);
    vector<int> vis(n,0);
    int edges;
    //cout<<"edges:";
    cin>>edges;
    int i,j;
    for(int x=0;x<edges;x++){
        cin>>i>>j;
        arr[i].push_back(j);
        arr[j].push_back(i);
    }
    cout<<cycle(vis,arr);

    return 0;
}

/* 
7
7
0 1
1 4
4 6
6 5
5 2
2 0
2 3 
*/