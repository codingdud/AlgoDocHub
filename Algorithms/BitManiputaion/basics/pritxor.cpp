//print xor of all number for give n from 1 to n
#include<iostream>
int main(){
    int num;
    std::cin>>num;
    int temp=num%4;
    if(temp==0) std::cout<<num;
    else if(temp==1) std::cout<<1;
    else if(temp==2) std::cout<<num+1;
    else std::cout<<0;
}