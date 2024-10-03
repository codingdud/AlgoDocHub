#include<bits/stdc++.h>
//represend the graph using materix
void graph(){
    int n,m;
    std::cout<<"enter number of nodes:";
    std::cin>>n;
    std::cout<<"enter number of edges:";
    std::cin>>m;
    std::vector<std::vector<int>> arr(n,std::vector<int>(n,0));
    int j,k;
    for(int i=0;i<m;i++){
        std::cin>>j>>k;
        //std::cout<<j<<" "<<k;
        arr[k][j]=1;
        arr[j][k]=1;
    }
    for(auto i:arr){
        for(int j:i) std::cout<<j<<" ";
        std::cout<<"\n";
    }
}
int main(){
    graph();
    return 0;
}