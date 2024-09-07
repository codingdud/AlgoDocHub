#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;
int main(int argc, char *argv[]) {
    if(argc<2){
        cout<<"Usage: ./a.out <filename>\n";
        return 1;
    }
    string filename=argv[1];
    ifstream file(filename);
    if(!file.is_open()){
        cout<<"Could not open file\n";
        return 1;
    }
    string line;
    vector<string> lines;
    while(getline(file,line)){
        lines.push_back(line);
    }
    file.close();
    for(int i=0;i<lines.size();i++){
        cout<<lines[i]<<"\n";
    }
    return 0;
}