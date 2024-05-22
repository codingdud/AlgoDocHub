//swap two numbers using bitwise operations
#include<iostream>
int main(){
    int a=5,b=6;
    //swap
    std::cout<<a<<" "<<b<<std::endl;
    a=a^b;
    b=a^b;
    a=a^b;
    std::cout<<a<<" "<<b<<std::endl;
}