#include<bits/stdc++.h>

std::vector<std::vector<int>> maze;
std::vector<std::vector<int>> visited;
std::vector<std::vector<std::vector<int>>> ans;
int n,m;
int count=0;
void findlastCombination(std::vector<std::vector<int>> &maze,int i,int j){
    if(i==n-1&&j==m-1){
        count++;
        ans.push_back(maze);
        return;
    }
    //std::cout<<i<<" "<<j<<"\n";
    if((i+1)<n&&maze[i+1][j]==0){
        maze[i+1][j]=8;
        findlastCombination(maze,i+1,j);
        maze[i+1][j]=0;
    }
    if((j-1)>=0&&maze[i][j-1]==0){
        maze[i][j-1]=8;
        findlastCombination(maze,i,j-1);
        maze[i][j-1]=0;
    }
    if((j+1)<m&&maze[i][j+1]==0){
        maze[i][j+1]=8;
        findlastCombination(maze,i,j+1);
        maze[i][j+1]=0;
    }
    if((i-1)>=0&&maze[i-1][j]==0){
        maze[i-1][j]=8;
        findlastCombination(maze,i-1,j);
        maze[i-1][j]=0;
    }
}
int main(){
    maze={{0,0,1,0,0},{0,0,0,0,0},{0,0,0,1,0},{1,1,0,1,1},{0,0,0,0,0}};
    maze[0][0]=6;
    visited=maze; //visited.insert(maze) visited.assign(maze.begin(),maze.end());
    n=maze.size();
    m=maze[0].size();
    findlastCombination(maze,0,0);
    for(auto maze:ans){
        for(auto row:maze){
           for(int i:row){
            std::cout<<i<<" ";
           }
           std::cout<<"\n";
        }
        std::cout<<"\n";
    }
    std::cout<<count;
    return 0;
}