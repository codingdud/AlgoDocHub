#include<bits/stdc++.h>
using namespace std;
pair<int,int> single2(vector<int> arr){
    int ans=0,b1=0,b2=0;
    for(int i:arr) ans^=i;
    int pos=ans&(ans-1)^ans;
    for(int i:arr){ 
        if(i&pos) b1^=i; 
        else b2^=i;
    }
    return {b1,b2};
}
int main(){
    pair<int,int> p=single2({2,2,3,3,4,5});
    cout<<p.first<<" "<<p.second<<endl;
}