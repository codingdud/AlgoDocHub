#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char *str1;
    char str2[] = "Hello, world!";
    str1=str2;
    printf("%p ",str1);
    printf("%p ",str2);
    return 0;
}