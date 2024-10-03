#include<iostream>
using namespace std;

//merge two shorted arr
void merge(int arr[],int l,int m,int r){
    int left=l,right=m+1;
    int* temp = new int[r - l + 1];
    int k = 0;
    while(left<=m&&right<=r){
        if(arr[left]<=arr[right]){
            temp[k++] = arr[left++];
        } else {
            temp[k++] = arr[right++];
        }
    }
    while(left<=m){
        temp[k++] = arr[left++];
    }
    while(right<=r){
        temp[k++] = arr[right++];
    }
    for(int i=0;i<k;i++){
        arr[l+i] = temp[i];
    }
    delete[] temp;
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
    int arr[]={1,2,9,10,3,4,5};
    mergesort(arr,0,6);
    printarr(arr,7);
}