#include<bits/stdc++.h>
using namespace std;


void binarySearch(vector<int> arr,int key){
    int l=0,r=arr.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==key){
            cout<<"found at index "<<mid<<endl;
            return;
        }else if(arr[mid]>=key){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
}
int main(){
    vector<int> arr={6,7,5,8,88,34,1,9};
    sort(arr.begin(),arr.end());
    for(int i:arr) cout<<i<<" ";
    binarySearch(arr,88);
}