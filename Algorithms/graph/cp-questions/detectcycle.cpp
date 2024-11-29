#include<bits/stdc++.h>
using namespace std;
bool detect(vector<vector<int>> &arr,vector<int> &vist){
    queue<pair<int,int>> qe;
    for(int i=0;i<vist.size();i++)
    if(vist[i]==0){
        vist[i]=1;
        qe.push({i,-1});
        while(!qe.empty()){
            int node=qe.front().first;
            int parent=qe.front().second;
            cout<<node<<"<-"<<parent<<endl;
            qe.pop();
            for(auto ad:arr[node]){
                if(!vist[ad]){
                    vist[ad]=1;
                    qe.push({ad,node});
                }else if(parent!=ad){
                    cout<<ad<<"<--"<<node<<endl;
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
    vector<vector<int>> arr={{1,2},{0,2},{0,1},{0}};
    vector<int> vist(arr.size(),0);
    cout<<detect(arr,vist);
}