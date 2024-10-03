#include<bits//stdc++.h>
int partion(std::vector<int> &arr,int i,int j){
    int mid=arr[i];
    int l=i;
    //7,6,5,4,3
    while(i<j){
        while(arr[++i]<mid);
        while(arr[--j]>mid);
        if(i<j){
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[j],arr[l]);
    return j;
}
void quicksort(std::vector<int> &arr,int low,int high){
    if(low<high){
        int piv=partion(arr,low,high);
        quicksort(arr,low,piv);
        quicksort(arr,piv+1,high);
    }
}
int main(){
    std::vector<int> arr={7,6,6,55,88,7,7,7,76,101};
    quicksort(arr,0,arr.size());
    for(int i:arr) std::cout<<i<<" ";
    return 0;
}