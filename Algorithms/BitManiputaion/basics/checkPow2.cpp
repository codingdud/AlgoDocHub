//check if a number is power of 2 or not
#include<iostream>
int main(){
    int num;
    std::cin>>num;
    if((num&(num-1))==0) {std::cout<<"power of 2:"<<num; exit(0);}
    std::cout<<"not a power of 2:"<<num;
}