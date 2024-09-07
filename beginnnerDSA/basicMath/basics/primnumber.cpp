#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>> num;
    int root=sqrt(num);
    int counter=0;
    for(int i=1;i<root;i++){
        if(num%i==0){
            counter++;
            if((num/i)!=i) counter++;
        }
    }
    if(counter>2) cout<<"not prime";
    else cout<<"prime number";
}