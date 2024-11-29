#include<bits/stdc++.h>
using namespace std;

vector<int> toposort(vector<vector<int>> &graph,int k){
    vector<int> indg(k,0);
    queue<int> q;
    vector<int> topo;
    for(auto it:graph) for(int i:it) indg[i]++;
    for(int i=0;i<indg.size();i++) if(indg[i]==0) q.push(i);
    while(!q.empty()){
        int node=q.front();
        topo.push_back(node);
        q.pop();
        for(int i:graph[node]){
            indg[i]--;
            if(indg[i]==0) q.push(i);
        }
    }
    return topo;
}

string alinedecoder(vector<string> &aline,int k){
    vector<vector<int>> graph(k);
    int n=aline.size()-1;
    for(int i=0;i<n;i++){
        string s1=aline[i];
        string s2=aline[i+1];
        int len=min(s1.size(),s2.size());
        for(int j=0;j<len;j++){
            if(s1[j]!=s2[j]){
                graph[s1[j]-'a'].push_back(s2[j]-'a');
                break;
            }
        }
    }
    for( auto it:graph) {for(int i:it) cout<<i<<" "; cout<<"\n";}
    vector<int> decode=toposort(graph,k);
    string ans="";
    for(auto it:decode) ans.push_back(char(it+'a'));
    return ans;
}

int main(){
    vector<string> graph={"baa","abad","abca","cab","cad"};
    cout<<alinedecoder(graph,4);
}