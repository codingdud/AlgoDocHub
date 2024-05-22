//removing last bit uisng diffrent technics

#include<iostream>
using namespace std;
void forloop(int num){
    int mask,ans;
    for(int i=0;i<32;i++){
        mask=1<<i;
        ans=num>>i;
        if(ans&1!=0){
            cout<<(num&~mask);
            return;
        }
    }
}
void whileloop(int num){
    int temp=num,cunt=0;
    while(temp){
        if(temp&1!=0) break;
        cunt++;
        temp>>=1;
    }
    temp=1<<cunt;
    cout<<(num&~temp);
}
void bitwisemaupulation(int num){
    cout<<(num&(num-1));
}
int main(){
    int num=5;
    //forloop(num);
    //whileloop(num);
    bitwisemaupulation(num);
}