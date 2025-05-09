#include<bits/stdc++.h>
using namespace std;

enum dir{
    UP,
    RIGHT,
    DIA,
    NONE
} typedef dir;
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<pair<int,dir>>> arr(text1.size()+1,vector<pair<int,dir>>(text2.size()+1,{0,NONE}));
        for(int i=0;i<text1.size();i++){
            for(int j=0;j<text2.size();j++){
                if(text1[i]==text2[j]){
                    arr[i+1][j+1].first=1+arr[i][j].first;
                    arr[i+1][j+1].second=DIA;
                }
                else if(arr[i][j+1].first>arr[i+1][j].first){
                    arr[i+1][j+1].first=arr[i][j+1].first;
                    arr[i+1][j+1].second=UP;
                } else {
                    arr[i+1][j+1].first=arr[i+1][j].first;
                    arr[i+1][j+1].second=RIGHT;
                }
            }
        }
        return arr[text1.size()][text2.size()].first;
    }
};