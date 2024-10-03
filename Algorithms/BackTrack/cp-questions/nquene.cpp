#include<bits/stdc++.h>

int n=4;
std::vector<std::vector<std::vector<char>>> res;
std::vector<int> rowCheck(n,0),upperD(2*n-1,0),lowerD(2*n-1,0);

bool isSafe(std::vector<std::vector<char>> &board,int i,int j){
    int n=board.size();
    int col=i,row=j;
    while(col>=0&&row>=0){
        if(board[row][col]=='Q') return false;
        col--;
        row--;
    }
     col=i,row=j;
    while(col>=0&&row<n){
        if(board[row][col]=='Q') return false;
        col--;
        row++;
    }
     col=i,row=j;
    while(col>=0){
        if(board[row][col]=='Q') return false;
        col--;
    }
    return true;
}
void Dnquene(int col,std::vector<std::vector<char>> &board){
    if(col==board.size()){
        res.push_back(board);
        return;
    }
    for(int row=0;row<board.size();row++){
        if(rowCheck[row]==0&&upperD[row+col]==0&&lowerD[board.size()-1+col-row]==0){
            lowerD[board.size()-1+col-row]=1;
            upperD[row+col]=1;
            rowCheck[row]=1;
            board[row][col]='Q';
            Dnquene(col+1,board);
            board[row][col]='.';
            rowCheck[row]=0;
            upperD[row+col]=0;
            lowerD[board.size()-1+col-row]=0;
        }
    }
}

int main(){
    std::vector<std::vector<char>> board(n,std::vector<char>(n,'.'));
    Dnquene(0,board);
    for(auto i:res){
        for(auto j:i){
            for(auto k:j){
                std::cout<<k<<" ";
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
    }
    return 0;
}