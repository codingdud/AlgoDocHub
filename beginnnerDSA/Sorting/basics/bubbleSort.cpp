#include<bits/stdc++.h>
using namespace std;

void printarr(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int* arr,int n){
    for(int i=1;i<n;i++) 
        for(int j=0;j<n-i;j++) if(arr[j]>arr[j+1]) 
            swap(arr[j],arr[j+1]);
    printarr(arr,n);
}

int main(){
    int arr[]={4,3,2,1};
    bubbleSort(arr,4);
    return 0;
}