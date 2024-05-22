#include<iostream>
using namespace std;
int xorn(int num){
    int temp=num%4;
    if(temp==0) return num;
    else if(temp==1) return 1;
    else if(temp==2) return num+1;
    else return 0;
}
int main(){
    int l,r;
    cin>>l>>r;
    cout<<l<<" "<<r<<endl;
    cout<<(xorn(l)^xorn(r));
    return 0;
}