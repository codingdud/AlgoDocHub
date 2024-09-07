#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[]) {
//read arguments from command line
cout << "argc:" << argc << "\n";
if (argc < 2) {
    cout << "Usage: ./a.out <arg1> <arg2> ...\n";
    return 1;
}
for (int i = 0; i < argc; i++) {
    string arg = argv[i];
    cout << "arg[" << i << "]:" << arg << "\n";
}
}