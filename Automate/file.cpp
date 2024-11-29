#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  
  // This is a sample code to use stdin and stdout.
  // Edit and remove this code as you like.

  string line;
  int index = 1;
  while (!cin.eof()) {
    getline(cin, line);
    cout << "line[" << index++ << "]:" << line << "\n";
  }
  return 0;
}
