#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &arr,vector<int> &visited,int i){
    stack<int> st;
    if(visited[i]==0){
        st.push(i);
        visited[i]=1;
    }int head;
    while(!st.empty()){
        head=st.top();
        cout<<head<<" ";
        st.pop();
        for(int i:arr[head]){
            if(visited[i]==0){
                visited[i]=1;
                st.push(i);
            }
        }
    }
}
int main(){
    vector<vector<int>> arr={{1,2},{0,2},{0,1},{0}};
    vector<int> visited(arr.size(),0);
    for(int i=0;i<arr.size();i++){
        dfs(arr,visited,i);
    }
    return 0;
}