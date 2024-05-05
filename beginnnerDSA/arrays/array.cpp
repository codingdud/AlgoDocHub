//Search an element in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"yes"<<i<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}


/* 
test case N

INPUT

5 3
7 3 5 2 1

5 10
7 3 5 2 1 

OUTPUT
YES
NO

*/