#include<bits/stdc++.h>

void merge(std::vector<int> &arr,int i,int m,int j){
    //std::cout<<i<<" "<<m<<" "<<j<<"\n";
    std::vector<int> temp;
    int l=i,r=m+1;
    while(l<=m&&r<=j){
        if(arr[l]<arr[r]){
            temp.push_back(arr[l++]);
        }else{
            temp.push_back(arr[r++]);
        }
    }
    while(l<=m) temp.push_back(arr[l++]);
    while(r<=j) temp.push_back(arr[r++]);
    l=0;
    for(int k=i;k<=j;k++){//carefull
        arr[k]=temp[l++];
    }
    return;
}

void mergesort(std::vector<int> &arr,int i,int j){
    if(i>=j) return;
    int m=i+(j-i)/2;//importance
    std::cout<<i<<" "<<m<<" "<<j<<"\n";
    mergesort(arr,i,m);
    mergesort(arr,m+1,j);
    merge(arr,i,m,j);
}

int main(){
    std::vector<int> arr={4,5,6,7,1};
    mergesort(arr, 0, arr.size()-1);
    for(int i:arr) std::cout<<i<<" ";
    return 0;
}