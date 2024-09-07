#include<iostream>
using namespace std;

void linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"found at index "<<i<<endl;
            return;
        }
    }

}
int main(){
    int n,key;
    n=10;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    linearSearch(arr,n,key);    
    return 0;
}