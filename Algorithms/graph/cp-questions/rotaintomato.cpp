#include<bits/stdc++.h>
using namespace std;

struct state{
    int x;
    int y;
    int t;
    state(int x,int y,int t):x(x),y(y),t(t){}
};

int rotain(vector<vector<int>> &grid){
    vector<vector<int>> vis(grid);
    int n=vis.size();
    int m=vis[0].size();
    queue<state> qe;
    int count=0;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++)
        if(vis[i][j]==2) qe.push({i,j,0});
        else if(vis[i][j]==1) count++;
    int tm=0;
    int drow[]={-1,0,+1,0};
    int dcol[]={0,+1,0,-1};
    int count1=0;
    while(!qe.empty()){
        int r=qe.front().x;
        int c=qe.front().y;
        int t=qe.front().t;
        cout<<r<<" "<<c<<" "<<t<<endl;
        qe.pop();
        tm=max(tm,t);
        for(int i=0;i<4;i++){
            int nrow=r+drow[i];
            int ncol=c+dcol[i];
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&vis[nrow][ncol]!=2&&vis[nrow][ncol]==1){
                vis[nrow][ncol]=2;
                qe.push({nrow,ncol,t+1});
                count1++;
            }
        }
    }      
    if(count!=count1) return -1;
    return tm;
}

int main(){
    vector<vector<int>> arr={{0,1,2},{0,1,0},{2,0,1}};
    cout<<rotain(arr);
}