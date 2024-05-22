#include<bits/stdc++.h>
using namespace std;

int usingmap(vector<int> v){
    unordered_map<int,int> m;
    for(int i:v){
        m[i]++;
        cout<<m[i]<<" ";
    }
    for(int i:v) if(m[i]==1) return m[i];
    return 0;
}
int uingbitm(vector<int> v){
    int ans=0,count;
    for(int i=0;i<32;i++){
        count=0;
        for(int j:v){
            if(j&1<<i) count++;
        }
        if(count%3==1) ans|=1<<i;
    }
    cout<<ans;
    return ans;
}
int usingSort(vector<int> v){
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i+3) if(v[i]!=v[i-1]) return v[i-1];
    return v[v.size()-1];
}
int usingOneAndTwo(vector<int> v){
    int one=0, two=0;
    for(int i:v){
        one=one^i&~two;
        two=two^i&~one;
    }
    return one;
    
}

int main(){
    //usingmap({1,1,1,2,2,3});
    //uingbitm({1,1,1,2,2,2,3});
    cout<<usingOneAndTwo({1,1,1,2,2,2,3});
}