#include<bits/stdc++.h>

bool isValid(std::vector<std::vector<char>> &sudoko,int row,int col,char ch){
    for(int i=0;i<9;i++){
        if(sudoko[row][i]==ch) return false;
        if(sudoko[i][col]==ch) return false;
        if(sudoko[3*(row/3)+i/3][3*(col/3)+i%3]==ch) return false;
    }
    return true;
}
bool solve(std::vector<std::vector<char>> &sudoko){
        for(int j=0;j<sudoko[0].size();j++){
    for(int i=0;i<sudoko.size();i++){
            if(sudoko[i][j]=='.'){
                for(char ch='1';ch<='9';ch++){
                    if(isValid(sudoko,i,j,ch)){
                        sudoko[i][j]=ch;
                        if(solve(sudoko)==true) return true;
                        else sudoko[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main(){
    std::vector<std::vector<char>> sudoko={
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    solve(sudoko);
    for(int i=0;i<9;i++){
        if(i%3==0&&i!=0) std::cout<<"---------------------"<<std::endl;
        for(int j=0;j<9;j++){
            if(j==3||j==6) std::cout<<"| ";
            std::cout<<sudoko[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}