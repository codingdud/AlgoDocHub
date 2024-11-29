#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> &arr,vector<int> &visited,int i){
    queue<int> q;
    if(visited[i]==0)q.push(i);
    visited[i]=1;
    int head;
    while(!q.empty()){
        head=q.front();
        cout<<head<<" ";
        q.pop();
        for(int i:arr[head]){
            if(visited[i]==0){
                visited[i]=1;
                q.push(i);
            }
        }
    }
}
int main(){
    vector<vector<int>> arr={{1,2},{0,2},{0,1},{0}};
    vector<int> visited(arr.size(),0);
    for(int i=0;i<arr.size();i++) if(visited[i]==0) bfs(arr,visited,i);
   
    return 0;
}