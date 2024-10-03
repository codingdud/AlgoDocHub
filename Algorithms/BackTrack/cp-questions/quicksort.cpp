#include<bits//stdc++.h>

int partion(std::vector<int> &arr,int i,int j){
    int l=i;
    i+=1;
    while(i<j){
        //std::cout<<i<<" "<<j<<"\n";
        while(arr[i]<arr[l]) i++;
        while(arr[j]>arr[l]) j--;
        if(i<j){
            std::swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    std::swap(arr[j],arr[l]);
    return j;
}
void quicksort(std::vector<int> &arr,int low,int high){
    if(low<high){
        int piv=partion(arr,low,high);
        quicksort(arr,low,piv-1);
        quicksort(arr,piv+1,high);
    }
}
int main(){
    std::vector<int> arr={7,6,6,55,88,7,7,7,76,101};
    quicksort(arr,0,arr.size()-1);
    for(int i:arr) std::cout<<i<<" ";
    return 0;
}