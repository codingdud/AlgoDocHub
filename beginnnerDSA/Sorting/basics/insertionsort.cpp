#include<bits/stdc++.h>

void printarr(int* arr,int n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

void insertionsort(int arr[],int n){
    int key;
    for(int i=1;i<n;i++){
        key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printarr(arr,n);
}

int main(){
    int arr[]={4,3,2,1};
    insertionsort(arr,4);
    return 0;
}