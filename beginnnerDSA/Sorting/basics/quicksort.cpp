#include<bits/stdc++.h>
#include<time.h>
using namespace std;
time_t t;
void printarr(int arr[],int l,int h){
    for(int i=l;i<h;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int partion(int arr[],int l,int h){
    int i=l,j=h,piv=arr[l];
    while(i<j){
        while(arr[++i]<piv);
        while(arr[--j]>piv);
        if(i<j){
            swap(arr[i],arr[j]);
        }
        printarr(arr,l,h);
    }
    swap(arr[l],arr[j]);
    return j;
}
int rpartion(int arr[],int l,int h){
    srand((unsigned)time(&t));
    int mid=(rand()%(h-l))+l;
    int i=l,j=h,piv=arr[mid];
    while(i<j){
        while(arr[++i]<piv);
        while(arr[--j]>piv);
        if(i<j){
            swap(arr[i],arr[j]);
        }
        printarr(arr,l,h);
    }
    swap(arr[mid],arr[j]);
    return j;
}

void quicksort(int arr[],int l,int h){
    if(l<h){
        int mid=partion(arr,l,h);
        quicksort(arr,l,mid-1);
        quicksort(arr,mid+1,h);
    }
}

int main(){
    int arr[]={16,18,16,18,16,18,16,18,1};
    quicksort(arr,0,9);
    printarr(arr,0,9);
}