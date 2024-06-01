#include<iostream>
using namespace std;

//merge two shorted arr
void merge(int arr[],int l,int m,int r){
    int left=l,right=m+1;
    while(left<=m&&right<=r){
        if(arr[left]<arr[right]){
            left++;
        }
        else{
            swap(arr[left],arr[right]);
            left++;
        }
    }
    for(int i=l;i<=r;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
//devide and conqure
void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4,3,2,1,6};
    mergesort(arr,0,4);
    printarr(arr,5);
}