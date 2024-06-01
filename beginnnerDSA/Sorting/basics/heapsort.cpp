#include<bits/stdc++.h>
using namespace std;

//child parent realrion in heap
//p->c1,c2  c1=p*2+1 c2=p*2+2
//c->p (c-1)/2

//insetion in heap using push_back method
//first we push the value and the currect place of value
void inssert(vector<int> &arr,int val){
    if(arr.size()==0) arr.push_back(val);
    else{
        arr.push_back(val);
        int s=arr.size()-1;
        while (s>0&&arr[s]>arr[(s-1)/2])
        {
            swap(arr[s],arr[(s-1)/2]);
            s=(s-1)/2;
        }
        
    }
}
//heapyfy heap using insert method
vector<int> heapfy(vector<int> &arr){
    vector<int> ans;
    for(int i:arr) inssert(ans,i);
    return ans;
}

void maxheap(vector<int> &arr,int i,int n){
    int left=i*2+1,right=i*2+2,max=i;
    if(left<n&&arr[max]<arr[left]) max=left;
    if(right<n&&arr[max]<arr[right]) max=right;
    if(max!=i){
        swap(arr[max],arr[i]);
        maxheap(arr,max,n);
    }
}
void minheap(vector<int> &arr,int i,int n){
    int left=i*2+1,right=i*2+2,min=i;
    if(left<n&&arr[min]>arr[left]) min=left;
    if(right<n&&arr[min]>arr[right]) min=right;
    if(min!=i){
        swap(arr[min],arr[i]);
        maxheap(arr,min,n);
    }
}
//heapify using maxheap
void buildmaxheap(vector<int> &arr,int n){
    for(int i=(n/2)-1;i>=0;i--){
        maxheap(arr,i,n);
    }
}
void heapsort(vector<int> &arr){
    buildmaxheap(arr,arr.size());
    for(int i=arr.size()-1;i>=0;i--){
        swap(arr[0],arr[i]);
        minheap(arr,0,i);
    }
}
int main(){
    vector<int> arr={1,4,2,3,6};
    vector<int> ans=heapfy(arr);
    for(int i:ans) cout<<i<<" ";
    heapsort(arr);
    for(int i:arr) cout<<i<<" ";
    return 0;
}