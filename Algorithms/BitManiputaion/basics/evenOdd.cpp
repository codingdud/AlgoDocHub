//find if a number is odd or even using bitwise operator
//if a number is odd then the last bit will be 1
//if a number is even then the last bit will be 0
#include<iostream>
int main(){
    int num;
    std::cin>>num;
    std::cout<<(num&1);
}