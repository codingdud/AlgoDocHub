#include<bits/stdc++.h>
using namespace std;
bool jump(vector<int> &arr){
    int n=arr.size()-1;// 4
    int i=0;
    while(i<=n){
        //cout<<"i"<<" "<<arr<<" ";
        //cout<<i<<" "<<arr[i]<<" \n";
        if(i==n) return true;
        i=i+arr[i];
    }
   // if(i==n) return true;
    return false;
}
int main(){
    vector<int> arr={1,2,3,1,5};
    cout<<jump(arr);
    return 0;
}
